#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

boolean diff = true, spec = true, amb = true;
float theta = 0.0;
void jendela(){
//jendela
 glColor3f(1.5,1.5,1.0);
 glBegin(GL_POLYGON);
 glNormal3f(-1.0,0.0,0.0);
 glVertex3f(4.1, 3.0, 1.5);
 glVertex3f(4.1, 7.0, 1.5);
 glVertex3f(4.1, 7.0, -1.5);
 glVertex3f(4.1, 3.0, -1.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(-1.0,0.0,0.0);
 glVertex3f(4.1, 3.0, 5.0);
 glVertex3f(4.1, 7.0, 5.0);
 glVertex3f(4.1, 7.0, 2.0);
 glVertex3f(4.1, 3.0, 2.0);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(-1.0,0.0,0.0);
 glVertex3f(4.1, 3.0, -2.0);
 glVertex3f(4.1, 7.0, -2.0);
 glVertex3f(4.1, 7.0, -5.0);
 glVertex3f(4.1, 3.0, -5.0);
 glEnd();

}

void atap(){
//prisma kanan
 glColor3f(1.0,0.5,0.0);
 glBegin(GL_POLYGON);
 glNormal3f(1.0,0.0,0.0);
 glVertex3f(5.0, 8.0, 6.0);
 glVertex3f(0.0, 14.0, 6.0);
 glVertex3f(0.0, 14.0, -6.0);
 glVertex3f(5.0, 8.0, -6.0);
 glEnd();

 //prisma depan
 glColor3f(1.0,0.0,1.0);
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(5.0, 8.0, 6.0);
 glVertex3f(0.0, 14.0, 6.0);
 glVertex3f(-5.0, 8.0, 6.0);
 glEnd();

 //prisma belakang
 glColor3f(0.0,0.0,1.0);
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glVertex3f(5.0, 8.0, -6.0);
 glVertex3f(0.0, 14.0, -6.0);
 glVertex3f(-5.0, 8.0, -6.0);
 glEnd();

//prisma kiri
 glColor3f(1.0,0.5,0.5);
 glBegin(GL_POLYGON);
 glNormal3f(-1.0,0.0,0.0);
 glVertex3f(-5.0, 8.0, 6.0);
 glVertex3f(0.0, 14.0, 6.0);
 glVertex3f(0.0, 14.0, -6.0);
 glVertex3f(-5.0, 8.0, -6.0);
 glEnd();

 //prisma bawah
 glColor3f(0.5,0.5,0.5);
 glBegin(GL_POLYGON);
 glNormal3f(0.0,-1.0,0.0);
 glVertex3f(5.0, 8.0, 6.0);
 glVertex3f(-5.0, 8.0, 6.0);
 glVertex3f(-5.0, 8.0, -6.0);
 glVertex3f(5.0, 8.0, -6.0);
 glEnd();
}

void NIM(){
//NIM
glColor3f(0.0,0.0,0.0);
glBegin(GL_QUADS);
glNormal3f(1.0,0.0,0.0);
glVertex3f(-4.1, 2.0, -5.0);
glVertex3f(-4.1, 7.0, -5.0);
glVertex3f(-4.1, 7.0, -4.0);
glVertex3f(-4.1, 2.0, -4.0);

glVertex3f(-4.1, 2.0, -3.0);
glVertex3f(-4.1, 7.0, -3.0);
glVertex3f(-4.1, 7.0, -2.0);
glVertex3f(-4.1, 2.0, -2.0);

glVertex3f(-4.1, 2.0, -4.0);
glVertex3f(-4.1, 3.0, -4.0);
glVertex3f(-4.1, 3.0, -3.0);
glVertex3f(-4.1, 2.0, -3.0);

glVertex3f(-4.1, 6.0, -4.0);
glVertex3f(-4.1, 7.0, -4.0);
glVertex3f(-4.1, 7.0, -3.0);
glVertex3f(-4.1, 6.0, -3.0);

glVertex3f(-4.1, 2.0, 2.0);
glVertex3f(-4.1, 3.0, 2.0);
glVertex3f(-4.1, 3.0, 4.0);
glVertex3f(-4.1, 2.0, 4.0);

glVertex3f(-4.1, 2.0, 4.0);
glVertex3f(-4.1, 7.0, 4.0);
glVertex3f(-4.1, 7.0, 5.0);
glVertex3f(-4.1, 2.0, 5.0);

glVertex3f(-4.1, 6.0, 2.0);
glVertex3f(-4.1, 7.0, 2.0);
glVertex3f(-4.1, 7.0, 4.0);
glVertex3f(-4.1, 6.0, 4.0);

glVertex3f(-4.1, 4.0, 2.0);
glVertex3f(-4.1, 6.0, 2.0);
glVertex3f(-4.1, 6.0, 3.0);
glVertex3f(-4.1, 4.0, 3.0);

glVertex3f(-4.1, 4.0, 3.0);
glVertex3f(-4.1, 5.0, 3.0);
glVertex3f(-4.1, 5.0, 4.0);
glVertex3f(-4.1, 4.0, 4.0);

glVertex3f(-4.1, 2.0, 1.5);
glVertex3f(-4.1, 7.0, 1.5);
glVertex3f(-4.1, 7.0, 0.5);
glVertex3f(-4.1, 2.0, 0.5);

glVertex3f(-4.1, 4.0, 0.5);
glVertex3f(-4.1, 5.0, 0.5);
glVertex3f(-4.1, 5.0, -1.5);
glVertex3f(-4.1, 4.0, -1.5);

glVertex3f(-4.1, 5.0, -1.5);
glVertex3f(-4.1, 7.0, -1.5);
glVertex3f(-4.1, 7.0, -0.5);
glVertex3f(-4.1, 5.0, -0.5);

glEnd();

}

void inisial(){
//inisial
glColor3f(0.0,0.0,0.0);
glBegin(GL_QUADS);
glNormal3f(0.0,0.0,-1.0);
glVertex3f(2.0, 1.0, -6.1);
glVertex3f(1.0, 1.0, -6.1);
glVertex3f(1.0, 7.0, -6.1);
glVertex3f(2.0, 7.0, -6.1);

glVertex3f(1.0, 6.0, -6.1);
glVertex3f(1.0, 7.0, -6.1);
glVertex3f(-1.0, 7.0, -6.1);
glVertex3f(-1.0, 6.0, -6.1);

glVertex3f(1.0, 3.0, -6.1);
glVertex3f(1.0, 4.0, -6.1);
glVertex3f(-1.0, 4.0, -6.1);
glVertex3f(-1.0, 3.0, -6.1);

glVertex3f(-1.0, 3.5, -6.1);
glVertex3f(-1.0, 6.5, -6.1);
glVertex3f(-2.0, 6.5, -6.1);
glVertex3f(-2.0, 3.5, -6.1);

glVertex3f(-1.0, 1.0, -6.1);
glVertex3f(1.0, 4.0, -6.1);
glVertex3f(0.0, 4.0, -6.1);
glVertex3f(-2.0, 1.0, -6.1);
glEnd();

}

void pintu(){
//pintu
 glColor3f(0.5,1.0,1.0);
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(2.0, 0.0, 6.1);
 glVertex3f(2.0, 6.0, 6.1);
 glVertex3f(-2.0, 6.0, 6.1);
 glVertex3f(-2.0, 0.0, 6.1);
 glEnd();

}


void display()
{
 glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
 glLoadIdentity();
 glEnable(GL_COLOR_MATERIAL);
 glRotated(15, 1,1,1);
 GLfloat mat_specular[] = { 0.7, 0.7, 0.7, 1.0 };
 GLfloat mat_shininess[] = { 10.0 };
 GLfloat mat_diffuse[] = { 0.7, 0.7, 0.7, 1.0 };
 glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
 glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
 glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
 glRotatef(theta, 0,1,0);

 atap();
//depan
 glColor3f(0.0,1.0,0.0);
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(4.0, 0.0, 6.0);
 glVertex3f(4.0, 8.0, 6.0);
 glVertex3f(-4.0, 8.0, 6.0);
 glVertex3f(-4.0, 0.0, 6.0);
 glEnd();
 pintu();

 //belakang
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glColor3f(1.0,0.0,0.0);
 glVertex3f(4.0, 0.0, -6.0);
 glVertex3f(4.0, 8.0, -6.0);
 glVertex3f(-4.0, 8.0, -6.0);
 glVertex3f(-4.0, 0.0, -6.0);
 glEnd();
 inisial();

//kiri
 glBegin(GL_POLYGON);
 glNormal3f(-1.0,0.0,0.0);
 glColor3f(0.0,1.0,1.0);
 glVertex3f(4.0, 0.0, 6.0);
 glVertex3f(4.0, 8.0, 6.0);
 glVertex3f(4.0, 8.0, -6.0);
 glVertex3f(4.0, 0.0, -6.0);
 glEnd();
 jendela();

 //kanan
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_POLYGON);
 glNormal3f(1.0,0.0,0.0);
 glVertex3f(-4.0, 0.0, 6.0);
 glVertex3f(-4.0, 8.0, 6.0);
 glVertex3f(-4.0, 8.0, -6.0);
 glVertex3f(-4.0, 0.0, -6.0);
 glEnd();
 NIM();

 //bawah
 glColor3f(0.0,0.0,1.0);
 glBegin(GL_POLYGON);
 glNormal3f(0.0,-1.0,0.0);
 glVertex3f(4.0, 0.0, 6.0);
 glVertex3f(-4.0, 0.0, 6.0);
 glVertex3f(-4.0, 0.0, -6.0);
 glVertex3f(4.0, 0.0, -6.0);
 glEnd();

 //atas
 glBegin(GL_POLYGON);
 glNormal3f(0.0,1.0,0.0);
 glVertex3f(-1.0, 1.0, 1.0);
 glVertex3f(1.0, 1.0, 1.0);
 glVertex3f(1.0, 1.0, -1.0);
 glVertex3f(-1.0, 1.0, -1.0);
 glEnd();


 glFlush();
}
void reshape (int w, int h)
{
 glViewport (0, 0, (GLsizei) w, (GLsizei) h);
 glMatrixMode (GL_PROJECTION);
 glLoadIdentity();
 if (w <= h)
 glOrtho (-15.0, 15.0, -15.0*(GLfloat)h/(GLfloat)w,
15.0*(GLfloat)h/(GLfloat)w, - 10.0, 10.0);
 else
 glOrtho (-15.0*(GLfloat)w/(GLfloat)h, 15.0*(GLfloat)w/(GLfloat)h, -
15.0, 15.0, -10.0, 10.0);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
  }
void myinit()
{
 glClearColor (0.0, 0.0, 0.0, 0.0);
 glColor3f(0.0, 0.0, 0.0);
 GLfloat light_position_diff[] = { -1.0, 1.0, 1.0, 0.0 };
 GLfloat diffuse_light[] = { 0.0, 0.0, 1.0, 1.0 };
 GLfloat light_position_spec[] = { 1.0, 1.0, 1.0, 0.0 };
 GLfloat specular_light[] = { 0.0, 1.0, 0.0, 1.0 };
 GLfloat ambient_light[] = { 0.9, 0.9, 0.9, 1.0 };
 glLightfv(GL_LIGHT0, GL_POSITION, light_position_diff);
 glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse_light);
 glLightfv(GL_LIGHT1, GL_POSITION, light_position_spec);
 glLightfv(GL_LIGHT1, GL_SPECULAR, specular_light);
 glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
 glEnable(GL_LIGHTING);
 glEnable(GL_DEPTH_TEST);
 glShadeModel (GL_SMOOTH);
 glEnable(GL_LIGHT0);
 glEnable(GL_LIGHT1);
}
 void myIdle(){
 theta +=0.03;
 display();
 }
 void mykey(unsigned char key, int mouseX, int mouseY){
 if (key=='1'){
 if (amb == true){
 GLfloat ambient_light[] = { 0.3, 0.3, 0.3, 1.0 };
 glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
 amb = false;
 }
 else{
 GLfloat ambient_light[] = { 0.9, 0.9, 0.9, 1.0 };
 glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
 amb = true;
 }
 }
 if (key=='2'){
 if (diff == true){
 glDisable(GL_LIGHT0);
 diff = false;
 }
 else{
 glEnable(GL_LIGHT0);
 diff = true;
 }
 }
 if (key=='3'){
 if (spec == true){
 glDisable(GL_LIGHT1);
 spec = false;
 }
 else{
 glEnable(GL_LIGHT1);
 spec = true;
 }
 }
 display();
 }
int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
 glutInitWindowSize(400,400);
 glutInitWindowPosition(100,100);
 glutCreateWindow("Kotak");
 glutDisplayFunc(display);
 glutReshapeFunc(reshape);
 glutIdleFunc(myIdle);
 glutKeyboardFunc(mykey);
 myinit();
 glutMainLoop();
 return 0;
}
