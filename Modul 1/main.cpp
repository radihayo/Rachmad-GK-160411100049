#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display(){
 glClear(GL_COLOR_BUFFER_BIT);
 glLineWidth(4);
 glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 1.0);
 glVertex2f (-14.0, 5.0);
 glVertex2f (14.0, 5.0);
 glVertex2f (-14.0, -5.0);
 glVertex2f (14.0, -5.0);
 glVertex2f (5.0, 14.0);
 glVertex2f (5.0, -14.0);
 glVertex2f (-5.0, 14.0);
 glVertex2f (-5.0, -14.0);

 glColor3f(0.0, 1.0, 1.0);
 glVertex2f (-4.0, -1.0);
 glVertex2f (-4.0, 4.0);
 glVertex2f (-4.0, 4.0);
 glVertex2f (-1.0, 4.0);
 glVertex2f (-1.0, 4.0);
 glVertex2f (-1.0, 3.0);
 glVertex2f (-1.0, 3.0);

 glVertex2f (-3.0, 3.0);
 glVertex2f (-3.0, 3.0);
 glVertex2f (-3.0, 2.0);
 glVertex2f (-3.0, 2.0);
 glVertex2f (-1.5, 2.0);
 glVertex2f (-1.5, 2.0);
 glVertex2f (-1.5, 1.0);
 glVertex2f (-1.5, 1.0);
 glVertex2f (-3.0, 1.0);
 glVertex2f (-3.0, 1.0);
 glVertex2f (-3.0, 0.0);
 glVertex2f (-3.0, 0.0);
 glVertex2f (-1.0, 0.0);
 glVertex2f (-1.0, 0.0);
 glVertex2f (-1.0, -1.0);
 glVertex2f (-1.0, -1.0);
 glVertex2f (-4.0, -1.0);

 glVertex2f (1.0, -4.0);
 glVertex2f (1.9, -4.0);
 glVertex2f (1.9, -4.0);
 glVertex2f (2.1, -3.0);
 glVertex2f (2.1, -3.0);
 glVertex2f (2.9, -3.0);
 glVertex2f (2.9, -3.0);
 glVertex2f (3.1, -4.0);
 glVertex2f (3.1, -4.0);
 glVertex2f (4.0, -4.0);
 glVertex2f (4.0, -4.0);
 glVertex2f (3.0, 1.0);
 glVertex2f (3.0, 1.0);
 glVertex2f (2.0, 1.0);
 glVertex2f (2.0, 1.0);
 glVertex2f (1.0, -4.0);
 glVertex2f (2.2, -2.0);
 glVertex2f (2.8, -2.0);
 glVertex2f (2.8, -2.0);
 glVertex2f (2.5, 0.0);
 glVertex2f (2.5, 0.0);
 glVertex2f (2.2, -2.0);

 glColor3f(0.0, 0.0, 1.0);
 glVertex2f (0.0, 4.0);
 glVertex2f (0.0, -4.0);

 glVertex2f (7.0, 13.0);
 glVertex2f (8.0, 14.0);
 glVertex2f (8.0, 14.0);
glVertex2f (12.0, 14.0);
glVertex2f (12.0, 14.0);
glVertex2f (13.0, 13.0);
glVertex2f (13.0, 13.0);
glVertex2f (13.0, 7.0);
glVertex2f (13.0, 7.0);
glVertex2f (12.0, 6.0);
glVertex2f (12.0, 6.0);
glVertex2f (8.0, 6.0);
glVertex2f (8.0, 6.0);
glVertex2f (7.0, 7.0);
glVertex2f (7.0, 7.0);
glVertex2f (7.0, 13.0);
glVertex2f (8.0, 12.0);
glVertex2f (8.0, 8.0);
glVertex2f (8.0, 8.0);
glVertex2f (9.0, 7.0);
glVertex2f (9.0, 7.0);
glVertex2f (11.0, 7.0);
glVertex2f (11.0, 7.0);
glVertex2f (8.0, 12.0);
glVertex2f (12.0, 8.0);
glVertex2f (9.0, 13.0);
glVertex2f (9.0, 13.0);
glVertex2f (11.0, 13.0);
glVertex2f (11.0, 13.0);
glVertex2f (12.0, 12.0);
glVertex2f (12.0, 12.0);
glVertex2f (12.0, 8.0);

glVertex2f (7.0, -2.0);
glVertex2f (7.0, 0.0);

glVertex2f (7.0, 0.0);
glVertex2f (10.0, 3.0);

glVertex2f (10.0, 3.0);
glVertex2f (13.0, 3.0);

glVertex2f (13.0, 3.0);
glVertex2f (13.0, -4.0);

glVertex2f (13.0, -4.0);
glVertex2f (11.0, -4.0);

glVertex2f (11.0, -4.0);
glVertex2f (11.0, -2.0);

glVertex2f (11.0, -2.0);
glVertex2f (7.0, -2.0);

glVertex2f (11.0, -1.0);
glVertex2f (8.0, -1.0);

glVertex2f (8.0, -1.0);
glVertex2f (11.0, 2.0);
glVertex2f (11.0, 2.0);
glVertex2f (11.0, -1.0);


 glEnd();
 glFlush();
}
void myinit(){
 glMatrixMode(GL_LINE_STRIP);
 glLoadIdentity();
 gluOrtho2D(-15.0,15.0,-15.0,15.0);
 glMatrixMode(GL_MODELVIEW);
 glClearColor(0.0,0.0,0.0,0.0);
 glColor3f (1.0, 1.0, 0.0);
 //glLineWidth(9);
}
int main(int argc, char* argv[]){
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(500,500);
 //glutInitWindowPosition(100,100);
 glutCreateWindow("Layang - layang");
 glutDisplayFunc(display);
 myinit();
 glutMainLoop();
return 0;
}
