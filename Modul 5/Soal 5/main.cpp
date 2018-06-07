
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

int j=0;
glColor3f(0.0,1.0,1.0);
for(float i=0;i<=6.28;i+=6.28/12){
    if(j%2==0){
        glPushMatrix();
        glScaled(0.5,0.5,0);
        glTranslated(14*sin(i),14*cos(i),0);
        glRecti(-1,-1, 1, 1);
        glPopMatrix();
}   else{
        glPushMatrix();
        glTranslated(7*sin(i),7*cos(i),0);
        glRecti(-1,-1, 1, 1);
        glPopMatrix();
}
    j+=1;
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
