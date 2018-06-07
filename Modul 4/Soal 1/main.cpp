#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0,0.0,0.5);
glBegin(GL_LINES);
glColor3f(1.0, 0.0, 0.0);
glVertex2f (0, -20.0);
glVertex2f (0, 20.0);
glVertex2f (-20.0, 0);
glVertex2f (20.0, 0);
glEnd();
glRotated(45.0, 0, 0, 1);
 for(int i=0;i<20;i++)
 {
 for(int j=0;j<20;j++)
 {
 if ((i+j)%2==0)
 glColor3f(0.0, 0.0, 0.0);
 else
 glColor3f(1.0, 1.0, 0.0);
 glRecti((i*1),(j*1),(i*1)+1,(j*1)+1);
 }
 }
glFlush();
}
void myinit()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-3.5,3.5,6.4,13.4);
glMatrixMode(GL_MODELVIEW);
glClearColor(1.0,1.0,1.0,1.0);
glColor3f(0.0,0.0,0.0);
}
int main(int argc, char* argv[])
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(400,400);
glutInitWindowPosition(100,100);
glutCreateWindow("Transform");
glutDisplayFunc(display);
myinit();
glutMainLoop();
return 0;
}
