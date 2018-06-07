#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
void display(void)
{
 /* bersihkan layar */
 glClear (GL_COLOR_BUFFER_BIT);
glColor3f(1,1,1);
 glBegin(GL_LINES);
 glVertex2f(-15, 0);
 glVertex2f(15, 0);
 glVertex2f(0, -15);
 glVertex2f(0, 15);
 glEnd();

/* glBegin(GL_LINES);
 glColor3f (1.0, 1.0, 0.0);
 glVertex2f(-1, 5);
 glVertex2f(-1.25, 2);*/

 glVertex2f(1, 5);
 glVertex2f(1.25, 2);
 glEnd();

 //Ghost top
 glColor3f (1.0, 1.0, 0.0);
 float t = 0.0;
 glBegin(GL_POLYGON);
 for(t = -2.0; t<=2.0; t+=0.01){
 glVertex3f(t,-t*t+12, 0.0);
}
 glEnd();

 //Ghost Bottom
 glBegin(GL_POLYGON);
 for(t = -2.0; t<=2.0; t+=0.01){
 glVertex3f(t,-t*t-7, 0.0);
}
 glEnd();



 //Packman
 float x = 0.0;
 glBegin(GL_POLYGON);
 for(x=0.8; x<=3.94; x+=0.1){
 glColor3f (1.0, 1.0, 0.0);glVertex2f(2*cos(x),2*sin(x));
 }
 glEnd();

 glBegin(GL_POLYGON);
 for(x=2.3; x<=5.5; x+=0.1) {
glColor3f (1.0, 1.0, 0.0);glVertex2f(2*cos(x),2*sin(x));
 }
 glEnd();

/*glBegin(GL_POLYGON);
 for(x=2.3; x<=5.5; x+=0.1) {
glColor3f (1.0, 1.0, 0.0);glVertex2f(2*cos(x),2*sin(x));
 }
 glEnd();*/


 //Eye Ghost Top
 glBegin(GL_POLYGON);
 for(x=0.0; x<=6.28; x+=0.1)
 {
 glColor3f (1.0, 1.0, 1.0);glVertex2f((1.3+sin(x))/2,(10.3+cos(x)/2));
 }
 glEnd();

glBegin(GL_POLYGON);
 for(x=0.0; x<=6.28; x+=0.1)
 {
 glColor3f (0.0, 0.0, 0.0);glVertex2f((2.4+sin(x))/3,(31+cos(x))/3);
 }
 glEnd();

  glBegin(GL_POLYGON);
 for(x=0.0; x<=6.28; x+=0.1)
 {
 glColor3f (1.0, 1.0, 1.0);glVertex2f((-1.3+sin(x))/2,(10.3+cos(x)/2));
 }
 glEnd();

glBegin(GL_POLYGON);
 for(x=0.0; x<=6.28; x+=0.1)
 {
 glColor3f (0.0, 0.0, 0.0);glVertex2f((-1.5+sin(x))/3,(31+cos(x))/3);
 }
 glEnd();

  //Eye Ghost Bottom
 glBegin(GL_POLYGON);
 for(x=0.0; x<=6.28; x+=0.1)
 {
 glColor3f (1.0, 1.0, 1.0);glVertex2f((1.3+sin(x))/2,(-8.8+cos(x)/2));
 }
 glEnd();

glBegin(GL_POLYGON);
 for(x=0.0; x<=6.28; x+=0.1)
 {
 glColor3f (0.0, 0.0, 0.0);glVertex2f((2.4+sin(x))/3,(-26.5+cos(x))/3);
 }
 glEnd();

  glBegin(GL_POLYGON);
 for(x=0.0; x<=6.28; x+=0.1)
 {
 glColor3f (1.0, 1.0, 1.0);glVertex2f((-1.3+sin(x))/2,(-8.8+cos(x)/2));
 }
 glEnd();

glBegin(GL_POLYGON);
 for(x=0.0; x<=6.28; x+=0.1)
 {
 glColor3f (0.0, 0.0, 0.0);glVertex2f((-1.5+sin(x))/3,(-26.5+cos(x))/3);
 }
 glEnd();

  float xy = 0.0;
 //Top Ghost Appearance
 glColor3f (1.0, 1.0, 0.0);
 float a1=0.3, b1=3, d1=11.1;float c1=0.5;
  float a=0.3, b=3, d=-7.9; float c=0.5;
 //glBegin(GL_POINTS);
 glBegin(GL_POLYGON);
 //perhitungan sudut di openGL menggunakan radian, bukan derajat
 for(xy=-2; xy<=2; xy+=0.1)
 {
    glVertex2f(xy,(a*cos(b*xy-c)-d));
 }
 glEnd();

  //Bottom Ghost Appearance
 glColor3f (1.0, 1.0, 0.0);
// float a1=0.3, b1=3, d1=11.1;float c1=0.5;
 //glBegin(GL_POINTS);
 glBegin(GL_POLYGON);
 //perhitungan sudut di openGL menggunakan radian, bukan derajat
 for(xy=-2; xy<=2; xy+=0.1)
 {
    glVertex2f(xy,a1*cos(b1*xy-c1)-d1);
 }
 glEnd();


 glFlush ();
}
 void kunci(unsigned char key, int x, int y)
{
 switch (key)
 {
 /* aplikasi berhenti ketika tombol q ditekan */
 case 27 :
 case 'q':
 exit(0);
 break;
 }
 glutPostRedisplay();
}

void myinit(){
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-15.0,15.0,-15.0,15.0);
 glMatrixMode(GL_MODELVIEW);
 glClearColor(0.0,0.0,0.0,0.0);
 glColor3f (1.0, 1.0, 0.0);
}


int main(int argc, char *argv[])
{
 glutInitWindowSize(400,400);
 glutInitWindowPosition(100,100);
glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
 glutCreateWindow("Primitif");
 glutDisplayFunc(display);
 glutKeyboardFunc(kunci);
 myinit();
 glutMainLoop();
 return 0;
}
