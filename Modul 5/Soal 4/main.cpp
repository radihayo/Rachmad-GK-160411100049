#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
 float x = 0.0;
 glBegin(GL_LINE_LOOP);
 for(x=0.0; x<=6.28; x+=0.1){
 glColor3f (1.0, 1.0, 0.0);glVertex2f(7*cos(x),7*sin(x));
 }
 glEnd();

for(int i=0;i<12;i++){
 glColor3f(0.0,1.0,1.0);
    glPushMatrix();
    glScaled(1-0.5*(i%2),1-0.5*(i%2),0);
    glTranslated((i%2)*7,0,0);
    glRecti(6,-1, 8, 1);
    glPopMatrix();
    glRotated(30,0,0,1);

}

 glFlush();
}
void myinit()
{
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-10.0,10.0,-10.0,10.0);
 glMatrixMode(GL_MODELVIEW);
 glClearColor(1.0,1.0,1.0,1.0);
 glColor3f(0.0,0.0,0.0);
}

int main(int argc, char* argv[])
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(400,400);
 glutInitWindowPosition(100,100);
 glutCreateWindow("Transform");
 glutDisplayFunc(display);
 myinit();
 glutMainLoop();
 return 0;
}
