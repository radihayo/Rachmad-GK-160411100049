#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

static GLfloat spin = 0.0;
int stop = 0;
void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(-25.0, -25.0, 25.0, 25.0);
    glutSwapBuffers();
}
void xaxis(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(spin, 1.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(-25.0, -25.0, 25.0, 25.0);
    glPopMatrix();
    glutSwapBuffers();
}
void yaxis(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(spin, 0.0, 1.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(-25.0, -25.0, 25.0, 25.0);
    glPopMatrix();
    glutSwapBuffers();
}
void zaxis(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(spin, 0.0, 0.0, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(-25.0, -25.0, 25.0, 25.0);
    glPopMatrix();
    glutSwapBuffers();
}
void spinDisplay(void){
    spin = spin + 0.01;
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
    glOrtho(-50.0, 50.0, -50.0, 50.0, -50.0, 50.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void mouse(int button, int state, int x, int y){
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
            glutDisplayFunc(zaxis);
            glutIdleFunc(spinDisplay);
        break;
    case GLUT_MIDDLE_BUTTON:
        if(state == GLUT_DOWN)
            glutDisplayFunc(yaxis);
            glutIdleFunc(spinDisplay);
        break;
    case GLUT_RIGHT_BUTTON:
        if(state == GLUT_DOWN)
        glutDisplayFunc(xaxis);
        glutIdleFunc(spinDisplay);
        break;
    default:
        break;
    }
}
void keys(unsigned char key, int x, int y){
    if((key=='p' || key=='P') && stop==0){
        glutIdleFunc(NULL);
        stop=1;
    }
    else if((key=='p' || key=='P') && stop==1){
        glutIdleFunc(spinDisplay);
        stop=0;
    }
    glutPostRedisplay();
}
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (400, 400);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Primitif");
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keys);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
