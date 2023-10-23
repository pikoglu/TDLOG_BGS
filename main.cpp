#include <Imagine/Graphics.h>
#include <Imagine/Graphics.h>
#include <Imagine/Images.h>
#include <Imagine/Common.h>
using namespace Imagine;

#include <iostream>
#include <cmath>

#include "graphics.h"


Coords<2> posisition_board(int x0,int y0,int l_case){
    Coords<2> P;
    P.x()=-l_case;
    P.y()=-l_case;
    int x,y;
    getMouse(x,y);
    for (int i=0;i<11;i++){
        for (int j=0;j<8;j++){
            if (x>x0+i*l_case and x<x0+(i+1)*l_case){
                if (y>y0+j*l_case and y<y0+(j+1)*l_case){
                    //drawRect(x0+i*l_case,y0+j*l_case,l_case,l_case,RED);
                    P.x()=x0+i*l_case;
                    P.y()=y0+j*l_case;
                }
            }
        }
    }
    return P;
}


int main(){
    int ratio=2; //zoom every elements of the game

    //Load every graphic needed to display the game
    Image<AlphaColor> board,ball,red_players[5],blue_players[5],cards[7];
    red_players_graphics(red_players,1);
    blue_players_graphics(blue_players,1);
    board_graphics(board,ratio);
    ball_graphics(ball,ratio);
    cards_graphics(cards,ratio);



    openWindow(board.width(),board.height());
    display(board,0,0);

    int x0=92*ratio;
    int y0=59*ratio;
    int l_case=47*ratio;

    Coords<2> P;
    do{
        P=posisition_board(x0,y0,l_case);
        display(blue_players[rand()%4],P.x(),P.y());
    }while(true);

    milliSleep(10000);



    return 0;

}
