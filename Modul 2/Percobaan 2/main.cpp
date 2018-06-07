#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display(){
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_TRIANGLE_FAN);
glVertex2f (-0.8, 0.0);
glVertex2f (0.0, -0.8);
glVertex2f (0.8, 0.0);
glVertex2f (0.0, 0.8);
glEnd();
glFlush();
}
void myinit(){
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-2.0,2.0,-2.0,2.0);
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
