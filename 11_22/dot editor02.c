/***
744041 綾本 公平
***/
#include <stdio.h>
#include <math.h>
#include <handy.h>
#include <string.h>

int main()
{
    hgevent *event;
    int data[4];
    int color[2] = {HG_BLACK, HG_WHITE};
    int n;
    double x, y;
    
    for(n = 0; n < 5; n++){
    data[n] = color[0];
    }
    
    // サイズ指定
    HgOpen(400.0, 400.0);
    HgSetWidth(1.0);
    HgSetColor(HG_WHITE);

    HgSetFillColor(HG_RED);
    HgBoxFill(0, 0, 20.0, 20.0, 0);

    HgSetEventMask(HG_MOUSE_DOWN);

    for(;;) {
		event = HgEvent();
		if (event->type == HG_MOUSE_DOWN) {
			x=event->x;
			y=event->y;
            n = x / 100;
            printf("x=%5.2f, y=%5.2f\n", x, y);
            
            if((0 <= x && x <= 20.0) && (0 <= y && y <= 20.0)){
                break;
            }

            HgSetFillColor(data[n]);
            HgBoxFill(n * 100, 0, 100, 400, 1);
            HgSetFillColor(HG_RED);
            HgBoxFill(0, 0, 20.0, 20.0, 0);

            if(data[n] == color[0]){
                data[n] = color[1];
            }else{
                data[n] = color[0];
            }

		}
	}
	
    return 0;
}