
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
void display()
{
 glClear(GL_COLOR_BUFFER_BIT);

 glColor3f(0.0,0.0,0.5);
 int hasil = 360/8;
 for(int i=0; i<=360; i+=hasil){
 glRotated(hasil, 0, 0, 1.0);
//


float t = 0.0;
 glBegin(GL_POLYGON);
 for(t=0; t<=2.8; t+=0.1){
 glColor3f(1.0,0.5,0.5);glVertex2d(t+0.4,0.6*sin(t));
}
 glColor3f(1.0,1.0,1.0);
 glVertex2f(2.3,0);
 glEnd();
 glScaled(1,-1,1);

 glBegin(GL_POLYGON);
 for(t=0; t<=2.8; t+=0.1){
 glColor3f(1.0,0.5,0.5);glVertex2d(t+0.4,0.6*sin(t));
}
 glColor3f(1.0,1.0,1.0);
 glVertex2f(2.3,0);
 glEnd();
 glScaled(1,-1,1);

 //glRecti(-1,8, 1, 6);
 }

 float x = 0.0;
 glBegin(GL_POLYGON);
 for(x=0.0; x<=6.28; x+=0.1){
 glColor3f(1.0,0.5,0.5);glVertex2f(cos(x)/3,sin(x)/3);
 }
 glEnd();

 glFlush();
}
void myinit()
{
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-5.0,5.0,-5.0,5.0);
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
