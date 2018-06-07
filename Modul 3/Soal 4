#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <math.h>
#include <GL/glut.h>
#endif
void myinit()
{
 glClearColor(0.0, 0.0, 0.0, 1.0);
 glColor3f(1.0, 0.0, 0.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-2.0, 10.0, -5.0, 5.0);
 glMatrixMode(GL_MODELVIEW);
}
void display(void)
{
 /* bersihkan layar */
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 0.0);
 float x = 0.0;
 int a=3, b=4, d=2;float c=0.5;
 //glBegin(GL_POINTS);
 glBegin(GL_LINE_STRIP);
 //perhitungan sudut di openGL menggunakan radian, bukan derajat
 for(x=0.0; x<=6.28; x+=0.1)
 {
    glVertex2f(x,a*cos(b*x+c)+d);
 }
 glEnd();
 glBegin(GL_LINES);
 glVertex3f(-10.0,0.0,0.0);
 glVertex3f(10.0,0.0,0.0);
 glVertex3f(0.0,-10.0,0.0);
 glVertex3f(0.0,10.0,0.0);
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
