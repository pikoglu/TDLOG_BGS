#include "graphics.h"


void red_players_graphics(Image<AlphaColor> players[5],int ratio){
    Image<AlphaColor> temp;

    load(temp, srcPath("Images/Costaud_rouge.png"));
    players[0]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Dur_rouge.png"));
    players[1]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Fute_rouge.png"));
    players[2]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Ordinaire_rouge.png"));
    players[3]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Rapide_rouge.png"));
    players[4]=scaleUp(temp,ratio);
}


void blue_players_graphics(Image<AlphaColor> players[5],int ratio){
    Image<AlphaColor> temp;

    load(temp, srcPath("Images/Costaud_bleu.png"));
    players[0]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Dur_bleu.png"));
    players[1]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Fute_bleu.png"));
    players[2]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Ordinaire_bleu.png"));
    players[3]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Rapide_bleu.png"));
    players[4]=scaleUp(temp,ratio);
}


void cards_graphics(Image<AlphaColor> cards[7],int ratio){
    Image<AlphaColor> temp;

    load(temp, srcPath("Images/Carte_Endurance.png"));
    cards[0]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Carte1.png"));
    cards[1]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Carte2.png"));
    cards[2]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Carte3.png"));
    cards[3]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Carte4.png"));
    cards[4]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Carte5.png"));
    cards[5]=scaleUp(temp,ratio);

    load(temp, srcPath("Images/Carte6.png"));
    cards[6]=scaleUp(temp,ratio);
}


void board_graphics(Image<AlphaColor> &board,int ratio){

    load(board, srcPath("Images/plateau.png"));
    board=scaleUp(board,ratio);
}


void ball_graphics(Image<AlphaColor> &ball,int ratio){
    load(ball, srcPath("Images/Ballon.png"));
    ball=scaleUp(ball,1);
}





