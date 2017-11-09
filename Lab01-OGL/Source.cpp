#include <iostream>
#include <fstream>
#include <string>
#include <glut.h>

using namespace std;

void myDisplay(void)
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 20, 0, 20);

	glBegin(GL_POLYGON);				//draws ship's lower part
	glColor3f(0, 1, 0);
	glVertex2f(2.0, 1.0);
	glVertex2f(12.0, 1.0);
	glVertex2f(14.0, 3.0);
	glVertex2f(1.0, 3.0);
	glEnd();

	glBegin(GL_POLYGON);				//draws sail boat
	glColor3f(0, 0, 1);
	glVertex2f(2.0, 4.0);
	glVertex2f(6.0, 9.0);
	glVertex2f(6.0, 4.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex2f(12.0, 4.0);
	glVertex2f(7.0, 4.0);
	glVertex2f(7.0, 11.0);
	glEnd();

	glBegin(GL_LINES);					//draws text using lines
	glVertex2f(5.0, 17.0);
	glVertex2f(8.0, 17.0);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glVertex2f(5.0, 17.0);
	glVertex2f(5.0, 12.0);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glVertex2f(8.0, 17.0);
	glVertex2f(8.0, 12.0);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glVertex2f(5.0, 14.5);
	glVertex2f(8.0, 14.5);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glVertex2f(10.0, 17.0);
	glVertex2f(13.0, 17.0);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glVertex2f(10.0, 17.0);
	glVertex2f(10.0, 12.0);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glVertex2f(13.0, 17.0);
	glVertex2f(13.0, 12.0);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glVertex2f(10.0, 14.5);
	glVertex2f(13.0, 14.5);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glVertex2f(10.0, 12.0);
	glVertex2f(13.0, 12.0);
	glEnd();


	glFlush();
}

int screenWidth = 640;
int screenHeight = 480;
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(30, 30);
	glutCreateWindow("My Drawing");

	glutDisplayFunc(myDisplay);
	glutMainLoop();
	return 0;
}