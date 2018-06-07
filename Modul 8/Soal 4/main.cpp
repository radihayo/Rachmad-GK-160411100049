#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

static GLfloat spin = 0.0;
bool a= true;
float speed = 0.01;

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(spin, 0.0, 0.0, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(-25.0, -25.0, 25.0, 25.0);
    glPopMatrix();
    glutSwapBuffers();
}
void spinDisplay(void){
    spin = spin + speed;
    if (spin > 360.0)
        spin = spin - 360.0;
    glutPostRedisplay();
}
void init(void){
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);
}
void reshape(int w, int h){
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void keypress(unsigned char key, int x, int y){
    if (key == 'u')
    {
        glScalef(0.75,0.75,0);
    }
    else if (key == 'U')
    {
        glScalef(1.5,1.5,0);
    }
    else if (key == 'v')
    {
        speed = speed*0.5;
    }
    else if (key == 'V')
    {
        speed = speed*2;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y){
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay);
            break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
            glutIdleFunc(NULL);
            break;
    default:
        break;
    }
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (400, 400);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Primitif");
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keypress);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
