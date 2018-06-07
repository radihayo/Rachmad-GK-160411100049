#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

boolean diff = true, spec = true, amb = true;
static float theta = 0.0, re_theta = 0.02;
static float rot_x = 0, rot_y  = 1, rot_z  = 0;
static float light_intest = 0.7;
static float diff_x = -1,diff_y = 1, diff_z = 1;
static float spec_x = 1, spec_y = 1, spec_z = 1;
bool a= true;

void NIM(){
glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
//depan
 //angka O
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(-5.0, -2.0, 0.5);
 glVertex3f(-5.0, 2.0, 0.5);
 glVertex3f(-4.0, 2.0, 0.5);
 glVertex3f(-4.0, -2.0, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(-3.0, -2.0, 0.5);
 glVertex3f(-3.0, 2.0, 0.5);
 glVertex3f(-2.0, 2.0, 0.5);
 glVertex3f(-2.0, -2.0, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(-4.0, -2.0, 0.5);
 glVertex3f(-4.0, -1.0, 0.5);
 glVertex3f(-3.0, -1.0, 0.5);
 glVertex3f(-3.0, -2.0, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(-4.0, 1.0, 0.5);
 glVertex3f(-4.0, 2.0, 0.5);
 glVertex3f(-3.0, 2.0, 0.5);
 glVertex3f(-3.0, 1.0, 0.5);
 glEnd();

//angka 4
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(-1.5, -0.5, 0.5);
 glVertex3f(-1.5, 2.0, 0.5);
 glVertex3f(-0.5, 2.0, 0.5);
 glVertex3f(-0.5, -0.5, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(-0.5, -0.5, 0.5);
 glVertex3f(-0.5, 0.5, 0.5);
 glVertex3f(0.5, 0.5, 0.5);
 glVertex3f(0.5, -0.5, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(0.5, -2.0, 0.5);
 glVertex3f(0.5, 2.0, 0.5);
 glVertex3f(1.5, 2.0, 0.5);
 glVertex3f(1.5, -2.0, 0.5);
 glEnd();

//angka 9
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(2.0, -2.0, 0.5);
 glVertex3f(2.0, -1.0, 0.5);
 glVertex3f(5.0, -1.0, 0.5);
 glVertex3f(5.0, -2.0, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(4.0, -2.0, 0.5);
 glVertex3f(4.0, 2.0, 0.5);
 glVertex3f(5.0, 2.0, 0.5);
 glVertex3f(5.0, -2.0, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(2.0, -0.5, 0.5);
 glVertex3f(2.0, 2.0, 0.5);
 glVertex3f(3.0, 2.0, 0.5);
 glVertex3f(3.0, -0.5, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(3.0, -0.5, 0.5);
 glVertex3f(3.0, 0.3, 0.5);
 glVertex3f(4.0, 0.3, 0.5);
 glVertex3f(4.0, -0.5, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,1.0);
 glVertex3f(3.0, 1.3, 0.5);
 glVertex3f(3.0, 2.0, 0.5);
 glVertex3f(4.0, 2.0, 0.5);
 glVertex3f(4.0, 1.3, 0.5);
 glEnd();


//belakang
 //angka O
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glVertex3f(-5.0, -2.0, -0.5);
 glVertex3f(-5.0, 2.0, -0.5);
 glVertex3f(-4.0, 2.0, -0.5);
 glVertex3f(-4.0, -2.0, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glVertex3f(-3.0, -2.0, -0.5);
 glVertex3f(-3.0, 2.0, -0.5);
 glVertex3f(-2.0, 2.0, -0.5);
 glVertex3f(-2.0, -2.0, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glVertex3f(-4.0, -2.0, -0.5);
 glVertex3f(-4.0, -1.0, -0.5);
 glVertex3f(-3.0, -1.0, -0.5);
 glVertex3f(-3.0, -2.0, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glVertex3f(-4.0, 1.0, -0.5);
 glVertex3f(-4.0, 2.0, -0.5);
 glVertex3f(-3.0, 2.0, -0.5);
 glVertex3f(-3.0, 1.0, -0.5);
 glEnd();

//angka 4
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glVertex3f(-1.5, -0.5, -0.5);
 glVertex3f(-1.5, 2.0, -0.5);
 glVertex3f(-0.5, 2.0, -0.5);
 glVertex3f(-0.5, -0.5, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glVertex3f(-0.5, -0.5, -0.5);
 glVertex3f(-0.5, 0.5, -0.5);
 glVertex3f(0.5, 0.5, -0.5);
 glVertex3f(0.5, -0.5, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glVertex3f(0.5, -2.0, -0.5);
 glVertex3f(0.5, 2.0, -0.5);
 glVertex3f(1.5, 2.0, -0.5);
 glVertex3f(1.5, -2.0, -0.5);
 glEnd();

//angka 9
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glVertex3f(2.0, -2.0, -0.5);
 glVertex3f(2.0, -1.0, -0.5);
 glVertex3f(5.0, -1.0, -0.5);
 glVertex3f(5.0, -2.0, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glVertex3f(4.0, -2.0, -0.5);
 glVertex3f(4.0, 2.0, -0.5);
 glVertex3f(5.0, 2.0, -0.5);
 glVertex3f(5.0, -2.0, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glVertex3f(2.0, -0.5, -0.5);
 glVertex3f(2.0, 2.0, -0.5);
 glVertex3f(3.0, 2.0, -0.5);
 glVertex3f(3.0, -0.5, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glVertex3f(3.0, -0.5, -0.5);
 glVertex3f(3.0, 0.3, -0.5);
 glVertex3f(4.0, 0.3, -0.5);
 glVertex3f(4.0, -0.5, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,-1.0);
 glVertex3f(3.0, 1.3, -0.5);
 glVertex3f(3.0, 2.0, -0.5);
 glVertex3f(4.0, 2.0, -0.5);
 glVertex3f(4.0, 1.3, -0.5);
 glEnd();


//kiri
 //huruf O
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,0.0);
 glVertex3f(-5.0, -2.0, -0.5);
 glVertex3f(-5.0, 2.0, -0.5);
 glVertex3f(-5.0, 2.0, 0.5);
 glVertex3f(-5.0, -2.0, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,0.0);
 glVertex3f(-3.0, -1.0, -0.5);
 glVertex3f(-3.0, 1.0, -0.5);
 glVertex3f(-3.0, 1.0, 0.5);
 glVertex3f(-3.0, -1.0, 0.5);
 glEnd();

 //angka 4
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,0.0);
 glVertex3f(1.5, -2.0, -0.5);
 glVertex3f(1.5, 2.0, -0.5);
 glVertex3f(1.5, 2.0, 0.5);
 glVertex3f(1.5, -2.0, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,0.0);
 glVertex3f(0.5, 0.5, -0.5);
 glVertex3f(0.5, 2.0, -0.5);
 glVertex3f(0.5, 2.0, 0.5);
 glVertex3f(0.5, 0.5, 0.5);
 glEnd();

//angka 9
 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,0.0);
 glVertex3f(3.0, 0.3, -0.5);
 glVertex3f(3.0, 1.3, -0.5);
 glVertex3f(3.0, 1.3, 0.5);
 glVertex3f(3.0, 0.3, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,0.0,0.0);
 glVertex3f(5.0, -2.0, -0.5);
 glVertex3f(5.0, 2.0, -0.5);
 glVertex3f(5.0, 2.0, 0.5);
 glVertex3f(5.0, -2.0, 0.5);
 glEnd();


//kanan
 //huruf O
 glBegin(GL_POLYGON);
 glNormal3f(1.0,0.0,0.0);
 glVertex3f(-2.0, -2.0, -0.5);
 glVertex3f(-2.0, 2.0, -0.5);
 glVertex3f(-2.0, 2.0, 0.5);
 glVertex3f(-2.0, -2.0, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(1.0,0.0,0.0);
 glVertex3f(-4.0, -1.0, -0.5);
 glVertex3f(-4.0, 1.0, -0.5);
 glVertex3f(-4.0, 1.0, 0.5);
 glVertex3f(-4.0, -1.0, 0.5);
 glEnd();

 //angka 4
 glBegin(GL_POLYGON);
 glNormal3f(1.0,0.0,0.0);
 glVertex3f(-1.5, -0.5, -0.5);
 glVertex3f(-1.5, 2.0, -0.5);
 glVertex3f(-1.5, 2.0, 0.5);
 glVertex3f(-1.5, -0.5, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(1.0,0.0,0.0);
 glVertex3f(-0.5, 0.5, -0.5);
 glVertex3f(-0.5, 2.0, -0.5);
 glVertex3f(-0.5, 2.0, 0.5);
 glVertex3f(-0.5, 0.5, 0.5);
 glEnd();

//angka 9
 glBegin(GL_POLYGON);
 glNormal3f(1.0,0.0,0.0);
 glVertex3f(2.0, -0.5, -0.5);
 glVertex3f(2.0, 2.0, -0.5);
 glVertex3f(2.0, 2.0, 0.5);
 glVertex3f(2.0, -0.5, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(1.0,0.0,0.0);
 glVertex3f(2.0, -2.0, -0.5);
 glVertex3f(2.0, -1.0, -0.5);
 glVertex3f(2.0, -1.0, 0.5);
 glVertex3f(2.0, -2.0, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(1.0,0.0,0.0);
 glVertex3f(4.0, -1.0, -0.5);
 glVertex3f(4.0, -0.5, -0.5);
 glVertex3f(4.0, -0.5, 0.5);
 glVertex3f(4.0, -1.0, 0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(1.0,0.0,0.0);
 glVertex3f(4.0, 0.3, -0.5);
 glVertex3f(4.0, 1.3, -0.5);
 glVertex3f(4.0, 1.3, 0.5);
 glVertex3f(4.0, 0.3, 0.5);
 glEnd();

 //bawah
 //angka 0
 glBegin(GL_POLYGON);
 glNormal3f(0.0,-1.0,0.0);
 glVertex3f(-5.0, -2.0, -0.5);
 glVertex3f(-5.0, -2.0, 0.5);
 glVertex3f(-2.0, -2.0, 0.5);
 glVertex3f(-2.0, -2.0, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,-1.0,0.0);
 glVertex3f(-4.0, 1.0, -0.5);
 glVertex3f(-4.0, 1.0, 0.5);
 glVertex3f(-3.0, 1.0, 0.5);
 glVertex3f(-3.0, 1.0, -0.5);
 glEnd();

 //angka 4
  glBegin(GL_POLYGON);
 glNormal3f(0.0,-1.0,0.0);
 glVertex3f(1.5, -2.0, -0.5);
 glVertex3f(1.5, -2.0, 0.5);
 glVertex3f(0.5, -2.0, 0.5);
 glVertex3f(0.5, -2.0, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,-1.0,0.0);
 glVertex3f(-1.5, -0.5, -0.5);
 glVertex3f(-1.5, -0.5, 0.5);
 glVertex3f(0.5, -0.5, 0.5);
 glVertex3f(0.5, -0.5, -0.5);
 glEnd();

//ankga 9
 glBegin(GL_POLYGON);
 glNormal3f(0.0,-1.0,0.0);
 glVertex3f(2.0, -2.0, -0.5);
 glVertex3f(2.0, -2.0, 0.5);
 glVertex3f(5.0, -2.0, 0.5);
 glVertex3f(5.0, -2.0, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,-1.0,0.0);
 glVertex3f(2.0, -0.5, -0.5);
 glVertex3f(2.0, -0.5, 0.5);
 glVertex3f(4.0, -0.5, 0.5);
 glVertex3f(4.0, -0.5, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,-1.0,0.0);
 glVertex3f(3.0, 1.3, -0.5);
 glVertex3f(3.0, 1.3, 0.5);
 glVertex3f(4.0, 1.3, 0.5);
 glVertex3f(4.0, 1.3, -0.5);
 glEnd();

 //atas
 //angka 0
 glBegin(GL_POLYGON);
 glNormal3f(0.0,1.0,0.0);
 glVertex3f(-5.0, 2.0, -0.5);
 glVertex3f(-5.0, 2.0, 0.5);
 glVertex3f(-2.0, 2.0, 0.5);
 glVertex3f(-2.0, 2.0, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,1.0,0.0);
 glVertex3f(-4.0, -1.0, -0.5);
 glVertex3f(-4.0, -1.0, 0.5);
 glVertex3f(-3.0, -1.0, 0.5);
 glVertex3f(-3.0, -1.0, -0.5);
 glEnd();

//angka 4
 glBegin(GL_POLYGON);
 glNormal3f(0.0,1.0,0.0);
 glVertex3f(-1.5, 2.0, -0.5);
 glVertex3f(-1.5, 2.0, 0.5);
 glVertex3f(-0.5, 2.0, 0.5);
 glVertex3f(-0.5, 2.0, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,1.0,0.0);
 glVertex3f(1.5, 2.0, -0.5);
 glVertex3f(1.5, 2.0, 0.5);
 glVertex3f(0.5, 2.0, 0.5);
 glVertex3f(0.5, 2.0, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,1.0,0.0);
 glVertex3f(-0.5, 0.5, -0.5);
 glVertex3f(-0.5, 0.5, 0.5);
 glVertex3f(0.5, 0.5, 0.5);
 glVertex3f(0.5, 0.5, -0.5);
 glEnd();

//ankga 9
 glBegin(GL_POLYGON);
 glNormal3f(0.0,1.0,0.0);
 glVertex3f(2.0, 2.0, -0.5);
 glVertex3f(2.0, 2.0, 0.5);
 glVertex3f(5.0, 2.0, 0.5);
 glVertex3f(5.0, 2.0, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,1.0,0.0);
 glVertex3f(2.0, -1.0, -0.5);
 glVertex3f(2.0, -1.0, 0.5);
 glVertex3f(4.0, -1.0, 0.5);
 glVertex3f(4.0, -1.0, -0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glNormal3f(0.0,1.0,0.0);
 glVertex3f(3.0, 0.3, -0.5);
 glVertex3f(3.0, 0.3, 0.5);
 glVertex3f(4.0, 0.3, 0.5);
 glVertex3f(4.0, 0.3, -0.5);
 glEnd();

 glFlush();
}

void display()
{
 glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glRotatef(theta, rot_x, rot_y, rot_z);

    glRotated(35, 1,1,1);
    GLfloat mat_specular[] = { light_intest, light_intest, light_intest, 1.0 };
    GLfloat mat_shininess[] = { light_intest*10 };
    GLfloat mat_diffuse[] = { light_intest, light_intest, light_intest, 1.0 };
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    GLfloat light_position_diff[] = { diff_x, diff_y, diff_z, 0.0 };
    GLfloat diffuse_light[] = { 0.0, 0.0, 1.0, 1.0 };
    GLfloat light_position_spec[] = { spec_x, spec_y, spec_z, 0.0 };
    GLfloat specular_light[] = { 0.0, 1.0, 0.0, 1.0 };
    GLfloat ambient_light[] = { light_intest, light_intest, light_intest, 1.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, light_position_diff);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse_light);
    glLightfv(GL_LIGHT1, GL_POSITION, light_position_spec);
    glLightfv(GL_LIGHT1, GL_SPECULAR, specular_light);  glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
    glRotatef(theta, rot_x, rot_y, rot_z);


 NIM();
 glPopMatrix();
 glFlush();
}
void reshape (int w, int h)
{
 glViewport (0, 0, (GLsizei) w, (GLsizei) h);
 glMatrixMode (GL_PROJECTION);
 glLoadIdentity();
 if (w <= h)
    glOrtho (-8.0, 8.0, -8.0*(GLfloat)h/(GLfloat)w,
             8.0*(GLfloat)h/(GLfloat)w, - 20.0, 20.0);
 else
    glOrtho (-8.0*(GLfloat)w/(GLfloat)h, 8.0*(GLfloat)w/(GLfloat)h,
             -8.0, 8.0, -8.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
  }
void myinit()
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    glShadeModel (GL_SMOOTH);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHT1);
}
void IdleFunct()
{
    theta +=re_theta;
    display();
}
void MouseBtn(int button, int state, int x, int y)
{
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        rot_x = 0, rot_y = 0, rot_z = 1;
        glutIdleFunc(IdleFunct);
        break;
case GLUT_MIDDLE_BUTTON:
        if (state == GLUT_DOWN)
        rot_x = 0, rot_y = 1, rot_z = 0;
        glutIdleFunc(IdleFunct);
        break;
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
        rot_x = 1, rot_y = 0, rot_z = 0;
        glutIdleFunc(IdleFunct);
        break;
    default:
        break;
    }
}

void keys(unsigned char key, int mouseX, int mouseY)
{
    if (key=='1')
    {
        if (amb == true)
        {
            GLfloat ambient_light[] = { 0.3, 0.3, 0.3, 1.0 };
glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
            amb = false;
        }
else
        {
            GLfloat ambient_light[] = { 0.9, 0.9, 0.9, 1.0 };
            glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
            amb = true;
        }
    }
    if (key=='2')
    {
        if (diff == true)
        {
            glDisable(GL_LIGHT0);
            diff = false;
        }
        else
        {
            glEnable(GL_LIGHT0);
            diff = true;
        }
    }
    if (key=='3')
    {
        if (spec == true)
        {
            glDisable(GL_LIGHT1);
            spec = false;
        }
        else
        {
            glEnable(GL_LIGHT1);
            spec = true;
        }
    }
    if (key=='a')
    {
        light_intest = 1.0;
        diff_x = -1,diff_y = 1, diff_z = 0;
        spec_x = 0, spec_y = 0, spec_z = 0;
    }
    if (key=='s')
    {
        light_intest = 0.9;
        diff_x = -1,diff_y = -1, diff_z = 0;
        spec_x = 0, spec_y = 1, spec_z = 0;
    }
   if (key=='d')
    {
        light_intest = 1.5;
        diff_x = 0,diff_y = 1, diff_z = 0;
        spec_x = 0, spec_y = 0, spec_z = 0;
    }
    if (key=='f')
    {
        light_intest = 0.5;
        diff_x = 0,diff_y = 1, diff_z = 1;
        spec_x = -1, spec_y = 0, spec_z = 0;
    }
     if (key=='g')
    {
        light_intest = 0.7;
        diff_x = -1,diff_y = 1, diff_z = 1;
        spec_x = 1, spec_y = 1, spec_z = 1;
    }
    display();
}
int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Primitif");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(MouseBtn);
    glutIdleFunc(IdleFunct);
    glutKeyboardFunc(keys);
    myinit();
    glutMainLoop();
    return 0;
}
