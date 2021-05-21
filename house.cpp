#include <windows.h>
#include "glut.h"

void myInit(void)
{
glClearColor(1.0,1.0,1.0,0.0);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_POLYGON);			//Drawing the roof
glColor3f(0.0f, 0.0f, 1.0f);	//Set the color to Blue
glVertex2i(250, 390);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2i(120, 270);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2i(390, 270);
glEnd();

glBegin(GL_POLYGON);			//Drawing the House
glColor3f(0.5f, 0.5f, 0.5f);	//Sets of color
glVertex2i(150, 270);
glVertex2i(150, 170);
glVertex2i(360, 170);
glVertex2i(360, 270);
glEnd();

glBegin(GL_POLYGON);			//Drawing the window
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(200, 240);
glVertex2i(200, 210);
glVertex2i(230, 210);
glVertex2i(230, 240);
glEnd();

glBegin(GL_POLYGON);			//Drawing the door
glColor3f(1.0f, 1.0f, 1.0f);	
glVertex2i(280, 172);
glVertex2i(320, 172);
glVertex2i(320, 240);
glVertex2i(280, 240);
glEnd();

glBegin(GL_POLYGON);			//Drawing the Star
glColor3f(1.0f, 0.65f, 0.0f);
glVertex2i(490, 360);
glVertex2i(460, 360);
glVertex2i(487, 340);
glVertex2i(475, 310);
glVertex2i(505, 335);
glVertex2i(535, 310);
glVertex2i(525, 340);
glVertex2i(550, 360);
glVertex2i(518, 360);
glVertex2i(505, 390);
glEnd();

glFlush(); // send all output to display
}

int main(int argc, char** argv)
{
glutInit(&argc, argv); // initialize the toolkit
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set display mode
glutInitWindowSize(640,480); // set window size
glutInitWindowPosition(100, 150); // set window position on screen
glutCreateWindow("Draw DOTS"); // open the screen window
glutDisplayFunc(myDisplay); // register redraw function
myInit();
glutMainLoop(); // go into a perpetual loop
return 0;
}