#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <GL/glut.h>

void myinit()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glColor3f(1.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 5.0, 0.0, 5.0);
    glMatrixMode(GL_MODELVIEW);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    int k = 0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if ((i+j)%2==0)
                glColor3f(1.0, 1.0, 1.0);
            else
                glColor3f(0.0, 0.0, 0.0);
            glRecti((i*1),(j*1),(i*1)+1,(j*1)+1);
            k++;
        }
    }
    glFlush();
}

int main(int argc, char* argv[])
{

    glutInitWindowSize(400,400);
    //glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Papan Catur NRP ");
    glutDisplayFunc(display);
//    glutKeyboardFunc(key);
    myinit();
    glutMainLoop();
    return 0;
}
