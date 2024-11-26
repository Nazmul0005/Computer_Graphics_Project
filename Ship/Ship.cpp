// C program for the above approach

#include <conio.h>
#include <graphics.h>
#include <stdio.h>

// Driver Code
int main()
{
	int gd = DETECT, gm;

	// Initialize of gdriver
	// with DETECT macros
	initgraph(&gd, &gm,"");

	// Set Background Color Cyan
	setfillstyle(SOLID_FILL,
				CYAN);
	floodfill(50, 50, 15);

	// Base Line
	line(300, 600, 1000, 600);

	// Lower Line
	line(290, 580, 1003, 580);

	// Upper Line
	line(285, 560, 1005, 560);

	// Left Tangent
	line(300, 600, 220, 400);

	// Right Tangent
	line(1000, 600, 1020, 450);

	// Connector Line
	line(220, 400, 1020, 450);
	setfillstyle(SOLID_FILL,
				BLACK);
	floodfill(250, 420, 15);
	floodfill(350, 590, 15);
	setfillstyle(SOLID_FILL,
				RED);
	floodfill(350, 570, 15);

	// First Life Jacket
	setfillstyle(SOLID_FILL,
				WHITE);
	circle(400, 480, 30);
	circle(400, 480, 20);
	floodfill(375, 480, 15);

	// Second Life Jacket
	circle(500, 480, 30);
	circle(500, 480, 20);
	floodfill(475, 480, 15);

	// Ralling
	setfillstyle(SOLID_FILL,
				BLACK);
	line(230, 400, 230, 370);
	line(225, 400, 225, 365);
	line(230, 370, 430, 385);
	line(225, 365, 435, 380);
	line(430, 385, 430, 415);
	line(435, 380, 435, 415);
	floodfill(227, 367, 15);

	// Cabin
	setfillstyle(SOLID_FILL,
				DARKGRAY);
	line(410, 415, 410, 315);
	line(410, 315, 1000, 374);
	line(1000, 374, 1000, 450);
	floodfill(950, 390, 15);
	floodfill(425, 410, 15);
	setfillstyle(SOLID_FILL,
				WHITE);

	// First Window
	circle(900, 400, 20);
	floodfill(890, 400, 15);

	// Second Window
	circle(820, 400, 20);
	floodfill(810, 400, 15);

	// Third Window
	circle(740, 400, 20);
	floodfill(730, 400, 15);

	// First Chimney
	setfillstyle(SOLID_FILL,
				BLACK);
	line(880, 363, 880, 280);
	line(880, 280, 910, 280);
	line(910, 280, 910, 365);
	floodfill(890, 290, 15);

	// Second Chimney
	line(950, 369, 950, 255);
	line(950, 255, 980, 255);
	line(980, 255, 980, 374);
	floodfill(960, 265, 15);

	// Hold a screen for a
	// while
	getch();

	// Close the initialized
	/// gdriver
	closegraph();
}
