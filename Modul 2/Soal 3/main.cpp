#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display(){
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 0.0, 0.0);glRectf(8.0, 0.0, 0.0, -8.0);
glColor3f(1.0, 0.0, 0.0);glRectf(0.0, 8.0, -8.0, 0.0);
glColor3f(1.0, 1.0, 1.0);glRectf(6.0, 7.0, 2.0, 5.8);
glColor3f(1.0, 1.0, 1.0);glRectf(6.0, 4.8, 2.0, 3.4);
glColor3f(1.0, 1.0, 1.0);glRectf(6.0, 2.5, 2.0, 1.0);
glColor3f(1.0, 1.0, 1.0);glRectf(3.5, 7.0, 2.0, 1.0);
glColor3f(1.0, 1.0, 1.0);glRectf(-2.0, -1.0, -6.0, -2.0);
glColor3f(1.0, 1.0, 1.0);glRectf(-3.0, -1.0, -5.0, -7.0);
glColor3f(1.0, 1.0, 1.0);glRectf(-2.0, -6.0, -6.0, -7.0);
glFlush();
}
void myinit(){
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-8.0,8.0,-8.0,8.0);
glMatrixMode(GL_MODELVIEW);
glClearColor(0.0,0.0,0.0,0.0);
glColor3f (1.0, 1.0, 0.0);
}
int main(int argc, char* argv[]){
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(700,700);
//glutInitWindowPosition(100,100);
glutCreateWindow("Primitif Bangun Datar");
glutDisplayFunc(display);
myinit();
glutMainLoop();
return 0;
}
