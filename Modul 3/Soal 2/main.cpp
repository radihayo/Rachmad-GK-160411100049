#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display(void)
{
/* bersihkan layar */
glClear (GL_COLOR_BUFFER_BIT);
glColor3f(1,1,1);
glBegin(GL_LINES);
glVertex2f(-4, 0);
glVertex2f(4, 0);
glVertex2f(0, -4);
glVertex2f(0, 4);
glEnd();
glColor3f (1.0, 1.0, 0.0);
float t = 0.0;
glBegin(GL_POINTS);
for(t = -3.0; t<=3.0; t+=0.01){
/* x(t) = -1 + 2t; y(t) = 0 */
// glVertex3f (t, -0.5+t*t, 0.0);
//int a=1, b=-3, c=3;
glVertex3f(-2+t*t, t, 0.0);
//glVertex3f(t,-3*t*t-3*t,0.0);
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
gluOrtho2D(-4.0,4.0,-4.0,4.0);
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
