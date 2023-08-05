#include <windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI 3.141516
#include<math.h>

GLfloat position1 = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat position4 = 0.0f;
GLfloat position5 = -0.8f;
GLfloat position6 = 0.0f;


GLfloat speed1 = 0.001f;
GLfloat speed2 = 0.2f;
GLfloat speed3 = 0.01f;
GLfloat speed4 = 0.2f;
GLfloat speed5 = 0.01f;
GLfloat speed6 = 0.2f;



GLfloat speed = 0.01f;
GLfloat speedy = 0.2f;



void update1(int value) {

    if(position1 <-0.35)
        position1 = 1.0f;

    position1 -= speed1;

glutPostRedisplay();


glutTimerFunc(100, update1, 0);
}

void update2(int value) {

    if(position2 <-1.0)
        position2 = 1.0f;

    position2 -= speed2;

glutPostRedisplay();

glutTimerFunc(100, update2, 0);
}

void update3(int value) {

    if(position3 <-0.15)
        position3 = 0.01f;

    position3 -= speed3;

glutPostRedisplay();

glutTimerFunc(100, update3, 0);
}

void update4(int value) {

    if(position4 <-1.0)
        position4 = 1.0f;

    position4 -= speed4;

glutPostRedisplay();


glutTimerFunc(100, update4, 0);
}

void update5(int value) {

    if(position5 <-0.8)
        position5 = 0.2f;

    position5 -= speed5;

glutPostRedisplay();


glutTimerFunc(100, update5, 0);
}

GLfloat position_CLOUD1 = 0.0f;
GLfloat speed_CLOUD1 = 0.01f;

void update_CLOUD1(int value) {

    if(position_CLOUD1 <-1.0)
        position_CLOUD1 = 1.0f;

    position_CLOUD1 -= speed_CLOUD1;

glutPostRedisplay();


glutTimerFunc(100, update_CLOUD1, 0);
}


GLfloat position_CLOUD2 = 0.0f;
GLfloat speed_CLOUD2 = 0.005f;

void update_CLOUD2(int value) {

    if(position_CLOUD2 <-1.0)
        position_CLOUD2 = 1.0f;

    position_CLOUD2 -= speed_CLOUD2;

glutPostRedisplay();


glutTimerFunc(100, update_CLOUD2, 0);
}

GLfloat position_CLOUD3 = 0.0f;
GLfloat speed_CLOUD3 = 0.01f;

void update_CLOUD3(int value) {

    if(position_CLOUD3 <-1.0)
        position_CLOUD3 = 1.0f;

    position_CLOUD3 -= speed_CLOUD3;

glutPostRedisplay();


glutTimerFunc(100, update_CLOUD3, 0);
}

GLfloat position_CLOUD4 = 0.0f;
GLfloat speed_CLOUD4 = 0.003f;

void update_CLOUD4(int value) {

    if(position_CLOUD4 <-1.0)
        position_CLOUD4 = 1.0f;

    position_CLOUD4 -= speed_CLOUD4;

glutPostRedisplay();


glutTimerFunc(100, update_CLOUD4, 0);
}
GLfloat position_BOAT1 = 0.0f;
GLfloat speed_BOAT1 = 0.003f;

void update_BOAT1(int value) {

    if(position_BOAT1 <-1.0)
        position_BOAT1 = 1.0f;

    position_BOAT1 -= speed_BOAT1;

glutPostRedisplay();


glutTimerFunc(100, update_BOAT1, 0);
}
GLfloat position_BOAT2 = 0.0f;
GLfloat speed_BOAT2 = 0.003f;

void update_BOAT2(int value) {

    if(position_BOAT2 <-1.0)
        position_BOAT2 = 1.0f;

    position_BOAT2 -= speed_BOAT2;

glutPostRedisplay();


glutTimerFunc(100, update_BOAT2, 0);
}
GLfloat position_BOAT3 = 0.0f;
GLfloat speed_BOAT3 = 0.003f;

void update_BOAT3(int value) {

    if(position_BOAT3 <-1.0)
        position_BOAT3 = 1.0f;

    position_BOAT3 -= speed_BOAT3;

glutPostRedisplay();


glutTimerFunc(100, update_BOAT3, 0);
}
GLfloat position_BOAT4 = 0.0f;
GLfloat speed_BOAT4 = 0.003f;

void update_BOAT4(int value) {

    if(position_BOAT4 <-1.0)
        position_BOAT4 = 1.0f;

    position_BOAT4 -= speed_BOAT4;

glutPostRedisplay();


glutTimerFunc(100, update_BOAT4, 0);
}
GLfloat position_CARGO1 = 0.0f;
GLfloat speed_CARGO1 = 0.008f;

void update_CARGO1(int value) {

    if(position_CARGO1 <-1.0)
        position_CARGO1 = 1.0f;

    position_CARGO1 -= speed_CARGO1;

glutPostRedisplay();


glutTimerFunc(100, update_CARGO1, 0);
}
GLfloat position_CARGO2 = 0.0f;
GLfloat speed_CARGO2 = 0.008f;

void update_CARGO2(int value) {

    if(position_CARGO2 <-1.0)
        position_CARGO2 = 1.0f;

    position_CARGO2 -= speed_CARGO2;

glutPostRedisplay();


glutTimerFunc(100, update_CARGO2, 0);
}
GLfloat position_BUS = 0.0f;
GLfloat speed_BUS = 0.008f;

void update_BUS(int value) {

    if(position_BUS <-1.0)
        position_BUS = 1.0f;

    position_BUS -= speed_BUS;

glutPostRedisplay();


glutTimerFunc(100, update_BUS, 0);
}
GLfloat position_CAR = 0.0f;
GLfloat speed_CAR = 0.008f;

void update_CAR(int value) {

    if(position_CAR <-1.0)
        position_CAR = 1.0f;

    position_CAR -= speed_CAR;

glutPostRedisplay();


glutTimerFunc(100, update_CAR, 0);
}
GLfloat position_JEEPCAR = 0.0f;
GLfloat speed_JEEPCAR = 0.008f;

void update_JEEPCAR(int value) {

    if(position_JEEPCAR<-1.0)
        position_JEEPCAR= 1.0f;

    position_JEEPCAR-= speed_JEEPCAR;

glutPostRedisplay();


glutTimerFunc(100, update_JEEPCAR, 0);
}
GLfloat position_CARGO3 = 0.0f;
GLfloat speed_CARGO3= 0.008f;

void update_CARGO3(int value) {

    if(position_CARGO3 <-1.0)
        position_CARGO3 = 1.0f;

    position_CARGO3 -= speed_CARGO3;

glutPostRedisplay();


glutTimerFunc(100, update_CARGO3, 0);
}
GLfloat position_GOLFCAR = 0.0f;
GLfloat speed_GOLFCAR = 0.003f;

void update_GOLFCAR(int value) {

    if(position_GOLFCAR <-1.0)
        position_GOLFCAR = 0.06f;

    position_GOLFCAR -= speed_GOLFCAR;

glutPostRedisplay();


glutTimerFunc(100, update_GOLFCAR, 0);
}



void circle(float a, float b, float r){

    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x=a; GLfloat y=b; GLfloat radius =r;
       glBegin(GL_TRIANGLE_FAN);
       glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();
}
void springFlower(){
        glColor3ub(247, 183, 225);
	    circle(0.025,.006,0.05);
        circle(0.014,.025,0.05);
        circle(0.0015,.005,0.05);
        glColor3ub(255, 3, 3);
	    circle(0.012,.012,0.03);
}


//void updatevalue(int upvalue) {
//
//    if(position1 <-1.0)
//        position1 = 1.0f;
//
//    positionone -= speed1;
//
//glutPostRedisplay();
//
//
//glutTimerFunc(100, updatevalue, 0);
//}


void display() {
    glClearColor(0.0f, 1.0f, 1.0f, 0.0f);
   glClear(GL_COLOR_BUFFER_BIT);
//glPointSize(8.0);
//	glLineWidth(0.1);
//=========================================================Road
      glBegin(GL_QUADS);
      glColor3ub(71,72,76);
      glVertex2f(1.0f, -0.14f);
      glVertex2f( 1.0f, 0.17f);
      glVertex2f( -1.0f,  0.17f);
      glVertex2f(-1.0f,  -0.14f);

   glEnd();

////SKY OCEAN BARRIER
//	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
//	glColor3ub(128, 128, 128); // Red
//	glVertex2f(1.0f, 0.55f);    // x, y
//	glVertex2f(-1.0f, 0.55f);    // x, y
//	glEnd();



//
//
//
////==1st cloud
//glPushMatrix();
//glTranslatef(position,0.0f, 0.0f);
//
//GLfloat p1=0.2f; GLfloat q1= 0.8f; GLfloat r1 = 0.03f;
//int tringle1=40;
//
//GLfloat tp1 =2.0f * PI ;
//
//glBegin (GL_TRIANGLE_FAN);
//glColor3ub ( 255,255,255);
//glVertex2f (p1,q1);
//for(int i= 0;i<=tringle1; i++)
//{
//glVertex2f (
//p1+(r1*cos(i*tp1/tringle1)),
//q1+(r1*sin(i*tp1/tringle1))
//);
//}
//glEnd ();
//
//
//GLfloat p2=0.24f; GLfloat q2= 0.81f; GLfloat r2 = 0.035f;
//int tringle2=40;
//
//GLfloat tp2 =2.0f * PI ;
//
//glBegin (GL_TRIANGLE_FAN);
//glColor3ub ( 255,255,255);
//glVertex2f (p2,q2);
//for(int i= 0;i<=tringle2; i++)
//{
//glVertex2f (
//p2+(r2*cos(i*tp2/tringle2)),
//q2+(r2*sin(i*tp2/tringle2))
//);
//}
//glEnd ();
//
//
//GLfloat p3=0.27f; GLfloat q3= 0.8f; GLfloat r3 = 0.03f;
//int tringle3=40;
//
//GLfloat tp3 =2.0f * PI ;
//
//glBegin (GL_TRIANGLE_FAN);
//glColor3ub ( 255,255,255);
//glVertex2f (p3,q3);
//for(int i= 0;i<=tringle3; i++)
//{
//glVertex2f (
//p3+(r3*cos(i*tp3/tringle3)),
//q3+(r3*sin(i*tp3/tringle3))
//);
//}
//glEnd ();
//glPopMatrix();
//
//
////==2nd cloud
//
//glPushMatrix();
//glTranslatef(position,0.0f, 0.0f);
//
//GLfloat p4=0.4f; GLfloat q4= 0.9f; GLfloat r4 = 0.03f;
//int tringle4=40;
//
//GLfloat tp4 =2.0f * PI ;
//
//glBegin (GL_TRIANGLE_FAN);
//glColor3ub ( 255,255,255);
//glVertex2f (p4,q4);
//for(int i= 0;i<=tringle4; i++)
//{
//glVertex2f (
//p4+(r4*cos(i*tp4/tringle4)),
//q4+(r4*sin(i*tp4/tringle4))
//);
//}
//glEnd ();
//
//
//GLfloat p5=0.44f; GLfloat q5= 0.91f; GLfloat r5 = 0.035f;
//int tringle5=40;
//
//GLfloat tp5 =2.0f * PI ;
//
//glBegin (GL_TRIANGLE_FAN);
//glColor3ub ( 255,255,255);
//glVertex2f (p5,q5);
//for(int i= 0;i<=tringle5; i++)
//{
//glVertex2f (
//p5+(r5*cos(i*tp5/tringle5)),
//q5+(r5*sin(i*tp5/tringle5))
//);
//}
//glEnd ();
//
//
//GLfloat p6=0.47f; GLfloat q6= 0.9f; GLfloat r6 = 0.03f;
//int tringle6=40;
//
//GLfloat tp6 =2.0f * PI ;
//
//glBegin (GL_TRIANGLE_FAN);
//glColor3ub ( 255,255,255);
//glVertex2f (p6,q6);
//for(int i= 0;i<=tringle6; i++)
//{
//glVertex2f (
//p6+(r6*cos(i*tp6/tringle6)),
//q6+(r6*sin(i*tp6/tringle6))
//);
//}
//glEnd ();
//glPopMatrix();
//
////==================================================================================sun
//glPushMatrix();
//glTranslatef(0.0f,position, 0.0f);
//GLfloat p7=-0.8; GLfloat q7= 0.8f; GLfloat r7 = 0.1f;
//int tringle7=60;
//
//GLfloat tp7 =2.0f * PI ;
//
//glBegin (GL_TRIANGLE_FAN);
//glColor3ub ( 255,255,128);
//glVertex2f (p7,q7);
//for(int i= 0;i<=tringle7; i++)
//{
//glVertex2f (
//p7+(r7*cos(i*tp7/tringle7)),
//q7+(r7*sin(i*tp7/tringle7))
//);
//}
//glEnd ();
//
//glPopMatrix();


//==============================================================PARK GROUND
 glBegin(GL_QUADS);
      glColor3ub(107, 162, 69);
      glVertex2f(1.0f, -1.06f);
      glVertex2f( 1.0f, -0.14f);
      glVertex2f( -1.0f,  -0.14f);
      glVertex2f(-1.0f,  -1.06f);
glEnd ();
//==============================================================SKY
 glBegin(GL_QUADS);
      glColor3ub(135, 206, 235);
      glVertex2f(1.0f, 0.55f);
      glVertex2f( 1.0f, 1.0f);
      glVertex2f( -1.0f,  1.0f);
      glVertex2f(-1.0f,  0.55f);
glEnd ();
   //================================================================SUN
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,position1, 0.0f);
    glColor3ub(253, 184, 19);
circle(-0.8,0.8,0.08);
    glPopMatrix();

glBegin(GL_POLYGON);
       glColor3ub(86,181,202);
       glVertex2f(0.37f,0.55f);
       glVertex2f(0.39f,0.6f);
       glVertex2f(0.443f,0.7f);

glVertex2f(0.25f,0.7f);
glVertex2f(0.31f,0.6f);
   glVertex2f(0.33f,0.55f);

   glEnd();

   glPushMatrix();
    glTranslatef(0.0f,position3,0.0f);
       glPointSize(10.0);
	glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub(255,255, 255);
	glVertex2f(0.35f,0.56f);
	glVertex2f(0.35f, 0.65f);
		glVertex2f(0.33f,0.65f);
	glVertex2f(0.33f, 0.7f);
			glVertex2f(0.37f,0.62f);
	glVertex2f(0.37f, 0.7f);
				glVertex2f(0.34f,0.55f);
	glVertex2f(0.34f, 0.6f);
					glVertex2f(0.36f,0.55f);
	glVertex2f(0.36f, 0.6f);
glEnd();
glPopMatrix();



//==============================================================OCEAN
 glBegin(GL_QUADS);
      glColor3ub(0, 84, 119);
      glVertex2f(1.0f, 0.17f);
      glVertex2f( 1.0f, 0.55f);
      glVertex2f( -1.0f,  0.55f);
      glVertex2f(-1.0f,  0.17f);
glEnd ();

////==============================================================BOAT
//glPushMatrix();
//glTranslatef(positionone,0.0f, 0.0f);
//   glBegin(GL_QUADS);
//      glColor3f(1.0f, 0.0f, 0.0f);
//      glVertex2f(-0.3f, -0.8f);
//      glVertex2f( -0.9f, -0.8f);
//      glVertex2f( -0.8f,  -0.92f);
//      glVertex2f(-0.4f,  -0.92f);
//   glEnd();
//   glBegin(GL_QUADS);
//   glColor3f(1.0f, 1.0f, 1.0f);
//   glVertex2f(-0.4f,-0.8f);
//   glVertex2f(-0.4f,  -0.7f);
//   glVertex2f(-0.7f, -0.7f);
//   glVertex2f(-0.7f, -0.8f);
//   glEnd();
//   glBegin(GL_TRIANGLES);
//   glColor3f(1.0f, 0.0f, 0.0f);
//   glVertex2f(-0.45f,-0.75f);
//   glVertex2f(-0.6f,  -0.3f);
//   glVertex2f(-0.6f, -0.7f);
//   glEnd();
//   glBegin(GL_TRIANGLES);
//   glColor3f(1.0f, 0.0f, 0.0f);
//   glVertex2f(-0.62f,-0.7f);
//   glVertex2f(-0.62f,  -0.3f);
//   glVertex2f(-0.78f, -0.75f);
//   glEnd();
//glPopMatrix();
//=====================================================Tunnel
//      glBegin(GL_QUADS);
//      glColor3ub(205,240,255);
//      glVertex2f(0.0f, -0.12f);
//      glVertex2f( 0.0f, 0.32f);
//      glVertex2f( -1.0f,  0.18f);
//      glVertex2f(-1.0f,  -0.12f);
//      glEnd();
//      glBegin(GL_TRIANGLES);
//      glColor3ub(205,240,255);
//   //================================================================SUN
//    glLoadIdentity();
//    glPushMatrix();
//    glTranslatef(0.0f,position1, 0.0f);
//    glColor3ub(253, 184, 19);
//circle(-0.8,0.8,0.08);
//    glPopMatrix();


//================================================================CLOUD1
glPushMatrix();
glTranslated(position_CLOUD1,0.0f,0.0f);
glColor3ub(255, 255, 255);
circle(0.2,0.79,0.04);
circle(0.15,0.8,0.05);
circle(0.1,0.79,0.04);
glPopMatrix();
//================================================================CLOUD2
glPushMatrix();
glTranslated(position_CLOUD2,0.0f,0.0f);
glColor3ub(255, 255, 255);
circle(-0.5,0.85,0.04);
circle(-0.45,0.86,0.05);
circle(-0.4,0.85,0.04);
glPopMatrix();
//================================================================CLOUD3
glPushMatrix();
glTranslated(position_CLOUD3,0.0f,0.0f);
glColor3ub(255, 255, 255);
circle(-0.3,0.77,0.04);
circle(-0.25,0.78,0.05);
circle(-0.2,0.78,0.04);
glPopMatrix();
//================================================================CLOUD4
glPushMatrix();
glTranslated(position_CLOUD4,0.0f,0.0f);
glColor3ub(255, 255, 255);
circle(-0.1,0.89,0.04);
circle(-0.05,0.9,0.05);
//circle(-0.2,0.78,0.04);
glPopMatrix();

//================================================================ROAD BETWEEN PARK AND GOLF COURSE
      glBegin(GL_QUADS);
      glColor3ub(71,72,76);
      glVertex2f(0.8f, -1.0f);
      glVertex2f( -0.5f, -0.14f);
      glVertex2f( -0.55f,  -0.14f);
      glVertex2f(0.6f,  -1.0f);
      glEnd();
//===========================================================AMUSEMENT PARK BAR
//	glPointSize(10.0);
//	glLineWidth(3.5);
//	glBegin(GL_LINES);
//	glColor3ub(128, 0, 0);
//	glVertex2f(-0.55f, -0.6f);
//	glVertex2f(-0.55f, -0.22f);
//	glEnd();
//	glBegin(GL_LINES);
//	glColor3ub(128, 0, 0);
//	glVertex2f(-0.88f, -0.63f);
//	glVertex2f(-0.88f, -0.24f);
//	glEnd();
//	glBegin(GL_LINES);
//	glColor3ub(128, 0, 0);
//	glVertex2f(-0.55f, -0.22f);
//	glVertex2f(-0.88f, -0.24f);
//	glEnd();
////================================================================BUILDING 1
//      glBegin(GL_QUADS);
//      glColor3ub(210, 196, 185);
//      glVertex2f(1.0f, -1.0f);
//      glVertex2f( 1.0f, -0.4f);
//      glVertex2f( 0.8f,  -0.4f);
//      glVertex2f(0.8f,  -1.0f);
//      glEnd();
//      glBegin(GL_QUADS);
//      glColor3ub(210, 196, 185);
//      glVertex2f(1.0f, -0.3f);
//      glVertex2f( 0.85f, -0.3f);
//      glVertex2f( 0.8f,  -0.4f);
//      glVertex2f(1.0f,  -0.4f);
//      glEnd();
//      glBegin(GL_QUADS);
//      glColor3ub(168, 202, 226);
//      glVertex2f(1.0f, -0.23f);
//      glVertex2f( 0.9f, -0.23f);
//      glVertex2f( 0.86f,  -0.3f);
//      glVertex2f(1.0f,  -0.3f);
//      glEnd();
//   	glPointSize(8.0);
//	glLineWidth(3.0);
//	glBegin(GL_LINES);
//	glColor3ub(88, 63, 47);
//	glVertex2f(1.0f, -0.4f);
//	glVertex2f(0.8f, -0.4f);
//	glEnd();
//    glPointSize(8.0);
//	glLineWidth(3.0);
//	glBegin(GL_LINES);
//	glColor3ub(88, 63, 47);
//	glVertex2f(0.85f, -0.3f);
//	glVertex2f(0.8f, -0.4f);
//	glEnd();
//	glPointSize(8.0);
//	glLineWidth(3.0);
//	glBegin(GL_LINES);
//	glColor3ub(88, 63, 47);
//	glVertex2f(1.0f, -0.3f);
//	glVertex2f(0.85f, -0.3f);
//	glEnd();
//	glPointSize(8.0);
//	glLineWidth(3.0);
//	glBegin(GL_LINES);
//	glColor3ub(88, 63, 47);
//	glVertex2f(0.8f, -1.0f);
//	glVertex2f(0.8f, -0.4f);
//	glEnd();
////================================================================BUILDING 2
//	glPointSize(8.0);
//	glLineWidth(3.0);
//	glBegin(GL_LINES);
//	glColor3ub(88, 63, 47);
//	glVertex2f(0.86f, -0.3f);
//	glVertex2f(0.9f, -0.23f);
//	glEnd();
//    glPointSize(8.0);
//	glLineWidth(3.0);
//	glBegin(GL_LINES);
//	glColor3ub(88, 63, 47);
//	glVertex2f(1.0f, -0.23f);
//	glVertex2f(0.9f, -0.23f);
//	glEnd();
////================================================================Mirrors in BUILDING 1
//      glBegin(GL_QUADS);
//      glColor3ub(212,225,236);
//      glVertex2f(0.98f, -0.97f);
//      glVertex2f( 0.98f, -0.87f);
//      glVertex2f( 0.92f,  -0.87f);
//      glVertex2f(0.92f,  -0.97f);
//      glEnd();
//      glBegin(GL_QUADS);
//      glColor3ub(212,225,236);
//      glVertex2f(0.88f, -0.97f);
//      glVertex2f( 0.88f, -0.87f);
//      glVertex2f( 0.82f,  -0.87f);
//      glVertex2f(0.82f,  -0.97f);
//      glEnd();
//
//      glBegin(GL_QUADS);
//      glColor3ub(212,225,236);
//      glVertex2f(0.98f, -0.79f);
//      glVertex2f( 0.98f, -0.69f);
//      glVertex2f( 0.92f,  -0.69f);
//      glVertex2f(0.92f,  -0.79f);
//      glEnd();
//      glBegin(GL_QUADS);
//      glColor3ub(212,225,236);
//      glVertex2f(0.88f, -0.79f);
//      glVertex2f( 0.88f, -0.69f);
//      glVertex2f( 0.82f,  -0.69f);
//      glVertex2f(0.82f,  -0.79f);
//      glEnd();
//      glBegin(GL_QUADS);
//      glColor3ub(212,225,236);
//      glVertex2f(0.98f, -0.61f);
//      glVertex2f( 0.98f, -0.51f);
//      glVertex2f( 0.92f,  -0.51f);
//      glVertex2f(0.92f,  -0.61f);
//      glEnd();
//      glBegin(GL_QUADS);
//      glColor3ub(212,225,236);
//      glVertex2f(0.88f, -0.61f);
//      glVertex2f( 0.88f, -0.51f);
//      glVertex2f( 0.82f,  -0.51f);
//      glVertex2f(0.82f,  -0.61f);
//      glEnd();
//================================================================HILLS

   glBegin(GL_TRIANGLES);
   glColor3ub(106,108,109);
   glVertex2f(1.0f,0.55f);
   glVertex2f(0.9f,0.73f);
   glVertex2f(0.8f,0.55f);
   glEnd();
      glBegin(GL_TRIANGLES);
   glColor3ub(131,148,98);
   glVertex2f(1.0f,0.55f);
   glVertex2f(1.0f,0.8f);
   glVertex2f(0.8f,0.55f);
   glEnd();
   glBegin(GL_TRIANGLES);
   glColor3ub(154,196,96);
   glVertex2f(1.0f,0.55f);
   glVertex2f(0.8f,0.8f);
   glVertex2f(0.6f,0.55f);
   glEnd();
      glBegin(GL_POLYGON);
   glColor3ub(47,117,81);
   glVertex2f(0.89f,0.55f);
   glVertex2f(0.845f,0.70f);
   glVertex2f(0.77f,0.8f);
   glVertex2f(0.6f,0.85f);
     glVertex2f(0.55f,0.8f);
     glVertex2f(0.50f,0.75f);
       glVertex2f(0.45f,0.72f);
       glVertex2f(0.4f,0.6f);
       glVertex2f(0.36f,0.55f);
   glEnd();
            glBegin(GL_POLYGON);
   glColor3ub(131,148,98);
   glVertex2f(0.2f,0.55f);
   glVertex2f(0.18f,0.6f);
   glVertex2f(0.15f,0.65f);
   glVertex2f(0.12f,0.7f);
     glVertex2f(0.08f,0.76f);
     glVertex2f(0.06f,0.73f);
       glVertex2f(0.02f,0.7f);
       glVertex2f(0.0f,0.65f);
       glVertex2f(-0.04f,0.62f);
       glVertex2f(-0.06f,0.6f);
       glVertex2f(-0.1f,0.55f);
   glEnd();
         glBegin(GL_POLYGON);
   glColor3ub(47,117,81);
   glVertex2f(0.33f,0.55f);
   glVertex2f(0.31f,0.6f);
   glVertex2f(0.27f,0.65f);
   glVertex2f(0.25f,0.7f);
     glVertex2f(0.2f,0.73f);
     glVertex2f(0.18f,0.7f);
       glVertex2f(0.15f,0.65f);
       glVertex2f(0.12f,0.63f);
       glVertex2f(0.1f,0.62f);
       glVertex2f(0.06f,0.6f);
       glVertex2f(0.04f,0.55f);
   glEnd();
         glBegin(GL_POLYGON);
   glColor3ub(47,117,81);
   glVertex2f(1.0f,0.55f);
   glVertex2f(1.0f,0.6f);
   glVertex2f(0.98f,0.65f);
   glVertex2f(0.96f,0.66f);
     glVertex2f(0.91f,0.58f);
       glVertex2f(0.9f,0.55f);
   glEnd();

//========================================bIG fOUNTAIN

//   glBegin(GL_TRIANGLES);
//   glColor3ub(131,148,98);
//   glVertex2f(1.0f,0.55f);
//   glVertex2f(1.0f,0.68f);
//   glVertex2f(0.95f,0.55f);
//   glEnd();
//   glBegin(GL_TRIANGLES);
//   glColor3ub(31,51,34);
//   glVertex2f(0.88f,0.55f);
//   glVertex2f(0.8f,0.71f);
//   glVertex2f(0.72f,0.55f);
//   glEnd();
//   glBegin(GL_TRIANGLES);
//   glColor3ub(31,51,34);
//   glVertex2f(0.73f,0.55f);
//   glVertex2f(0.7f,0.60f);
//   glVertex2f(0.65f,0.55f);
//   glEnd();
//   glBegin(GL_TRIANGLES);
//   glColor3ub(131,148,98);
//   glVertex2f(1.0f,0.55f);
//   glVertex2f(1.0f,0.8f);
//   glVertex2f(0.8f,0.55f);
//   glEnd();
// //================================================================Fountain
         glBegin(GL_POLYGON);
   glColor3ub(86,181,202);
   glVertex2f(0.9f,0.54f);
   glVertex2f(0.908f,0.575f);
   glVertex2f(0.918f,0.59f);
   glVertex2f(0.878f,0.59f);
     glVertex2f(0.884f,0.57f);
       //glVertex2f(0.86f,0.62f);
       glVertex2f(0.889f,0.54f);
   glEnd();
//=====================================================================YELLOW STEPS IN BIG ROAD
   	glPointSize(10.0);
	glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(239, 183, 0);
	glVertex2f(0.55f, 0.035f);
	glVertex2f(0.6f, 0.035f);
		glVertex2f(0.4f, 0.035f);
	glVertex2f(0.45f, 0.035f);
			glVertex2f(0.25f, 0.035f);
	glVertex2f(0.30f, 0.035f);
			glVertex2f(0.1f, 0.035f);
	glVertex2f(0.15f, 0.035f);
			glVertex2f(0.7f, 0.035f);
	glVertex2f(0.75f, 0.035f);
			glVertex2f(0.85f, 0.035f);
	glVertex2f(0.9f, 0.035f);


			glVertex2f(0.15f, 0.035f);
	glVertex2f(0.1f, 0.035f);
				glVertex2f(0.0f, 0.035f);
	glVertex2f(-0.05f, 0.035f);
				glVertex2f(-0.15f, 0.035f);
	glVertex2f(-0.2f, 0.035f);
				glVertex2f(-0.3f, 0.035f);
	glVertex2f(-0.35f, 0.035f);
				glVertex2f(-0.45f, 0.035f);
	glVertex2f(-0.5f, 0.035f);
//				glVertex2f(-0.6f, 0.035f);
//	glVertex2f(-0.65f, 0.035f);
				glVertex2f(-0.75f, 0.035f);
	glVertex2f(-0.8f, 0.035f);
				glVertex2f(-0.9f, 0.035f);
	glVertex2f(-0.95f, 0.035f);
	glEnd();
//=====================================================================WHITE STEPS IN NARROW ROAD
	glBegin(GL_QUADS);
	glColor3ub(255, 255,255);
	glVertex2f(0.7f, -1.0f);
	glVertex2f(-0.52f, -0.14f);
	glVertex2f(-0.525f, -0.14f);
	glVertex2f(0.68f, -1.0f);
glEnd();
//=====================================================================GOLF CAR
//glPushMatrix();
//glTranslatef(positionone,0.0f, 0.0f);
//   glBegin(GL_POLYGON);
//      glColor3ub(132, 18,16);
//
//
//glVertex2f(0.4f,-0.22f);
//glVertex2f(0.4f,-0.15f);
//glVertex2f(0.38f,-0.10f);
//glVertex2f(0.36f,-0.10f);
//glVertex2f(0.33f,-0.14f);
//glVertex2f(0.27f,-0.14f);
//glVertex2f(0.24f,-0.10f);
//glVertex2f(0.22f,-0.10f);
//glVertex2f(0.19f,-0.15f);
//glVertex2f(0.19f,-0.22f);
//glEnd();
//glColor3ub(0, 0, 0);
//circle(0.36, -0.22,0.0255 );
//circle(0.23, -0.22,0.0255 );
//glColor3ub(255, 255, 255);
//circle(0.36, -0.22,0.0153 );
//circle(0.23, -0.22,0.0153 );
//
//   glBegin(GL_POLYGON);
//      glColor3ub(19, 19,70);
//glVertex2f(0.31f,-0.14f);
//glVertex2f(0.31f,-0.11f);
//
//glVertex2f(0.27f,-0.11f);
//glVertex2f(0.275f,-0.07f);
//glVertex2f(0.26f,-0.07f);
//glVertex2f(0.26f,-0.10f);
//glVertex2f(0.28f,-0.14f);
//glVertex2f(0.22f,-0.10f);
//glVertex2f(0.19f,-0.15f);
//glVertex2f(0.19f,-0.22f);
//glEnd();

//===============================================HUMAN ON GOLF CAR
//glBegin(GL_QUADS);
//      glColor3ub(75, 0,130);
//glVertex2f(0.31f,-0.11f);
//glVertex2f(0.31f,-0.07f);
//
//glVertex2f(0.29f,-0.07f);
//glVertex2f(0.29f,-0.11f);
//glEnd();
//glBegin(GL_QUADS);
//      glColor3ub(0, 0,170);
//glVertex2f(0.317f,-0.11f);
//glVertex2f(0.317f,-0.094f);
//
//glVertex2f(0.31f,-0.094f);
//glVertex2f(0.31f,-0.11f);
//glEnd();
//glBegin(GL_QUADS);
//      glColor3ub(0, 0,170);
//glVertex2f(0.317f,-0.14f);
//glVertex2f(0.317f,-0.11f);
//
//glVertex2f(0.31f,-0.11f);
//glVertex2f(0.31f,-0.14f);
//glEnd();
//glColor3ub(190,142, 119);
//circle(0.305, -0.06,0.012 );
//glColor3ub(0,0, 0);
//circle(0.33, -0.09,0.012 );
//glColor3ub(187,194, 204);
//circle(0.33, -0.09,0.008 );
//   	glPointSize(10.0);
//	glLineWidth(1.5);
//	glBegin(GL_LINES);
//	glColor3ub(187,194, 204);
//	glVertex2f(0.35f, -0.11f);
//	glVertex2f(0.335f, -0.09f);
//glEnd();
//   	glPointSize(10.0);
//	glLineWidth(3.5);
//	glBegin(GL_LINES);
//	glColor3ub(0,0, 0);
//	glVertex2f(0.295f, -0.051f);
//	glVertex2f(0.322f, -0.051f);
//glEnd();
//  	glPointSize(10.0);
//	glLineWidth(3.5);
//	glBegin(GL_LINES);
//	glColor3ub(187,194, 204);
//	glVertex2f(0.368f,-0.10f);
//	glVertex2f(0.35f, -0.025f);
//glEnd();
//  	glPointSize(10.0);
//	glLineWidth(3.5);
//	glBegin(GL_LINES);
//	glColor3ub(187,194, 204);
//	glVertex2f(0.23f,-0.10f);
//	glVertex2f(0.24f, -0.025f);
//glEnd();
//  	glPointSize(10.0);
//	glLineWidth(7);
//	glBegin(GL_LINES);
//	glColor3ub(0,0, 0);
//	glVertex2f(0.368f,-0.025f);
//	glVertex2f(0.24f, -0.025f);
//glEnd();
//
//
//glBegin(GL_TRIANGLES);
//      glColor3ub(0, 0,170);
//glVertex2f(0.3135f,-0.094f);
//glVertex2f(0.3136f,-0.092f);
//glVertex2f(0.3134f,-0.092f);
//glEnd();
//glColor3ub(255, 255, 255);
//circle(0.4, -0.23,0.2 );
//glEnd();
//   glBegin(GL_QUADS);
//   glColor3f(1.0f, 1.0f, 1.0f);
//   glVertex2f(-0.4f,-0.8f);
//   glVertex2f(-0.4f,  -0.7f);
//   glVertex2f(-0.7f, -0.7f);
//   glVertex2f(-0.7f, -0.8f);
//   glEnd();
//   glBegin(GL_TRIANGLES);
//   glColor3f(1.0f, 0.0f, 0.0f);
//   glVertex2f(-0.45f,-0.75f);
//   glVertex2f(-0.6f,  -0.3f);
//   glVertex2f(-0.6f, -0.7f);
//   glEnd();
//   glBegin(GL_TRIANGLES);
//   glColor3f(1.0f, 0.0f, 0.0f);
//   glVertex2f(-0.62f,-0.7f);
//   glVertex2f(-0.62f,  -0.3f);
//   glVertex2f(-0.78f, -0.75f);
//   glEnd();
//glPopMatrix();

//	    glColor3ub(255, 255, 255);
//circle(0.36, -0.22,0.0255 );
 //glPushMatrix();
    //glTranslatef(_run5,0,0);
//=====================================================================UPPER FOOTPATH
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(1.0f, 0.17f);
    glVertex2f(1.0f, 0.18f);
    glVertex2f(-1.0f,0.18f);
    glVertex2f(-1.0f, 0.17f);

    glEnd();
//=====================================================================Lower Footpath
     glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.55f,  -0.14f);
    glVertex2f(-0.55f, -0.12f);
    glVertex2f(-1.0f,-0.12f);
    glVertex2f(-1.0f, -0.14f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(1.0f,  -0.14f);
    glVertex2f(1.0f, -0.12f);
    glVertex2f(-0.5f,-0.12f);
    glVertex2f(-0.5f, -0.14f);

    glEnd();
 //=============================================Left small boat
glPushMatrix();
    glTranslatef(position_BOAT3,0.0f,0.0f);
    //glPushMatrix();
    //glTranslatef(-0.45f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(134,86,67);
    glVertex2f(0.8f, 0.52f);
    glVertex2f(0.8f, 0.57f);
    glVertex2f(0.65f, 0.57f);
    glVertex2f(0.7f, 0.52f);
glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.8f, 0.57f);
    glVertex2f(0.8f, 0.6f);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.68f, 0.57f);
  glEnd();
//        glBegin(GL_QUADS);
//    glColor3f(1.0f,1.0f,1.0f);
//    glVertex2f(0.55f, 0.45f);
//    glVertex2f(0.55f, 0.50f);
//    glVertex2f(0.4f, 0.50f);
//    glVertex2f(0.35f, 0.45f);
//  glEnd();

//  //...........................MIRRORS
glColor3ub(0, 0, 0);
circle(0.71,0.585,0.01);
circle(0.735,0.585,0.01);
circle(0.76,0.585,0.01);
circle(0.785,0.585,0.01);
glPopMatrix();
//=====================================================left boat
glPushMatrix();
    glTranslatef(-position_BOAT1,0.0f,0.0f);
    //glPushMatrix();
    //glTranslatef(-0.45f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(141,2,31);
    glVertex2f(-0.9f, 0.5f);
    glVertex2f(-0.8f, 0.5f);
    glVertex2f(-0.77f, 0.55f);
    glVertex2f(-0.9f, 0.55f);
  glEnd();
      glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.9f, 0.55f);
    glVertex2f(-0.8f, 0.55f);
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.9f, 0.6f);
  glEnd();
  //...........................MIRRORS
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.89f, 0.56f);
    glVertex2f(-0.87f, 0.56f);
    glVertex2f(-0.87f, 0.59f);
    glVertex2f(-0.89f, 0.59f);
  glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.86f, 0.56f);
    glVertex2f(-0.84f, 0.56f);
    glVertex2f(-0.84f, 0.59f);
    glVertex2f(-0.86f, 0.59f);
  glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.83f, 0.56f);
    glVertex2f(-0.81f, 0.56f);
    glVertex2f(-0.81f, 0.59f);
    glVertex2f(-0.83f, 0.59f);
  glEnd();
  //......................horn
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.82f, 0.6f);
    glVertex2f(-0.81f, 0.6f);
    glVertex2f(-0.81f, 0.65f);
    glVertex2f(-0.82f, 0.65f);
  glEnd();
    glPopMatrix();

 //====================================================Middle Boat
 glPushMatrix();
    glTranslatef(-position_BOAT2,0.0f,0.0f);
    //glPushMatrix();
    //glTranslatef(-0.45f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(-0.6f, 0.4f);
    glVertex2f(-0.55f, 0.47f);
    glVertex2f(-0.75f, 0.47f);
    glVertex2f(-0.75f, 0.4f);
  glEnd();
      glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.6f, 0.47f);
    glVertex2f(-0.63f, 0.52f);
    glVertex2f(-0.73f, 0.52f);
    glVertex2f(-0.75f, 0.47f);
  glEnd();
//  //...........................MIRRORS
glColor3ub(0, 0, 0);
circle(-0.64,0.49,0.014);
circle(-0.68,0.49,0.014);
circle(-0.72,0.49,0.014);

//  //......................horn
//    glBegin(GL_QUADS);
//    glColor3f(1.0f,0.0f,0.0f);
//    glVertex2f(-0.82f, 0.6f);
//    glVertex2f(-0.81f, 0.6f);
//    glVertex2f(-0.81f, 0.65f);
//    glVertex2f(-0.82f, 0.65f);
//  glEnd();
   glPopMatrix();

//=====================================================RIGHT BIG boat
glPushMatrix();
    glTranslatef(position_BOAT3,0.0f,0.0f);
    //glPushMatrix();
    //glTranslatef(-0.45f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(15,128,99);
    glVertex2f(0.55f, 0.3f);
    glVertex2f(0.55f, 0.4f);
    glVertex2f(0.25f, 0.4f);
    glVertex2f(0.3f, 0.3f);
glEnd();
      glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.55f, 0.4f);
    glVertex2f(0.55f, 0.45f);
    glVertex2f(0.35f, 0.45f);
    glVertex2f(0.3f, 0.4f);
  glEnd();
        glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.55f, 0.45f);
    glVertex2f(0.55f, 0.50f);
    glVertex2f(0.4f, 0.50f);
    glVertex2f(0.35f, 0.45f);
  glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(0.55f, 0.45f);
	glVertex2f(0.35f, 0.45f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(0.28f, 0.4f);
	glVertex2f(0.28f, 0.35f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(0.28f, 0.35f);
	glVertex2f(0.29f, 0.37f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(0.28f, 0.35f);
	glVertex2f(0.27f, 0.37f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(0.283f, 0.38f);
	glVertex2f(0.276f, 0.38f);
glEnd();
//  //...........................MIRRORS
glColor3ub(0, 0, 0);
circle(0.37,0.42,0.017);
circle(0.42,0.42,0.017);
circle(0.47,0.42,0.017);
circle(0.52,0.42,0.017);
circle(0.42,0.48,0.017);
circle(0.47,0.48,0.017);
circle(0.52,0.48,0.017);
glPopMatrix();
////=====================================================RIGHT Small boat
////glPushMatrix();
////    glTranslatef(position_BOAT3,0.0f,0.0f);
////    //glPushMatrix();
////    //glTranslatef(-0.45f,0.0f,0.0f);
////    glBegin(GL_QUADS);
////    glColor3ub(134,86,67);
////    glVertex2f(0.8f, 0.52f);
////    glVertex2f(0.8f, 0.57f);
////    glVertex2f(0.65f, 0.57f);
////    glVertex2f(0.7f, 0.52f);
////glEnd();
////    glBegin(GL_QUADS);
////    glColor3ub(255,255,255);
////    glVertex2f(0.8f, 0.57f);
////    glVertex2f(0.8f, 0.6f);
////    glVertex2f(0.7f, 0.6f);
////    glVertex2f(0.68f, 0.57f);
////  glEnd();
//////        glBegin(GL_QUADS);
//////    glColor3f(1.0f,1.0f,1.0f);
//////    glVertex2f(0.55f, 0.45f);
//////    glVertex2f(0.55f, 0.50f);
//////    glVertex2f(0.4f, 0.50f);
//////    glVertex2f(0.35f, 0.45f);
//////  glEnd();
//
//////  //...........................MIRRORS
//glColor3ub(0, 0, 0);
//circle(0.71,0.585,0.01);
//circle(0.735,0.585,0.01);
//circle(0.76,0.585,0.01);
//circle(0.785,0.585,0.01);
//glPopMatrix();
//====================================================================Bus stop
   glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.63f, 0.32f);
	glVertex2f(-0.93f, 0.32f);
glEnd();
   glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.63f, 0.22f);
	glVertex2f(-0.93f, 0.22f);
glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(-0.63f, 0.225f);
    glVertex2f(-0.63f, 0.315f);
    glVertex2f(-0.925f, 0.315f);
    glVertex2f(-0.925f, 0.225f);
    glEnd();
   glPointSize(10.0);
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.98f, 0.18f);
	glVertex2f(-0.98f, 0.42f);
glEnd();
   glPointSize(10.0);
	glLineWidth(8);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.98f, 0.18f);
	glVertex2f(-0.98f, 0.22f);
glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.95f, 0.43f);
	glVertex2f(-0.98f, 0.42f);
	glVertex2f(-0.98f, 0.4f);
glEnd();
   glPointSize(10.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.93f, 0.18f);
	glVertex2f(-0.93f, 0.4f);
glEnd();
   glPointSize(10.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.63f, 0.18f);
	glVertex2f(-0.63f, 0.4f);
glEnd();
   glPointSize(10.0);
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.91f, 0.18f);
	glVertex2f(-0.91f, 0.393f);
glEnd();
   glPointSize(10.0);
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.65f, 0.18f);
	glVertex2f(-0.65f, 0.393f);
glEnd();
   glPointSize(10.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.93f, 0.4f);
	glVertex2f(-0.91f, 0.393f);
glEnd();
   glPointSize(10.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.63f, 0.4f);
	glVertex2f(-0.65f, 0.393f);

glEnd();
   glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.65f, 0.34f);
	glVertex2f(-0.91f, 0.34f);
glEnd();
   glPointSize(10.0);
	glLineWidth(7);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.62f, 0.37f);
	glVertex2f(-0.94f, 0.37f);
glEnd();
   glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.94f, 0.37f);
	glVertex2f(-0.91f, 0.34f);
glEnd();
   glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.62f, 0.37f);
	glVertex2f(-0.65f, 0.34f);
glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(-0.655f, 0.345f);
    glVertex2f(-0.625f, 0.365f);
    glVertex2f(-0.93f, 0.365f);
    glVertex2f(-0.91f, 0.345f);
    glEnd();
    //seat 1-left
    glPointSize(10.0);
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.8f, 0.18f);
	glVertex2f(-0.8f, 0.26f);
glEnd();
    glPointSize(10.0);
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.9f, 0.18f);
	glVertex2f(-0.9f, 0.26f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(186,140, 99);
	glVertex2f(-0.91f, 0.26f);
	glVertex2f(-0.79f, 0.26f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(186,140, 99);
	glVertex2f(-0.91f, 0.25f);
	glVertex2f(-0.79f, 0.25f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(186,140, 99);
	glVertex2f(-0.91f, 0.24f);
	glVertex2f(-0.79f, 0.24f);
glEnd();
    glPointSize(10.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(186,140, 99);
	glVertex2f(-0.91f, 0.22f);
	glVertex2f(-0.79f, 0.22f);
glEnd();
//seat 2 right
    glPointSize(10.0);
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.77f, 0.18f);
	glVertex2f(-0.77f, 0.26f);
glEnd();
    glPointSize(10.0);
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(-0.66f, 0.18f);
	glVertex2f(-0.66f, 0.26f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(186,140, 99);
	glVertex2f(-0.65f, 0.26f);
	glVertex2f(-0.78f, 0.26f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(186,140, 99);
	glVertex2f(-0.65f, 0.25f);
	glVertex2f(-0.78f, 0.25f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(186,140, 99);
	glVertex2f(-0.65f, 0.24f);
	glVertex2f(-0.78f, 0.24f);
glEnd();
    glPointSize(10.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(186,140, 99);
	glVertex2f(-0.65f, 0.22f);
	glVertex2f(-0.78f, 0.22f);
glEnd();
//dustbin
    glColor3ub(0, 0, 0);
    circle(-0.6,0.184,0.007);
    glColor3ub(0, 0, 0);
    circle(-0.6,0.22,0.01);
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.595f, 0.18f);
    glVertex2f(-0.59f, 0.22f);
    glVertex2f(-0.61f, 0.22f);
    glVertex2f(-0.605f, 0.18f);
    glEnd();
//========================================================Standing point beside the road
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.55f, 0.18f);
    glVertex2f(0.68f, 0.25f);
    glVertex2f(0.59f, 0.25f);
    glVertex2f(0.43f, 0.18f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0.0f,0.0f,0.0f);
    glVertex2f(0.66f, 0.18f);
    glVertex2f(0.66f, 0.248f);
    glVertex2f(0.63f, 0.248f);
    glVertex2f(0.63f, 0.18f);
    glEnd();
    glPointSize(10.0);
	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(216,216, 216);
	glVertex2f(0.667f, 0.247f);
	glVertex2f(0.667f, 0.277f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(216,216, 216);
	glVertex2f(0.54f, 0.18f);
	glVertex2f(0.54f, 0.23f);
glEnd();
    glPointSize(10.0);
	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(216,216, 216);
	glVertex2f(0.59f, 0.247f);
	glVertex2f(0.59f, 0.277f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(216,216, 216);
	glVertex2f(0.45f, 0.18f);
	glVertex2f(0.45f, 0.23f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(216,216, 216);
	glVertex2f(0.667f, 0.277f);
	glVertex2f(0.54f, 0.23f);
glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(216,216, 216);
	glVertex2f(0.59f, 0.277f);
	glVertex2f(0.45f, 0.23f);
glEnd();
    glPointSize(10.0);
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(216,216, 216);
	glVertex2f(0.667f, 0.277f);
	glVertex2f(0.59f, 0.277f);
glEnd();
//............................Zebra crossing
    glPointSize(10.0);
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(255,255, 255);
	glVertex2f(-0.68f, 0.15f);
	glVertex2f(-0.62f, 0.15f);
glEnd();
    glPointSize(10.0);
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(255,255, 255);
	glVertex2f(-0.68f, 0.12f);
	glVertex2f(-0.62f, 0.12f);
glEnd();
    glPointSize(10.0);
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(255,255, 255);
	glVertex2f(-0.68f, 0.09f);
	glVertex2f(-0.62f, 0.09f);
glEnd();
    glPointSize(10.0);
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(255,255, 255);
	glVertex2f(-0.68f, 0.06f);
	glVertex2f(-0.62f, 0.06f);
glEnd();
    glPointSize(10.0);
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(255,255, 255);
	glVertex2f(-0.68f, 0.03f);
	glVertex2f(-0.62f, 0.03f);
glEnd();
    glPointSize(10.0);
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(255,255, 255);
	glVertex2f(-0.68f, 0.0f);
	glVertex2f(-0.62f, 0.0f);
glEnd();
    glPointSize(10.0);
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(255,255, 255);
	glVertex2f(-0.68f, -0.03f);
	glVertex2f(-0.62f, -0.03f);
glEnd();
    glPointSize(10.0);
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(255,255, 255);
	glVertex2f(-0.68f, -0.06f);
	glVertex2f(-0.62f, -0.06f);
glEnd();
    glPointSize(10.0);
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(255,255, 255);
	glVertex2f(-0.68f, -0.09f);
	glVertex2f(-0.62f, -0.09f);
glEnd();

//======================================================================CARGO-1
glPushMatrix();
    glTranslatef(position_CARGO1,0.0f,0.0f);
    //glPushMatrix();
    //glTranslatef(-0.45f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(178,189,217);
    glVertex2f(0.87f, 0.1f);
    glVertex2f(0.87f, 0.25f);
    glVertex2f(0.7f, 0.25f);
    glVertex2f(0.7f, 0.1f);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(0.69f, 0.1f);
    glVertex2f(0.69f, 0.21f);
    glVertex2f(0.665f, 0.21f);
    glVertex2f(0.64f, 0.14f);
    glVertex2f(0.64f, 0.1f);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(0.685f, 0.15f);
    glVertex2f(0.685f, 0.205f);
    glVertex2f(0.67f, 0.205f);
    glVertex2f(0.65f, 0.15f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(0.87f, 0.1f);
    glVertex2f(0.87f, 0.125f);
    glVertex2f(0.865f, 0.125f);
    glVertex2f(0.865f, 0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(250,237,239);
    glVertex2f(0.653f, 0.13f);
    glVertex2f(0.643f, 0.14f);
    glVertex2f(0.641f, 0.14f);
    glVertex2f(0.641f, 0.13f);
    glEnd();

    glColor3ub(0, 0, 0);
    circle(0.665,0.1,0.017);
    glColor3ub(255, 255, 255);
    circle(0.665,0.1,0.01);

        glColor3ub(0, 0, 0);
    circle(0.725,0.1,0.017);
    glColor3ub(255, 255, 255);
    circle(0.725,0.1,0.01);


        glColor3ub(0, 0, 0);
    circle(0.845,0.1,0.017);
    glColor3ub(255, 255, 255);
    circle(0.845,0.1,0.01);

        glColor3ub(0, 0, 0);
    circle(0.81,0.1,0.017);
    glColor3ub(255, 255, 255);
    circle(0.81,0.1,0.01);
    glPopMatrix();
//======================================================Cargo-2
glPushMatrix();
    glTranslatef(position_CARGO2,0.0f,0.0f);
    //glPushMatrix();
    //glTranslatef(-0.45f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(178,34,34);
    glVertex2f(0.47f, 0.1f);
    glVertex2f(0.47f, 0.25f);
    glVertex2f(0.3f, 0.25f);
    glVertex2f(0.3f, 0.1f);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(240,147,49);
    glVertex2f(0.29f, 0.1f);
    glVertex2f(0.29f, 0.21f);
    glVertex2f(0.265f, 0.21f);
    glVertex2f(0.24f, 0.14f);
    glVertex2f(0.24f, 0.1f);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(0.285f, 0.15f);
    glVertex2f(0.285f, 0.205f);
    glVertex2f(0.27f, 0.205f);
    glVertex2f(0.25f, 0.15f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(0.47f, 0.1f);
    glVertex2f(0.47f, 0.125f);
    glVertex2f(0.465f, 0.125f);
    glVertex2f(0.465f, 0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(250,237,239);
    glVertex2f(0.253f, 0.13f);
    glVertex2f(0.243f, 0.14f);
    glVertex2f(0.241f, 0.14f);
    glVertex2f(0.241f, 0.13f);
    glEnd();

    glColor3ub(0, 0, 0);
    circle(0.265,0.1,0.017);
    glColor3ub(255, 255, 255);
    circle(0.265,0.1,0.01);

        glColor3ub(0, 0, 0);
    circle(0.325,0.1,0.017);
    glColor3ub(255, 255, 255);
    circle(0.325,0.1,0.01);


        glColor3ub(0, 0, 0);
    circle(0.445,0.1,0.017);
    glColor3ub(255, 255, 255);
    circle(0.445,0.1,0.01);

        glColor3ub(0, 0, 0);
    circle(0.41,0.1,0.017);
    glColor3ub(255, 255, 255);
    circle(0.41,0.1,0.01);
    glPopMatrix();
//======================================================Bus
glPushMatrix();
glTranslatef(position_BUS,0.0f, 0.0f);
    //glPushMatrix();
    //glTranslatef(-0.45f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(227,166,48);
    glVertex2f(0.07f, 0.08f);
    glVertex2f(0.07f, 0.26f);
    glVertex2f(-0.14f, 0.26f);
    glVertex2f(-0.17f, 0.15f);
    glVertex2f(-0.17f, 0.08f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3ub(61,66,66);
    glVertex2f(0.07f, 0.08f);
    glVertex2f(0.07f, 0.12f);
    glVertex2f(-0.17f, 0.12f);
    glVertex2f(-0.17f, 0.08f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3ub(61,66,66);
    glVertex2f(-0.1f, 0.18f);
    glVertex2f(-0.1f, 0.245f);
    glVertex2f(-0.138f, 0.245f);
    glVertex2f(-0.153f, 0.18f);
    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(61,66,66);
    glVertex2f(0.06f, 0.18f);
    glVertex2f(0.06f, 0.245f);
    glVertex2f(-0.09f, 0.245f);
    glVertex2f(-0.09f, 0.18f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(-0.103f, 0.187f);
    glVertex2f(-0.103f, 0.238f);
    glVertex2f(-0.134f, 0.238f);
    glVertex2f(-0.147f, 0.187f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(-0.05f, 0.187f);
    glVertex2f(-0.05f, 0.238f);
    glVertex2f(-0.08f, 0.238f);
    glVertex2f(-0.08f, 0.187f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(-0.01795f, 0.187f);
    glVertex2f(-0.01795f, 0.238f);
    glVertex2f(-0.048f, 0.238f);
    glVertex2f(-0.048f, 0.187f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(0.016f, 0.187f);
    glVertex2f(0.016f, 0.238f);
    glVertex2f(-0.016f, 0.238f);
    glVertex2f(-0.016f, 0.187f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(0.018f, 0.187f);
    glVertex2f(0.018f, 0.238f);
    glVertex2f(0.055f, 0.238f);
    glVertex2f(0.055f, 0.187f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(-0.16f, 0.12f);
    glVertex2f(-0.16f, 0.15f);
    glVertex2f(-0.17f, 0.155f);
    glVertex2f(-0.17f, 0.12f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3f(01.0f,0.0f,0.0f);
    glVertex2f(0.07f, 0.12f);
    glVertex2f(0.07f, 0.15f);
    glVertex2f(0.06f, 0.15f);
    glVertex2f(0.06f, 0.12f);
    glEnd();

    glColor3ub(0, 0, 0);
    circle(-0.12,0.085,0.02);
    glColor3ub(255, 255, 255);
    circle(-0.12,0.085,0.013);
    glColor3ub(0, 0, 0);
    circle(0.03,0.085,0.02);
    glColor3ub(255, 255, 255);
    circle(0.03,0.085,0.013);
glPopMatrix();

//======================================Car1
glPushMatrix();
    glTranslatef(-position_CAR, 0.0f, 0.0f);
    //glPushMatrix();
    //glTranslatef(-0.45f,0.0f,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(33,79,198);
    glVertex2f(-0.36f, -0.07f);
    glVertex2f(-0.36f, -0.02f);
    glVertex2f(-0.48f, -0.02f);
    glVertex2f(-0.48f, -0.07f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.39f,-0.02f);
    glVertex2f(-0.41f, 0.02f);
    glVertex2f(-0.45f,0.02f);
    glVertex2f(-0.47f,-0.02f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(-0.395f, -0.016f);
    glVertex2f(-0.41f, 0.017f);
    glVertex2f(-0.425f, 0.017f);
    glVertex2f(-0.425, -0.016f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(-0.428f, -0.016f);
    glVertex2f(-0.428, 0.017f);
    glVertex2f(-0.44f, 0.017f);
    glVertex2f(-0.46, -0.016f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3ub(255,255,224);
    glVertex2f(-0.36f, -0.04f);
    glVertex2f(-0.36f, -0.02f);
    glVertex2f(-0.368f, -0.02f);
    glVertex2f(-0.368f, -0.04f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237,41,57);
    glVertex2f(-0.473f, -0.04f);
    glVertex2f(-0.473f, -0.02f);
    glVertex2f(-0.48f, -0.02f);
    glVertex2f(-0.48f, -0.04f);
    glEnd();

    glColor3ub(0, 0, 0);
    circle(-0.39f,-0.07f,0.018);
    glColor3ub(255, 255, 255);
    circle(-0.39f,-0.07f,0.011);
    glColor3ub(0, 0, 0);
    circle(-0.45f,-0.07f,0.018);
    glColor3ub(255, 255, 255);
    circle(-0.45f,-0.07f,0.011);
    glPopMatrix();
//======================================================Jeep car
glPushMatrix();
    glTranslatef(-position_JEEPCAR,0.0f,0.0f);
    //glPushMatrix();
    //glTranslatef(-0.45f,0.0f,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(227,255,0);
    glVertex2f(-0.01f, -0.07f);
    glVertex2f(-0.01f, -0.02f);
    glVertex2f(-0.145f, -0.02f);
    glVertex2f(-0.145f, -0.07f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.05f,-0.02f);
    glVertex2f(-0.06f, 0.025f);
    glVertex2f(-0.145f,0.025f);
    glVertex2f(-0.145f,-0.02f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(-0.054f, -0.016f);
    glVertex2f(-0.063f, 0.02f);
    glVertex2f(-0.092f, 0.02f);
    glVertex2f(-0.092f, -0.016f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(-0.095f, -0.016f);
    glVertex2f(-0.095, 0.02f);
    glVertex2f(-0.14f, 0.02f);
    glVertex2f(-0.14, -0.016f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,224);
    glVertex2f(-0.01f, -0.04f);
    glVertex2f(-0.01f, -0.02f);
    glVertex2f(-0.02f, -0.02f);
    glVertex2f(-0.02f, -0.04f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237,41,57);
    glVertex2f(-0.142f, -0.05f);
    glVertex2f(-0.142f, -0.02f);
    glVertex2f(-0.145f, -0.02f);
    glVertex2f(-0.145f, -0.05f);
    glEnd();

    glColor3ub(0, 0, 0);
    circle(-0.12f,-0.07f,0.018);
    glColor3ub(255, 255, 255);
    circle(-0.12f,-0.07f,0.011);
    glColor3ub(0, 0, 0);
    circle(-0.05f,-0.07f,0.018);
    glColor3ub(255, 255, 255);
    circle(-0.05f,-0.07f,0.011);
    glPopMatrix();

//====================================================CARGO-3
glPushMatrix();
    glTranslatef(-position_CARGO3, 0.0f,0.0f);
    //glPushMatrix();
    //glTranslatef(-0.45f,0.0f,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(227,255,0);
    glVertex2f(0.5f, -0.07f);
    glVertex2f(0.5f, 0.1f);
    glVertex2f(0.3f, 0.1f);
    glVertex2f(0.3f, -0.07f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,177,1);
    glVertex2f(0.575f,-0.07f);
    glVertex2f(0.575f, -0.01f);
    glVertex2f(0.54f, 0.06f);
    glVertex2f(0.508f,0.06f);
    glVertex2f(0.508f,-0.07f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(0.575f, -0.04f);
    glVertex2f(0.575f, -0.01f);
    glVertex2f(0.568f, -0.01f);
    glVertex2f(0.568f, -0.04f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3f(0.8f,1.0f,1.0f);
    glVertex2f(0.565f, 0.0f);
    glVertex2f(0.5373f, 0.055f);
    glVertex2f(0.513f,0.055f);
    glVertex2f(0.513f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237,41,57);
    glVertex2f(0.305f, -0.07f);
    glVertex2f(0.305f, -0.03f);
    glVertex2f(0.3f, -0.03f);
    glVertex2f(0.3f, -0.07f);
    glEnd();

    glColor3ub(0, 0, 0);
    circle(0.543f,-0.07f,0.018);
    glColor3ub(255, 255, 255);
    circle(0.543f,-0.07f,0.011);
    glColor3ub(0, 0, 0);
    circle(0.47f,-0.07f,0.018);
    glColor3ub(255, 255, 255);
    circle(0.47f,-0.07f,0.011);
    glColor3ub(0, 0, 0);
    circle(0.368f,-0.07f,0.018);
    glColor3ub(255, 255, 255);
    circle(0.368f,-0.07f,0.011);
    glColor3ub(0, 0, 0);
    circle(0.33f,-0.07f,0.018);
    glColor3ub(255, 255, 255);
    circle(0.33f,-0.07f,0.011);
    glPopMatrix();
//============================Golf field
    glBegin(GL_TRIANGLES);
    glColor3ub(194,178,128);
    glVertex2f(0.75f, -0.7f);
    glVertex2f(0.72f, -0.6f);
    glVertex2f(0.45f, -0.62f);
glEnd();
    glPointSize(10.0);
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(0.7f,-0.65f);
	glVertex2f(0.7f, -0.5f);
glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(0.72f, -0.54f);
    glVertex2f(0.70f, -0.50f);
    glVertex2f(0.70f, -0.55f);
glEnd();
glColor3ub(0, 0, 0);
circle(0.695,-0.649,0.006);
//==================================================Golf car
glPushMatrix();
    glTranslatef(-position_GOLFCAR,0.0f,0.0f);
    //glPushMatrix();
    //glTranslatef(-0.45f,0.0f,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(139,0,0);
    glVertex2f(0.15f, -0.36f);
    glVertex2f(0.15f, -0.3f);
    glVertex2f(0.015f, -0.3f);
    glVertex2f(0.015f, -0.36f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(139,0,0);
    glVertex2f(0.15f,-0.3f);
    glVertex2f(0.13f, -0.25f);
    glVertex2f(0.115f,-0.25f);
    glVertex2f(0.11f,-0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(139,0,0);
    glVertex2f(0.06f,-0.3f);
    glVertex2f(0.06f, -0.254f);
    glVertex2f(0.03f,-0.254f);
    glVertex2f(0.015f,-0.3f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3ub(51,0,102);
    glVertex2f(0.054f, -0.3f);
    glVertex2f(0.054f, -0.24f);
    glVertex2f(0.065f, -0.24f);
    glVertex2f(0.065f, -0.3f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3ub(51,0,102);
    glVertex2f(0.079f, -0.3f);
    glVertex2f(0.079f, -0.275f);
    glVertex2f(0.065f, -0.275f);
    glVertex2f(0.065f, -0.3f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3ub(43,84,126);
    glVertex2f(0.079f, -0.275f);
    glVertex2f(0.079f, -0.225f);
    glVertex2f(0.065f, -0.225f);
    glVertex2f(0.065f, -0.275f);
    glEnd();
        glBegin(GL_QUADS);
    glColor3ub(144,238,144);
    glVertex2f(0.085f, -0.3f);
    glVertex2f(0.085f, -0.27f);
    glVertex2f(0.079f, -0.27f);
    glVertex2f(0.079f, -0.3f);
    glEnd();

    glColor3ub(190, 142, 119);
    circle(0.072f,-0.22f,0.011);

    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(0.063f, -0.21f);
	glVertex2f(0.0845f, -0.21f);
glEnd();

    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(196, 202, 206);
	glVertex2f(0.115f,-0.28f);
	glVertex2f(0.091f, -0.25f);
glEnd();
    glColor3ub(0, 0, 0);
    circle(0.091,-0.25f,0.01);
    glColor3ub(196, 202, 206);
    circle(0.091,-0.25f,0.005);
    //wheels
    glColor3ub(0, 0, 0);
    circle(0.045f,-0.36f,0.017);
    glColor3ub(255, 255, 255);
    circle(0.045f,-0.36f,0.01);
        glColor3ub(0, 0, 0);
    circle(0.12f,-0.36f,0.017);
    glColor3ub(255, 255, 255);
    circle(0.12f,-0.36f,0.01);
    glPopMatrix();
//================================================================BUILDING 1
      glBegin(GL_QUADS);
      glColor3ub(210, 196, 185);
      glVertex2f(1.0f, -1.0f);
      glVertex2f( 1.0f, -0.4f);
      glVertex2f( 0.8f,  -0.4f);
      glVertex2f(0.8f,  -1.0f);
      glEnd();
      glBegin(GL_QUADS);
      glColor3ub(210, 196, 185);
      glVertex2f(1.0f, -0.3f);
      glVertex2f( 0.85f, -0.3f);
      glVertex2f( 0.8f,  -0.4f);
      glVertex2f(1.0f,  -0.4f);
      glEnd();
      glBegin(GL_QUADS);
      glColor3ub(168, 202, 226);
      glVertex2f(1.0f, -0.23f);
      glVertex2f( 0.9f, -0.23f);
      glVertex2f( 0.86f,  -0.3f);
      glVertex2f(1.0f,  -0.3f);
      glEnd();
   	glPointSize(8.0);
	glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(88, 63, 47);
	glVertex2f(1.0f, -0.4f);
	glVertex2f(0.8f, -0.4f);
	glEnd();
    glPointSize(8.0);
	glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(88, 63, 47);
	glVertex2f(0.85f, -0.3f);
	glVertex2f(0.8f, -0.4f);
	glEnd();
	glPointSize(8.0);
	glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(88, 63, 47);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(0.85f, -0.3f);
	glEnd();
	glPointSize(8.0);
	glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(88, 63, 47);
	glVertex2f(0.8f, -1.0f);
	glVertex2f(0.8f, -0.4f);
	glEnd();
//================================================================BUILDING 2
	glPointSize(8.0);
	glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(88, 63, 47);
	glVertex2f(0.86f, -0.3f);
	glVertex2f(0.9f, -0.23f);
	glEnd();
    glPointSize(8.0);
	glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(88, 63, 47);
	glVertex2f(1.0f, -0.23f);
	glVertex2f(0.9f, -0.23f);
	glEnd();
//================================================================Mirrors in BUILDING 1
      glBegin(GL_QUADS);
      glColor3ub(212,225,236);
      glVertex2f(0.98f, -0.97f);
      glVertex2f( 0.98f, -0.87f);
      glVertex2f( 0.92f,  -0.87f);
      glVertex2f(0.92f,  -0.97f);
      glEnd();
      glBegin(GL_QUADS);
      glColor3ub(212,225,236);
      glVertex2f(0.88f, -0.97f);
      glVertex2f( 0.88f, -0.87f);
      glVertex2f( 0.82f,  -0.87f);
      glVertex2f(0.82f,  -0.97f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(212,225,236);
      glVertex2f(0.98f, -0.79f);
      glVertex2f( 0.98f, -0.69f);
      glVertex2f( 0.92f,  -0.69f);
      glVertex2f(0.92f,  -0.79f);
      glEnd();
      glBegin(GL_QUADS);
      glColor3ub(212,225,236);
      glVertex2f(0.88f, -0.79f);
      glVertex2f( 0.88f, -0.69f);
      glVertex2f( 0.82f,  -0.69f);
      glVertex2f(0.82f,  -0.79f);
      glEnd();
      glBegin(GL_QUADS);
      glColor3ub(212,225,236);
      glVertex2f(0.98f, -0.61f);
      glVertex2f( 0.98f, -0.51f);
      glVertex2f( 0.92f,  -0.51f);
      glVertex2f(0.92f,  -0.61f);
      glEnd();
      glBegin(GL_QUADS);
      glColor3ub(212,225,236);
      glVertex2f(0.88f, -0.61f);
      glVertex2f( 0.88f, -0.51f);
      glVertex2f( 0.82f,  -0.51f);
      glVertex2f(0.82f,  -0.61f);
      glEnd();
//===========================================AMUSEMENT PARK PORTION============================================

//circle in football field
glColor3ub(255, 255, 255);//107, 162, 69
circle(-0.7,-0.29,0.07);
glColor3ub(107, 162, 69);//107, 162, 69
circle(-0.7,-0.29,0.067);
glColor3ub(255, 255, 255);//107, 162, 69
circle(-0.7,-0.29,0.008);
//==========================================GALLERY
    glBegin(GL_QUADS);
    glColor3ub(188,74,60);
    glVertex2f(-0.7f, -1.0f);
    glVertex2f(-0.7f, -0.9f);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-1.0f, -1.0f);
glEnd();
    glBegin(GL_QUADS);
    glColor3ub(188,74,60);
    glVertex2f(-0.8f, -0.9f);
    glVertex2f(-0.8f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glVertex2f(-1.0f, -0.9f);
glEnd();
    glBegin(GL_QUADS);
    glColor3ub(188,74,60);
    glVertex2f(-0.9f, -0.85f);
    glVertex2f(-0.9f, -0.8f);
    glVertex2f(-1.0f, -0.8f);
    glVertex2f(-1.0f, -0.85f);
glEnd();
    glBegin(GL_QUADS);
    glColor3ub(188,74,60);
    glVertex2f(-0.95f, -0.8f);
    glVertex2f(-0.95f, -0.75f);
    glVertex2f(-1.0f, -0.75f);
    glVertex2f(-1.0f, -0.8f);
glEnd();
//seats
    glBegin(GL_QUADS);
    glColor3ub(23,81,126);
    glVertex2f(-0.77f, -0.87f);
    glVertex2f(-0.77f, -0.90f);
    glVertex2f(-0.8f, -0.90f);
    glVertex2f(-0.8f, -0.87f);
glEnd();
    glBegin(GL_QUADS);
    glColor3ub(23,81,126);
    glVertex2f(-0.79f, -0.83f);
    glVertex2f(-0.79f, -0.87f);
    glVertex2f(-0.8f, -0.87f);
    glVertex2f(-0.8f, -0.83f);
glEnd();
    glBegin(GL_QUADS);
    glColor3ub(23,81,126);
    glVertex2f(-0.87f, -0.85f);
    glVertex2f(-0.87f, -0.82f);
    glVertex2f(-0.9f, -0.82f);
    glVertex2f(-0.9f, -0.85f);
glEnd();
    glBegin(GL_QUADS);
    glColor3ub(23,81,126);
    glVertex2f(-0.89f, -0.82f);
    glVertex2f(-0.89f, -0.78f);
    glVertex2f(-0.9f, -0.78f);
    glVertex2f(-0.9f, -0.82f);
glEnd();
    glBegin(GL_QUADS);
    glColor3ub(23,81,126);
    glVertex2f(-0.92f, -0.8f);
    glVertex2f(-0.92f, -0.77f);
    glVertex2f(-0.95f, -0.77f);
    glVertex2f(-0.95f, -0.8f);
glEnd();
    glBegin(GL_QUADS);
    glColor3ub(23,81,126);
    glVertex2f(-0.94f, -0.77f);
    glVertex2f(-0.94f, -0.73f);
    glVertex2f(-0.95f, -0.73f);
    glVertex2f(-0.95f, -0.77f);
glEnd();
    glBegin(GL_QUADS);
    glColor3ub(23,81,126);
    glVertex2f(-0.975f, -0.75f);
    glVertex2f(-0.975f, -0.72f);
    glVertex2f(-1.0f, -0.72f);
    glVertex2f(-1.0f, -0.75f);
glEnd();
    glBegin(GL_QUADS);
    glColor3ub(23,81,126);
    glVertex2f(-0.993f, -0.72f);
    glVertex2f(-0.993f, -0.68f);
    glVertex2f(-1.0f, -0.68f);
    glVertex2f(-1.0f, -0.72f);
glEnd();
//ROOF POLL
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.71f, -0.9f);
    glVertex2f(-0.71f, -0.88f);
    glVertex2f(-0.75f, -0.88f);
    glVertex2f(-0.75f, -0.9f);

glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(-0.71f, -0.88f);
    glVertex2f(-0.73f, -0.86f);
    glVertex2f(-0.75f, -0.88f);

glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.725f, -0.87f);
    glVertex2f(-0.725f, -0.45f);
    glVertex2f(-0.737f, -0.45f);
    glVertex2f(-0.737f, -0.87f);

glEnd();
    glBegin(GL_QUADS);
    glColor3ub(157,96,85);
    glVertex2f(-0.7f, -0.45f);
    glVertex2f(-0.78f, -0.3f);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(-1.0f, -0.45f);

glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186,67,33);
    glVertex2f(-0.81f, -0.46f);
    glVertex2f(-0.78f, -0.3f);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(-1.0f, -0.46f);

glEnd();
//2nd poll
   glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.82f, -0.82f);
    glVertex2f(-0.82f, -0.46f);
    glVertex2f(-0.833f, -0.46f);
    glVertex2f(-0.833f, -0.82f);

glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(-0.807f, -0.83f);
    glVertex2f(-0.825f, -0.8f);
    glVertex2f(-0.8452f, -0.83f);

glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.807f, -0.85f);
    glVertex2f(-0.807f, -0.83f);
    glVertex2f(-0.8452f, -0.83f);
    glVertex2f(-0.8452f, -0.85f);

glEnd();
//goal bar 1
    glPointSize(10.0);
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(255,255, 255);
	glVertex2f(-0.99f,-0.2f);
	glVertex2f(-0.99f, -0.05f);
	glVertex2f(-0.83f,-0.18f);
	glVertex2f(-0.83f, -0.03f);
	glVertex2f(-0.99f,-0.05f);
	glVertex2f(-0.83f, -0.03f);
//goal bar 2
	glVertex2f(-0.2f,-0.5f);
	glVertex2f(-0.2f, -0.3f);
	glVertex2f(-0.35f,-0.55f);
	glVertex2f(-0.35f, -0.35f);
	glVertex2f(-0.2f,-0.3f);
	glVertex2f(-0.35f, -0.35f);
glEnd();
   glBegin(GL_QUADS);
    glColor3ub(157,96,85);
    glVertex2f(0.3f, -0.95f);
    glVertex2f(0.27f, -0.7f);
    glVertex2f(0.24f, -0.7f);
    glVertex2f(0.25f, -0.95f);

glEnd();
    glPointSize(10.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(155,135, 12);
	glVertex2f(0.24f,-0.7f);
	glVertex2f(0.24f, -0.85f);
glEnd();

    glBegin(GL_QUADS);
    glColor3ub(157,96,85);
    glVertex2f(0.1f, -0.82f);
    glVertex2f(0.07f, -0.8f);
    glVertex2f(-0.1f, -0.8f);
    glVertex2f(-0.05f, -0.82f);
    glEnd();
    glColor3ub(0,0,0);
    circle(0.02,-0.82,0.008);
    glPointSize(10.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(0.02f,-0.82f);
	glVertex2f(0.01f, -0.85f);
glEnd();
    glPointSize(10.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(0,0, 0);
	glVertex2f(0.02f,-0.82f);
	glVertex2f(0.03f, -0.85f);
glEnd();
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,position5, 0.0f);
glColor3ub(33,171,205);
    circle(-0.2,-0.82,0.03);
    glPopMatrix();
glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {
switch (key) {
case 'a':
    speed5 = 0.0f;
    break;
case 'w':
    speed5 = 0.1f;
    break;
glutPostRedisplay();
}}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed5 = 0.1f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed5 =- 0.1f;
			}
	glutPostRedisplay();
	}




int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Vehicular Movement");
   glutDisplayFunc(display);
   glutTimerFunc(100, update1, 0);
   glutTimerFunc(100, update_CLOUD1, 0);
   glutTimerFunc(100, update_CLOUD2, 0);
   glutTimerFunc(100, update_CLOUD3, 0);
   glutTimerFunc(100, update_CLOUD4, 0);
    glutTimerFunc(100, update_BOAT1, 0);
    glutTimerFunc(100, update_BOAT2, 0);
    glutTimerFunc(100, update_BOAT3, 0);
    glutTimerFunc(100, update_BOAT4, 0);
    glutTimerFunc(100, update_CAR, 0);
    glutTimerFunc(100, update_CARGO1, 0);
    glutTimerFunc(100, update_CARGO2, 0);
    glutTimerFunc(100, update_CARGO3, 0);
    glutTimerFunc(100, update_BUS, 0);
    glutTimerFunc(100, update_JEEPCAR, 0);
    glutTimerFunc(100, update_GOLFCAR, 0);
    glutTimerFunc(100, update5, 0);
    glutTimerFunc(100, update3, 0);
//   glutTimerFunc(100, updatevalue, 0);
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutMainLoop();
   return 0;
}


