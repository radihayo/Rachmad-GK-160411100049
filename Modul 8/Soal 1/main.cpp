#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>

void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0,1.0,0.0);
    glVertex3f(0.0,4.0,0.0);
    glVertex3f(1.0,1.0,0.0);
    glVertex3f(4.0,1.0,0.0);
    glVertex3f(1.5,-1.0,0.0);
    glVertex3f(2.5,-4.0,0.0);
    glVertex3f(0.0,-2.0,0.0);
    glVertex3f(-2.5,-4.0,0.0);
    glVertex3f(-1.5,-1.0,0.0);
    glVertex3f(-4.0,1.0,0.0);
    glEnd();
    glFlush();
}

static void Keys(int key, int x, int y)
{
    switch (key)
	{
		case GLUT_KEY_UP:
            glColor3f(1.0,0.0,1.0);
			break;
		case GLUT_KEY_DOWN:
            glColor3f(0.0,0.0,1.0);
			break;
	}
    glutPostRedisplay();
}

void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5.0,5.0,-5.0,5.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(1.0,1.0,0.0);
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("bintang");
    myinit();
    glutDisplayFunc(display);
    glutSpecialFunc(Keys);
    glutMainLoop();

    return 0;
}
