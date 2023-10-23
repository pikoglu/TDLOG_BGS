#pragma once
#include <Imagine/Graphics.h>
#include <Imagine/Images.h>
#include <Imagine/Common.h>
using namespace Imagine;

#include <iostream>



void red_players_graphics(Image<AlphaColor> players[5],int ratio);

void blue_players_graphics(Image<AlphaColor> players[5],int ratio);

void cards_graphics(Image<AlphaColor> cards[7],int ratio);

void ball_graphics(Image<AlphaColor> &ball,int ratio);

void board_graphics(Image<AlphaColor> &board,int ratio);
