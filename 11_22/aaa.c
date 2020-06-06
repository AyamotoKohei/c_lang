#include <stdio.h>
#include <handy.h>

#define MBOX 100 //MAX BOX
#define PALX 400.0
#define PALY 500.0

int main() {
	hgevent *event;
    int countx,county,wid,pal,numflag=0,box,i,j,palmode=0,bflag=0;
	double disp,x,y,e_box=40.0,inter,coly[3]={200.0,300.0,400.0},colx=50.0,cData[3]={0.0,0.0,0.0}; //exit_box

	for(;;){ //size
		if(numflag==1) printf("Anormal value\n");
		numflag = 1;
		printf("box number>>>");
		scanf("%d",&box);
		if((0<=box)&&(box<=200)) break;
	}
	numflag = 0;
	for(;;){
		if(numflag==1) printf("Anormal value\n");
		numflag = 1;
		printf("display size>>>");
		scanf("%lf",&disp);
		if((0.0<=disp)&&(disp<=760.0)) break;
	}
	inter = disp / box;
	
	wid = HgOpen(disp, disp);  //OPEN
	HgSetWidth(1.0);
	HgSetColor(HG_BLACK);
	pal = HgWOpen(100.0,100.0,PALX,PALY);

	HgSetFillColor(HG_WHITE); //box draw
	for(i=0;i<box;i++){
		for(j=0;j<box;j++){
			HgBoxFill(j*inter,i*inter,inter,inter,1);
		}
	}
	HgWSetFillColor(pal,HG_LGRAY);  //exit_box draw
	HgWBoxFill(pal,PALX-e_box*2,PALY-e_box,e_box*2,e_box,0);
	HgWSetFont(pal,HG_M,20.0);
	HgWText(pal,PALX-e_box*2+20.0,PALY-e_box+10.0,"EXIT");

	HgWSetFont(pal,HG_M,45.0); //rgb line
	HgWText(pal,50.0,PALY-55.0,"RGB Line");
	HgWText(pal,10.0,PALY-155.0,"R\n");
	HgWText(pal,10.0,PALY-255.0,"G\n");
	HgWText(pal,10.0,PALY-355.0,"B\n");
	HgWSetFillColor(pal,HG_WHITE); 
	for(i=0;i<3;i++){
		HgWBoxFill(pal,50.0,(PALY-100.0)-i*100.0,255.0,50.0,1);
	}
	HgWSetFillColor(pal,HG_BLACK);
	HgWBoxFill(pal,100.0,50.0,100.0,100.0,1);

	HgSetEventMask(HG_MOUSE_DOWN|HG_MOUSE_DRAG);
	HgWSetEventMask(pal,HG_MOUSE_DOWN|HG_MOUSE_DRAG|HG_MOUSE_MOVE);
//======================================MAIN LOOP===============================//
	for(;;) {
		event = HgEvent();
		if(event->wid==pal){ //====================PALETTE====================//
			if ((event->type == HG_MOUSE_DOWN)||(event->type == HG_MOUSE_DRAG)){
				x=event->x;
				y=event->y;
				countx = x / inter;
				county = y / inter;
				palmode = 1;
			}else if(event->type == HG_MOUSE_MOVE){
				x=event->x;
				y=event->y;
				countx = x / inter;
				county = y / inter;
				palmode = 2;
			}else{
				palmode = 0;
			}
			bflag = 0;
			switch(palmode){
				case 1: 				
					printf("x=%5.2f, y=%5.2f\n", x, y);
					if((colx<=x)&&(x<=(colx+255.0))){ //rgb control
						for(i=0;i<3;i++){
							if((coly[i]<=y)&&(y<=coly[i]+50.0)){
								HgWSetFillColor(pal,HG_WHITE);
								HgWBoxFill(pal,colx,coly[i],255.0,50.0,1);
								HgWSetFillColor(pal,HG_GRAY);
								HgWBoxFill(pal,colx,coly[i],x-colx,50.0,1);
								cData[i] = (x - colx) / 255.0;
							}
						}
						HgWSetFillColor(pal,HgRGB(cData[2],cData[1],cData[0])); //color review
						HgWBoxFill(pal,100.0,50.0,100.0,100.0,1);
					}
					if((((PALX-e_box*2)<=x)&&(x<=PALX))&&((PALY-e_box<=y)&&(y<=PALY))){ //EXIT?
						printf("EXIT?\n");
						bflag = 1;
						break;
					}
				case 2:
					if((((PALX-e_box*2)<=x)&&(x<=PALX))&&((PALY-e_box<=y)&&(y<=PALY))){ 
					HgWSetFillColor(pal,HG_RED);  //exit_box draw
					}else{
						HgWSetFillColor(pal,HG_LGRAY);
					}
					HgWBoxFill(pal,PALX-e_box*2,PALY-e_box,e_box*2,e_box,0);
					HgWSetFont(pal,HG_M,20.0);
					HgWText(pal,PALX-e_box*2+20.0,PALY-e_box+10.0,"EXIT");
				case 0:
					break;

			} 
			if(bflag==1)	break; //EXIT THIS APP
		}else{ //====================MAIN PANNEL====================//
			if ((event->type == HG_MOUSE_DOWN)||(event->type == HG_MOUSE_DRAG)) {
				x=event->x;
				y=event->y;
				countx = x / inter;
				county = y / inter;
				printf("x=%5.2f, y=%5.2f\n", x, y);
				HgSetFillColor(HgRGB(cData[2],cData[1],cData[0]));
				HgBoxFill(countx*inter,county*inter,inter,inter,1);
			}
		}
	}
	
	HgClose();
	return 0;
}