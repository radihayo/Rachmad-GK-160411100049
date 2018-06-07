#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>


void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 glColor3f(1.0, 1.0, 1.0);

 //garis
 glBegin(GL_LINES);
 glVertex3f(-8,0,0),glVertex3f(8,0,0);
 glVertex3f(0,-8,0),glVertex3f(0,8,0);
 glVertex3f(0,0,-8),glVertex3f(0,0,8);
 glEnd();

 glPushMatrix();
 //kubus
 glPushMatrix();
 glutWireCube(1.5);
 glPopMatrix();

 //teko
 glPushMatrix();
 glTranslated(8,0,0);
 glutWireTeapot(1);
 glPopMatrix();

 //bola
 glPushMatrix();
 glTranslated(0,0,-8);
 glutWireSphere(1,16,16);
 glPopMatrix();

 //kerucut
 glPushMatrix();
 glTranslated(0,8,0);
 glRotated(-90,1,0,0);
 glutWireCone(1,2,16,16);
 glPopMatrix();

 //berlian
 glPushMatrix();
 glTranslated(-8,0,0);
 glutWireOctahedron();
 glPopMatrix();

 //prisma
 glPushMatrix();
 glTranslated(0,-8,0);
 glScaled(0.5,0.5,0.5);
 glRotated(90,1,0,0);
 glutWireCone(2,4,3,1);
 glPopMatrix();

 //kubus manual
 glPushMatrix();
 glTranslated(0,0,8);
 glColor3f(0.0,0.0,1.0);
 glBegin(GL_POLYGON);
 glVertex3f(-1.0, -1.0, 1.0);
 glVertex3f(1.0, -1.0, 1.0);
 glVertex3f(1.0, 1.0, 1.0);
 glVertex3f(-1.0, 1.0, 1.0);
 glEnd();
 //belakang
 glColor3f(0.0,1.0,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(1.0, -1.0, -1.0);
 glVertex3f(-1.0, -1.0, -1.0);
 glVertex3f(-1.0, 1.0, -1.0);
 glVertex3f(1.0, 1.0, -1.0);
 glEnd();
 //kiri
 glColor3f(1.0,0.0,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(-1.0, -1.0, -1.0);
 glVertex3f(-1.0, -1.0, 1.0);
 glVertex3f(-1.0, 1.0, 1.0);
 glVertex3f(-1.0, 1.0, -1.0);
 glEnd();
 //kanan
 glColor3f(0.0,1.0,1.0);
 glBegin(GL_POLYGON);
 glVertex3f(1.0, -1.0, -1.0);
 glVertex3f(1.0, 1.0, -1.0);
 glVertex3f(1.0, 1.0, 1.0);
 glVertex3f(1.0, -1.0, 1.0);
 glEnd();
 //bawah
 glColor3f(1.0,0.0,1.0);
 glBegin(GL_POLYGON);
 glVertex3f(1.0, -1.0, 1.0);
 glVertex3f(-1.0, -1.0, 1.0);
 glVertex3f(-1.0, -1.0, -1.0);
 glVertex3f(1.0, -1.0, -1.0);
 glEnd();
 //atas
 glColor3f(1.0,1.0,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(-1.0, 1.0, 1.0);
 glVertex3f(1.0, 1.0, 1.0);
 glVertex3f(1.0, 1.0, -1.0);
 glVertex3f(-1.0, 1.0, -1.0);
 glEnd();
 glPopMatrix();
glPopMatrix();


 glFlush();
}

void kunci(unsigned char key, int x, int y)
{
 switch (key)
 {
 case 'x' :
    glRotatef(1, 1,0,0);
    break;
 case 'y' :
    glRotatef(1, 0,1,0);
    break;
 case 'z' :
    glRotatef(1, 0,0,1);
    break;
 }
 glutPostRedisplay();
}

void init(void)
{
 glClearColor (0.0, 0.0, 0.0, 0.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
 glMatrixMode(GL_MODELVIEW);
 glShadeModel (GL_FLAT);
 glEnable(GL_DEPTH_TEST);
}
int main(int argc, char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
 glutInitWindowSize(400, 400);
 glutInitWindowPosition(100, 100);
 glutCreateWindow("Kubus");
 init();
 glutDisplayFunc(display);
 glutKeyboardFunc(kunci);
 glutMainLoop();
 return 0;
 }
