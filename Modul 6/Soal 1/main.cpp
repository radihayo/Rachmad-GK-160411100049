#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display(void){
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT
);
glPushMatrix();
glRotated(50,0.5,-0.2,1);
glScaled(3,1,1);
glutWireCube(10);
glPopMatrix();
glPushMatrix();
glRotated(50,0.5,-0.2,1);
glScaled(1,3,1);
glutWireCube(10);
glPopMatrix();
glFlush();
}
void init(void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-20.0, 20.0, -20.0, 20.0, -20.0, 20.0);
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
glutMainLoop();
return 0;
}
