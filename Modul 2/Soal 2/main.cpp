#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display(){
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_QUADS);
glColor3f(0.0, 1.0, 1.0);
glVertex2f(-8.0, 0.0);
glVertex2f(-8.0, 8.0);
glVertex2f(0.0, 8.0);
glVertex2f(0.0, 0.0);
glColor3f(0.0, 1.0, 1.0);
glVertex2f(8.0, 0.0);
glVertex2f(8.0, -8.0);
glVertex2f(0.0, -8.0);
glVertex2f(0.0, 0.0);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(2.0, 5.5);
glVertex2f(6.0, 5.5);
glVertex2f(6.0, 7.0);
glVertex2f(2.0, 7.0);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(2.0, 1.0);
glVertex2f(2.0, 2.5);
glVertex2f(6.0, 2.5);
glVertex2f(6.0, 1.0);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(2.0, 1.0);
glVertex2f(2.0, 7.0);
glVertex2f(3.5, 7.0);
glVertex2f(3.5, 1.0);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(2.0, 4.8);
glVertex2f(6.0, 4.8);
glVertex2f(6.0, 3.2);
glVertex2f(2.0, 3.2);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(-6.0, -2.0);
glVertex2f(-2.0, -2.0);
glVertex2f(-2.0, -1.0);
glVertex2f(-6.0, -1.0);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(-6.0, -7.0);
glVertex2f(-2.0, -7.0);
glVertex2f(-2.0, -6.0);
glVertex2f(-6.0, -6.0);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(-5.0, -7.0);
glVertex2f(-3.0, -7.0);
glVertex2f(-3.0, -1.0);
glVertex2f(-5.0, -1.0);
glEnd();
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
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500,500);
//glutInitWindowPosition(100,100);
glutCreateWindow("Primitif Bangun Datar");
glutDisplayFunc(display);
myinit();
glutMainLoop();
return 0;
}
