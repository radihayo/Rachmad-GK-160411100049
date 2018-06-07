#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);

 glPushMatrix();
 glRotated(45, 0,0,1);

 glColor3f(0.0,0.0,1.5);
 glBegin(GL_POLYGON);
 glVertex3f(-12.0, -3.0, 6.0);
 glVertex3f(12.0, -3.0, 6.0);
 glVertex3f(12.0, 3.0, 6.0);
 glVertex3f(-12.0, 3.0, 6.0);
 glEnd();

 glColor3f(0.0,0.0,1.5);
 glBegin(GL_POLYGON);
 glVertex3f(-3.0, 12.0, 6.0);
 glVertex3f(3.0, 12.0, 6.0);
 glVertex3f(3.0, -12.0, 6.0);
 glVertex3f(-3.0, -12.0, 6.0);
 glEnd();

 glColor3f(0.0,1.5,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(-12.0, -3.0, 0.0);
 glVertex3f(12.0, -3.0, 0.0);
 glVertex3f(12.0, 3.0, 0.0);
 glVertex3f(-12.0, 3.0, 0.0);
 glEnd();

 glColor3f(0.0,1.5,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(-3.0, 12.0, 0.0);
 glVertex3f(3.0, 12.0, 0.0);
 glVertex3f(3.0, -12.0, 0.0);
 glVertex3f(-3.0, -12.0, 0.0);
 glEnd();

 glColor3f(1.5,0.0,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(-3.0, 12.0, 6.0);
 glVertex3f(3.0, 12.0, 6.0);
 glVertex3f(3.0, 12.0, 0.0);
 glVertex3f(-3.0, 12.0, 0.0);
 glEnd();

 glColor3f(0.0,1.5,1.5);
 glBegin(GL_POLYGON);
 glVertex3f(-3.0, -12.0, 6.0);
 glVertex3f(3.0, -12.0, 6.0);
 glVertex3f(3.0, -12.0, 0.0);
 glVertex3f(-3.0, -12.0, 0.0);
 glEnd();

 glColor3f(1.5,0.0,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(-12.0, -3.0, 6.0);
 glVertex3f(-12.0, 3.0, 6.0);
 glVertex3f(-12.0, 3.0, 0.0);
 glVertex3f(-12.0, -3.0, 0.0);
 glEnd();

 glColor3f(0.0,1.5,1.5);
 glBegin(GL_POLYGON);
 glVertex3f(12.0, -3.0, 6.0);
 glVertex3f(12.0, 3.0, 6.0);
 glVertex3f(12.0, 3.0, 0.0);
 glVertex3f(12.0, -3.0, 0.0);
 glEnd();

 glColor3f(1.5,0.0,1.5);
 glBegin(GL_POLYGON);
 glVertex3f(-3.0, 12.0, 6.0);
 glVertex3f(-3.0, 12.0, 0.0);
 glVertex3f(-3.0, -12.0, 0.0);
 glVertex3f(-3.0, -12.0, 6.0);
 glEnd();

 glColor3f(1.5,1.5,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(3.0, 12.0, 6.0);
 glVertex3f(3.0, 12.0, 0.0);
 glVertex3f(3.0, -12.0, 0.0);
 glVertex3f(3.0, -12.0, 6.0);
 glEnd();

 glColor3f(1.5,0.0,1.5);
 glBegin(GL_POLYGON);
 glVertex3f(-12.0, -3.0, 6.0);
 glVertex3f(-12.0, -3.0, 0.0);
 glVertex3f(12.0, -3.0, 0.0);
 glVertex3f(12.0, -3.0, 6.0);
 glEnd();

 glColor3f(1.5,1.5,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(-12.0, 3.0, 6.0);
 glVertex3f(-12.0, 3.0, 0.0);
 glVertex3f(12.0, 3.0, 0.0);
 glVertex3f(12.0, 3.0, 6.0);
 glEnd();

 glPopMatrix();

 glFlush();
}
void kunci(unsigned char key, int x, int y)
{
 switch (key)
 {
 case 'x' :
    glRotated(15, 1,0,0);
    break;
 case 'y' :
    glRotated(15, 0,1,0);
    break;
 case 'z' :
    glRotated(15, 0,0,1);
    break;
 case 'q':
    exit(0);
    break;
 }
 glutPostRedisplay();
}
void init(void)
{
 glClearColor (0.0, 0.0, 0.0, 0.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-15.0, 15.0, -15.0, 15.0, -15.0, 15.0);
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
