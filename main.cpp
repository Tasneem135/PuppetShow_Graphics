
#include <windows.h>
#include <GL/glut.h>
#include<math.h>
#include <iostream>
#include <MMSystem.h>
GLfloat i = -0.0f;
GLfloat j = -0.0f;
GLfloat i1 = -0.0f;
GLfloat j12= -0.0f;
GLfloat i2 =0.0f;
GLfloat i5 = -0.0f;
GLfloat j5= -0.0f;
GLfloat position = 0.0f;
GLfloat position2 = 0.0f;
GLfloat speed = 0.15f;
GLfloat position3 = 0.0f;
GLfloat position4 = 0.0f;
GLfloat speed1 = 0.15f;
GLfloat speed2 =0.15f;

//Girl animation

void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
    //glClearColor(.0f, 0.5f, 0.9f, 0.5f);
}

void Idle()
{
    glutPostRedisplay();///// marks the current window as needing to be redisplayed
}
void sun(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy){

glBegin(GL_TRIANGLE_FAN);
glVertex2f(cx,cy);

for(int k=0;k<360;k++){
    float angle = 2.0f* 3.1415f*k/100;
    float x = rx * cosf(angle);
    float y = ry * sinf(angle);
    glVertex2f((x+cx),(y+cy));
}
glEnd();


}


void bird(){
     glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(i5,j5, 0.0f);
glBegin(GL_TRIANGLES);// bird1 part 1
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.38,0.48);
    glVertex2f(-0.39,0.51);
    glVertex2f(-0.4,0.5);
    glEnd();
    glBegin(GL_TRIANGLES);// bird1 part2
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.39,0.51);
    glVertex2f(-0.42,0.52);
    glVertex2f(-0.41,0.49);
    glEnd();

    glBegin(GL_TRIANGLES);//bird1 part3
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.43,0.5);
    glVertex2f(-0.42,0.54);
    glVertex2f(-0.41,0.49);
    glEnd();
    glBegin(GL_TRIANGLES);// bird1 part4
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.42,0.54);
    glVertex2f(-0.43,0.5);
    glVertex2f(-0.44,0.55);
    glEnd();
    glBegin(GL_TRIANGLES);//bird1 part5
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.41,0.49);
    glVertex2f(-0.43,0.5);
    glVertex2f(-0.43,0.48);
    glEnd();
    glBegin(GL_TRIANGLES);//bird1 part6
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.43,0.46);
    glVertex2f(-0.43,0.5);
    glVertex2f(-0.46,0.46);
    glEnd();

    glBegin(GL_TRIANGLES);//bird2 part1
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.51,0.58);
    glVertex2f(-0.52,0.61);
    glVertex2f(-0.53,0.6);
    glEnd();
    glBegin(GL_TRIANGLES);//bird2 part2
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.52,0.61);
    glVertex2f(-0.54,0.59);
    glVertex2f(-0.55,0.62);
    glEnd();

    glBegin(GL_TRIANGLES);//bird2 part3
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.57,0.6);
    glVertex2f(-0.54,0.59);
    glVertex2f(-0.55,0.63);
    glEnd();
    glBegin(GL_TRIANGLES);//bird2 part4
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.55,0.63);
    glVertex2f(-0.56,0.6);
    glVertex2f(-0.58,0.64);
    glEnd();

    glBegin(GL_TRIANGLES);//bird2 part5
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.54,0.59);
    glVertex2f(-0.57,0.6);
    glVertex2f(-0.57,0.58);
    glEnd();

    glBegin(GL_TRIANGLES);//bird2 part6
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.57,0.56);
    glVertex2f(-0.57,0.6);
    glVertex2f(-0.6,0.57);
    glEnd();

    glBegin(GL_TRIANGLES);//bird3 part1
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.21,0.58);
    glVertex2f(-0.22,0.61);
    glVertex2f(-0.23,0.6);

    glBegin(GL_TRIANGLES);//bird3 part2
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.22,0.61);
    glVertex2f(-0.24,0.59);
    glVertex2f(-0.25,0.62);
    glEnd();
    glBegin(GL_TRIANGLES);//bird3 part3
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.27,0.6);
    glVertex2f(-0.24,0.59);
    glVertex2f(-0.25,0.63);
    glEnd();
    glBegin(GL_TRIANGLES);//bird3 part4
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.25,0.63);
    glVertex2f(-0.26,0.6);
    glVertex2f(-0.28,0.64);
    glEnd();
    glBegin(GL_TRIANGLES);//bird3 part5
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.24,0.59);
    glVertex2f(-0.27,0.6);
    glVertex2f(-0.27,0.58);
    glEnd();
    glBegin(GL_TRIANGLES);//bird3 part6
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.27,0.56);
    glVertex2f(-0.27,0.6);
    glVertex2f(-0.3,0.57);
    glEnd();
    glBegin(GL_TRIANGLES);// bird4 part 1
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.38,0.59);
    glVertex2f(-0.39,0.62);
    glVertex2f(-0.4,0.61);
    glEnd();
    glBegin(GL_TRIANGLES);// bird4 part2
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.39,0.62);
    glVertex2f(-0.42,0.63);
    glVertex2f(-0.41,0.6);
    glEnd();

    glBegin(GL_TRIANGLES);//bird4 part3
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.43,0.61);
    glVertex2f(-0.42,0.65);
    glVertex2f(-0.41,0.6);
    glEnd();
    glBegin(GL_TRIANGLES);// bird4 part4
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.42,0.65);
    glVertex2f(-0.43,0.61);
    glVertex2f(-0.44,0.66);
    glEnd();
    glBegin(GL_TRIANGLES);//bird4 part5
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.41,0.6);
    glVertex2f(-0.43,0.61);
    glVertex2f(-0.43,0.59);
    glEnd();
    glBegin(GL_TRIANGLES);//bird4 part6
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.43,0.57);
    glVertex2f(-0.43,0.61);
    glVertex2f(-0.46,0.57);
    glEnd();
    glPopMatrix();
}

void Day(){
     glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_QUAD_STRIP);//background lower
    glColor3f(0.9f,0.7f,0.5f);
    glVertex2f(-0.9,-0.3);
    glVertex2f(-0.9,-0.49);
    glVertex2f(0.9,-0.3);
    glVertex2f(0.9,-0.49);
    glEnd();

    glBegin(GL_POLYGON);//background upper
    glColor3f(0.5f,1.0f,1.0f);
    glVertex2f(-0.9,1.0);
    glVertex2f(-0.9,-0.3);
    glVertex2f(0.9,-0.3);
    glVertex2f(0.9,1.0);
    glEnd();
glBegin(GL_TRIANGLES);//primid2
    glColor3f(1.0f,0.5f,0.0f);
    glVertex2f(0.1,0.2);
    glVertex2f(0.3,-0.3);
    glVertex2f(-0.1,-0.3);
    glEnd();

    glBegin(GL_TRIANGLES);//piramid1
    glColor3f(1.0f,0.5f,0.0f);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.7,-0.3);
    glVertex2f(-0.1,-0.3);
    glEnd();

    glBegin(GL_TRIANGLES);//piramid3
    glColor3f(1.0f,0.5f,0.0f);
    glVertex2f(0.5,0.1);
    glVertex2f(0.3,-0.3);
    glVertex2f(0.7,-0.3);
    glEnd();
    glBegin(GL_POLYGON);//tree 1
    glColor3f(0.9f,0.9f,0.7f);
    glVertex2f(-0.75,-0.05);
    glVertex2f(-0.78,-0.05);
    glVertex2f(-0.78,-0.3);
    glVertex2f(-0.75,-0.3);
    glEnd();

    glBegin(GL_TRIANGLES);//tree1 triangle1
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(-0.76,0.2);
    glVertex2f(-0.66,-0.05);
    glVertex2f(-0.87,-0.05);
    glEnd();
    glBegin(GL_TRIANGLES);//tree1 triangle2
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(-0.76,0.3);
    glVertex2f(-0.67,0.1);
    glVertex2f(-0.85,0.1);
    glEnd();
    glBegin(GL_TRIANGLES);//tree1 triangle3
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(-0.76,0.4);
    glVertex2f(-0.69,0.2);
    glVertex2f(-0.83,0.2);
    glEnd();

    glBegin(GL_POLYGON);//tree 2
    glColor3f(0.9f,0.9f,0.7f);
    glVertex2f(0.75,-0.05);
    glVertex2f(0.78,-0.05);
    glVertex2f(0.78,-0.3);
    glVertex2f(0.75,-0.3);
    glEnd();

    glBegin(GL_TRIANGLES);//tree2 triangle1
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(0.76,0.2);
    glVertex2f(0.66,-0.05);
    glVertex2f(0.87,-0.05);
    glEnd();
    glBegin(GL_TRIANGLES);//tree2 triangle2
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(0.76,0.3);
    glVertex2f(0.67,0.1);
    glVertex2f(0.85,0.1);
    glEnd();
    glBegin(GL_TRIANGLES);//tree2 triangle3
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(0.76,0.4);
    glVertex2f(0.69,0.2);
    glVertex2f(0.83,0.2);
    glEnd();



}
void puppet(){

    /////////Girl Puppet 1////////
 glPushMatrix();
glTranslatef(position,position2, 0.0f);

    glBegin(GL_TRIANGLE_FAN);//Puppet(G) hair
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.33,0.00);
    glVertex2f(0.34,0.05);
    glVertex2f(0.35,0.065);
    glVertex2f(0.36,0.075);
    glVertex2f(0.37,0.08);
    glVertex2f(0.4,0.085);
    glVertex2f(0.43,0.08);
    glVertex2f(0.44,0.075);
    glVertex2f(0.45,0.065);
    glVertex2f(0.46,0.05);
    glVertex2f(0.47,0.0);
    glEnd();
    glBegin(GL_POLYGON);//puppet(G) hair
    glColor3f(0.0f, 0.0f ,0.0f);
    glVertex2f(0.33, 0.0);
    glVertex2f(0.47, 0.0);
    glVertex2f(0.49, -0.1);
    glVertex2f(0.31, -0.1);
    glEnd();
    glBegin(GL_POLYGON);//puppet(G) neck
    glColor3f(0.9f, 0.6f ,0.5f);
    glVertex2f(0.37, -0.06);
    glVertex2f(0.37, -0.13);
    glVertex2f(0.43, -0.13);
    glVertex2f(0.43, -0.06);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);//Puppet face
    glColor3f(0.9f,0.7f,0.5f);
    glVertex2f(0.4,0.0);
    glVertex2f(0.45,0.0);
    glVertex2f(0.44,-0.05);
    glVertex2f(0.43,-0.065);
    glVertex2f(0.42,-0.075);
    glVertex2f(0.41,-0.08);
    glVertex2f(0.4,-0.085);
    glVertex2f(0.39,-0.08);
    glVertex2f(0.38,-0.075);
    glVertex2f(0.37,-0.065);
    glVertex2f(0.36,-0.05);
    glVertex2f(0.35,0.00);
    glVertex2f(0.36,0.05);
    glVertex2f(0.37,0.065);
    glVertex2f(0.38,0.075);
    glVertex2f(0.39,0.08);
    glVertex2f(0.4,0.085);
    glVertex2f(0.41,0.08);
    glVertex2f(0.42,0.075);
    glVertex2f(0.43,0.065);
    glVertex2f(0.44,0.05);
    glVertex2f(0.45,0.0);
    glEnd();
    //glBegin(GL_LINES);//puppet(G)
    //glColor3f(0.0f, 0.0f, 0.0f);

    //Line 4 mouth
    //glVertex2f(0.42f, -0.03f);
    //glVertex2f(0.40f, -0.045f);
    //glVertex2f(0.38f, -0.03f);
    //glVertex2f(0.40f, -0.045f);
    //glEnd();

    ///puppet eye
	//glColor3f(0.0f, 0.0f, 0.0f);
	//sun(0.007,0.005,0.42,0.02);
	//sun(0.007,0.005,0.38,0.02);

    glBegin(GL_TRIANGLES);//puppet (G)hat
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, 0.15f);
    glVertex2f(0.33f, 0.06f);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f(0.47f, 0.06f);
    glEnd();


    glBegin(GL_POLYGON);//puppet(G) dress upper part
    //glColor3f(0.7f, 0.6f ,1.0f);
    glColor3f(9.0f, 0.2f ,0.9f);
    glVertex2f(0.34, -0.12);
    glVertex2f(0.34, -0.26);
    glColor3f(1.0f, 1.0f ,1.0f);
    glVertex2f(0.46, -0.26);
    glVertex2f(0.46, -0.12);
    glEnd();
    glBegin(GL_POLYGON);//puppet(G) dress middle part
    glColor3f(0.2f, 0.0f ,0.2f);
    glVertex2f(0.34, -0.26);
    glVertex2f(0.34, -0.27);
    glVertex2f(0.46, -0.27);
    glVertex2f(0.46, -0.26);
    glEnd();
    glBegin(GL_POLYGON);//puppet(G) dress lower part
    glColor3f(1.0f, 0.0f ,1.0f);
    glVertex2f(0.34, -0.27);
    glColor3f(0.3f, 0.0f ,0.3f);
    glVertex2f(0.31, -0.49);
    glColor3f(0.5f, 0.5f ,0.5f);
    glVertex2f(0.49, -0.49);
    glColor3f(0.5f, 0.0f ,0.5f);
    glVertex2f(0.46, -0.27);
    glEnd();
    glBegin(GL_TRIANGLES);//puppet (G) dress design
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.32f, -0.47f);
    glVertex2f(0.33f, -0.46f);
    glVertex2f(0.34f, -0.47f);
    glVertex2f(0.32f, -0.47f);
    glVertex2f(0.33f, -0.48f);
    glVertex2f(0.34f, -0.47f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.35f, -0.35f);
    glVertex2f(0.36f, -0.34f);
    glVertex2f(0.37f, -0.35f);
    glVertex2f(0.35f, -0.35);
    glVertex2f(0.36f, -0.36f);
    glVertex2f(0.37f, -0.35f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.34f, -0.29f);
    glVertex2f(0.35f, -0.28f);
    glVertex2f(0.36f, -0.29f);
    glVertex2f(0.34f, -0.29);
    glVertex2f(0.35f, -0.30f);
    glVertex2f(0.36f, -0.29f);
    glVertex2f(0.37f, -0.45f);
    glVertex2f(0.38f, -0.44f);
    glVertex2f(0.39f, -0.45f);
    glVertex2f(0.37f, -0.45f);
    glVertex2f(0.38f, -0.46f);
    glVertex2f(0.39f, -0.45f);
    glVertex2f(0.40f, -0.41f);
    glVertex2f(0.41f, -0.40);
    glVertex2f(0.42f, -0.41f);
    glVertex2f(0.40f, -0.41f);
    glVertex2f(0.41, -0.42f);
    glVertex2f(0.42f, -0.41f);
    glVertex2f(0.41f, -0.35f);
    glVertex2f(0.42f, -0.34);
    glVertex2f(0.43f, -0.35f);
    glVertex2f(0.41f, -0.35f);
    glVertex2f(0.42f, -0.36f);
    glVertex2f(0.43f, -0.35f);
    glVertex2f(0.34f, -0.42f);
    glVertex2f(0.35f, -0.41f);
    glVertex2f(0.36f, -0.42f);
    glVertex2f(0.34f, -0.42f);
    glVertex2f(0.35f, -0.43f);
    glVertex2f(0.36f, -0.42f);
    glVertex2f(0.38f, -0.38f);
    glVertex2f(0.39f, -0.37f);
    glVertex2f(0.40f, -0.38f);
    glVertex2f(0.38f, -0.38f);
    glVertex2f(0.39f, -0.39f);
    glVertex2f(0.40f, -0.38f);
    glVertex2f(0.42f, -0.45f);
    glVertex2f(0.43f, -0.44f);
    glVertex2f(0.44f, -0.45f);
    glVertex2f(0.42f, -0.45f);
    glVertex2f(0.43f, -0.46f);
    glVertex2f(0.44f, -0.45f);
    glVertex2f(0.43f, -0.29f);
    glVertex2f(0.44f, -0.28f);
    glVertex2f(0.45f, -0.29f);
    glVertex2f(0.43f, -0.29f);
    glVertex2f(0.44f, -0.30f);
    glVertex2f(0.45f, -0.29f);
    glVertex2f(0.43f, -0.33f);
    glVertex2f(0.44f, -0.32f);
    glVertex2f(0.45f, -0.33f);
    glVertex2f(0.43f, -0.33f);
    glVertex2f(0.44f, -0.34f);
    glVertex2f(0.45f, -0.33f);
    glVertex2f(0.45f, -0.47f);
    glVertex2f(0.46f, -0.46f);
    glVertex2f(0.47f, -0.47f);
    glVertex2f(0.45f, -0.47f);
    glVertex2f(0.46f, -0.48f);
    glVertex2f(0.47f, -0.47f);
    glVertex2f(0.43f, -0.39f);
    glVertex2f(0.44f, -0.38f);
    glVertex2f(0.45f, -0.39f);
    glVertex2f(0.43f, -0.39f);
    glVertex2f(0.44f, -0.40f);
    glVertex2f(0.45f, -0.39f);
    glVertex2f(0.45f, -0.42f);
    glVertex2f(0.46f, -0.41f);
    glVertex2f(0.47f, -0.42f);
    glVertex2f(0.45f, -0.42f);
    glVertex2f(0.46f, -0.43f);
    glVertex2f(0.47f, -0.42f);
    glVertex2f(0.39f, -0.30f);
    glVertex2f(0.40f, -0.29f);
    glVertex2f(0.41f, -0.30f);
    glVertex2f(0.39f, -0.30f);
    glVertex2f(0.40f, -0.31f);
    glVertex2f(0.41f, -0.30f);
    glEnd();


    glBegin(GL_POLYGON);//puppet(G) right hand
    glColor3f(0.9f, 0.7f ,0.5f);
    glVertex2f(0.46, -0.12);
    glVertex2f(0.46, -0.14);
    glVertex2f(0.56, -0.14);
    glVertex2f(0.56, -0.12);
    glEnd();
    glBegin(GL_POLYGON);//puppet(G) right hand finger
    glColor3f(1.0f, 1.0f ,0.0f);
    glVertex2f(0.56, -0.14);
    glVertex2f(0.56, -0.09);
    glVertex2f(0.57, -0.09);
    glVertex2f(0.57, -0.14);
    glEnd();


    glBegin(GL_POLYGON);//puppet(G) left hand
    glColor3f(0.9f, 0.7f ,0.5f);
    glVertex2f(0.34, -0.12);
    glVertex2f(0.34, -0.14);
    glVertex2f(0.24, -0.14);
    glVertex2f(0.24, -0.12);
    glEnd();
    glBegin(GL_POLYGON);//puppet(G) left hand finger
    glColor3f(1.0f, 1.0f ,0.0f);
    glVertex2f(0.24, -0.14);
    glVertex2f(0.24, -0.09);
    glVertex2f(0.23, -0.09);
    glVertex2f(0.23, -0.14);
    glEnd();

    ////Hand Rope
    glBegin(GL_LINES);//Puppet hand rope right
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.565f, -0.09f);
    glVertex2f(0.565f, 1.0f);
    glEnd();
    glBegin(GL_LINES);//Puppet hand rope left
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.235f, -0.09f);
    glVertex2f(0.235f, 1.0f);
    glEnd();


 glPopMatrix();
    ///////Boy puppet////////
glPushMatrix();
glTranslatef(position3,position4, 0.0f);
    glBegin(GL_TRIANGLE_FAN);//Puppet(B) hair
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.33,0.00);
    glVertex2f(-0.34,0.05);
    glVertex2f(-0.35,0.065);
    glVertex2f(-0.36,0.075);
    glVertex2f(-0.37,0.08);
    glVertex2f(-0.4,0.085);
    glVertex2f(-0.43,0.08);
    glVertex2f(-0.44,0.075);
    glVertex2f(-0.45,0.065);
    glVertex2f(-0.46,0.05);
    glVertex2f(-0.47,0.0);
    glEnd();
    glBegin(GL_POLYGON);//puppet(B) hair
    glColor3f(0.0f, 0.0f ,0.0f);
    glVertex2f(-0.33, 0.0);
    glVertex2f(-0.47, 0.0);
    glVertex2f(-0.475, -0.03);
    glVertex2f(-0.325, -0.03);
    glEnd();
    glBegin(GL_POLYGON);//puppet(B) neck
    glColor3f(0.9f, 0.6f ,0.5f);
    glVertex2f(-0.37, -0.06);
    glVertex2f(-0.37, -0.13);
    glVertex2f(-0.43, -0.13);
    glVertex2f(-0.43, -0.06);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);//Puppet (B) face
    glColor3f(0.9f,0.7f,0.5f);
    glVertex2f(-0.4,0.0);
    glVertex2f(-0.45,0.0);
    glVertex2f(-0.44,-0.05);
    glVertex2f(-0.43,-0.065);
    glVertex2f(-0.42,-0.075);
    glVertex2f(-0.41,-0.08);
    glVertex2f(-0.4,-0.085);
    glVertex2f(-0.39,-0.08);
    glVertex2f(-0.38,-0.075);
    glVertex2f(-0.37,-0.065);
    glVertex2f(-0.36,-0.05);
    glVertex2f(-0.35,0.00);
    glVertex2f(-0.36,0.05);
    glVertex2f(-0.37,0.065);
    glVertex2f(-0.38,0.075);
    glVertex2f(-0.39,0.08);
    glVertex2f(-0.4,0.085);
    glVertex2f(-0.41,0.08);
    glVertex2f(-0.42,0.075);
    glVertex2f(-0.43,0.065);
    glVertex2f(-0.44,0.05);
    glVertex2f(-0.45,0.0);
    glEnd();
    //glBegin(GL_LINES);//Puppet (B)
    //glColor3f(0.0f, 0.0f, 0.0f);

    //Line 4 mouth
    //glVertex2f(-0.42f, -0.03f);
    //glVertex2f(-0.40f, -0.045f);
    //glVertex2f(-0.38f, -0.03f);
    //glVertex2f(-0.40f, -0.045f);
    //glEnd();

    //Puppet eye
	//glColor3f(0.0f, 0.0f, 0.0f);
	//sun(0.007,0.005,-0.42,0.02);
	//sun(0.007,0.005,-0.38,0.02);
    glBegin(GL_TRIANGLES);//puppet (B)hat
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.4f, 0.15f);
    glVertex2f(-0.33f, 0.06f);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f(-0.47f, 0.06f);
    glEnd();


    glBegin(GL_POLYGON);//puppet(B) dress upper part
    glColor3f(0.0f, 1.0f ,1.0f);
    glVertex2f(-0.34, -0.12);
    glVertex2f(-0.34, -0.29);
    glColor3f(0.5f, 1.0f ,1.0f);
    glVertex2f(-0.46, -0.29);
    glColor3f(0.0f, 0.7f ,0.6f);
    glVertex2f(-0.46, -0.12);
    glEnd();
    glBegin(GL_POLYGON);//puppet(B) dress design
    glColor3f(0.0f, 0.0f ,1.0f);
    glVertex2f(-0.36, -0.12);
    glVertex2f(-0.37, -0.12);
    glVertex2f(-0.37, -0.29);
    glVertex2f(-0.36, -0.29);
    glEnd();
    glBegin(GL_POLYGON);//puppet(B) dress design
    glColor3f(0.0f, 0.0f ,1.0f);
    glColor3f(0.0f, 0.0f ,1.0f);
    glVertex2f(-0.44, -0.12);
    glVertex2f(-0.43, -0.12);
    glVertex2f(-0.43, -0.29);
    glVertex2f(-0.44, -0.29);
    glEnd();
    glBegin(GL_POLYGON);//puppet(B) dress middle part
    glColor3f(0.0f, 0.0f ,0.0f);
    glVertex2f(-0.34, -0.29);
    glVertex2f(-0.34, -0.30);
    glVertex2f(-0.46, -0.30);
    glVertex2f(-0.46, -0.29);
    glEnd();
    glBegin(GL_POLYGON);//puppet(B) dress lower part
    glColor3f(0.0f, 0.0f ,1.0f);
    glVertex2f(-0.34, -0.30);
    glVertex2f(-0.34, -0.49);
    glVertex2f(-0.395, -0.49);
    glVertex2f(-0.395, -0.30);
    glEnd();
    glBegin(GL_POLYGON);//puppet(B) dress lower part
    glColor3f(0.0f, 0.0f ,1.1f);
    glVertex2f(-0.405, -0.30);
    glVertex2f(-0.405, -0.49);
    glVertex2f(-0.46, -0.49);
    glVertex2f(-0.46, -0.30);
    glEnd();


    glBegin(GL_POLYGON);//puppet(B) left hand
    glColor3f(0.9f, 0.7f ,0.5f);
    glVertex2f(-0.46, -0.12);
    glVertex2f(-0.46, -0.14);
    glVertex2f(-0.56, -0.14);
    glVertex2f(-0.56, -0.12);
    glEnd();
    glBegin(GL_POLYGON);//puppet(B) left hand finger
    glColor3f(1.0f, 1.0f ,0.0f);
    glVertex2f(-0.56, -0.14);
    glVertex2f(-0.56, -0.09);
    glVertex2f(-0.57, -0.09);
    glVertex2f(-0.57, -0.14);
    glEnd();
    glBegin(GL_POLYGON);//puppet(B) right hand
    glColor3f(0.9f, 0.7f ,0.5f);
    glVertex2f(-0.34, -0.12);
    glVertex2f(-0.34, -0.14);
    glVertex2f(-0.24, -0.14);
    glVertex2f(-0.24, -0.12);
    glEnd();
    glBegin(GL_POLYGON);//puppet(B) right hand finger
    glColor3f(1.0f, 1.0f ,0.0f);
    glVertex2f(-0.24, -0.14);
    glVertex2f(-0.24, -0.09);
    glVertex2f(-0.23, -0.09);
    glVertex2f(-0.23, -0.14);
    glEnd();
     ////Hand ROPE/////
    glBegin(GL_LINES);//Puppet hand rope left
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.565f, -0.09f);
    glVertex2f(-0.565f, 1.0f);
    glEnd();
    glBegin(GL_LINES);//Puppet hand rope write
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.235f, -0.09f);
    glVertex2f(-0.235f, 1.0f);
    glEnd();
    glPopMatrix();
     glBegin(GL_QUAD_STRIP); //lower stage
        glColor3f(1.0 ,0.5 ,0.3f ); // orange color
                glVertex2f(-1.0,-1.0);
                glVertex2f(-1.0,-0.6);
                glVertex2f(-0.8,-1.0);
                glVertex2f(-0.8,-0.6);
                glVertex2f(1.0,-1.0);
                glVertex2f(1.0,-0.6);
                glVertex2f(0.8,-1.0);
                glVertex2f(0.8,-0.6);

                glEnd();
   //Girl Puppet Legs///
   glPushMatrix();
glTranslatef(position,position2, 0.0f);

    glBegin(GL_POLYGON);//puppet(G) right leg
    glColor3f(0.9f, 0.7f ,0.5f);
    glVertex2f(0.45, -0.49);
    glVertex2f(0.43, -0.49);
    glVertex2f(0.43, -0.69);
    glVertex2f(0.45, -0.69);
    glEnd();

    glBegin(GL_POLYGON);//puppet(G) left leg
    glColor3f(0.9f, 0.7f ,0.5f);
    glVertex2f(0.35, -0.49);
    glVertex2f(0.37, -0.49);
    glVertex2f(0.37, -0.69);
    glVertex2f(0.35, -0.69);
    glEnd();

    //puppet(G)  shoes
    glColor3f(0.8f, 0.0f ,0.8f);
	sun(0.03,0.02,0.345,-0.69);
	sun(0.03,0.02,0.455,-0.69);

 glPopMatrix();
    //Boy puppet legs////
glPushMatrix();
glTranslatef(position3,position4, 0.0f);
    glBegin(GL_POLYGON);//puppet(B) left leg
    glColor3f(0.9f, 0.7f ,0.5f);
    glVertex2f(-0.445, -0.49);
    glVertex2f(-0.425, -0.49);
    glVertex2f(-0.425, -0.69);
    glVertex2f(-0.445, -0.69);
    glEnd();
    glBegin(GL_POLYGON);//puppet(B) right leg
    glColor3f(0.9f, 0.7f ,0.5f);
    glVertex2f(-0.355, -0.49);
    glVertex2f(-0.375, -0.49);
    glVertex2f(-0.375, -0.69);
    glVertex2f(-0.355, -0.69);
    glEnd();

    //puppet(B)   shoes
    glColor3f(0.0f, 0.0f ,1.0f);
    sun(0.03,0.02,-0.35,-0.69);
	sun(0.03,0.02,-0.45,-0.69);
    glPopMatrix();

        glBegin(GL_QUAD_STRIP); //side curtain
        glColor3f(1.0 ,0.0 ,0.0 ); //red color
         glVertex2f(-1.0,1.0);
         glVertex2f(-1.0,-0.8);
         glVertex2f(-0.98,1.0);
         glVertex2f(-0.98,-0.8);
          glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(-0.98,1.0);
        glVertex2f(-0.98,-0.8);
        glVertex2f(-0.99,1.0);
        glVertex2f(-0.99,-0.8);
        glColor3f(1.0 ,0.0 ,0.0 );
        glVertex2f(-0.98,1.0);
        glVertex2f(-0.98,-0.8);
        glVertex2f(-0.97,1.0);
        glVertex2f(-0.97,-0.8);
        glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(-0.97,1.0);
        glVertex2f(-0.97,-0.8);
        glVertex2f(-0.96,1.0);
        glVertex2f(-0.96,-0.8);
        glColor3f(1.0 ,0.0 ,0.0 );
        glVertex2f(-0.96,1.0);
        glVertex2f(-0.96,-0.8);
        glVertex2f(-0.95,1.0);
        glVertex2f(-0.95,-0.8);
        glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(-0.95,1.0);
        glVertex2f(-0.95,-0.8);
        glVertex2f(-0.94,1.0);
        glVertex2f(-0.94,-0.8);
        glColor3f(1.0 ,0.0 ,0.0 );
        glVertex2f(-0.94,1.0);
        glVertex2f(-0.94,-0.8);
        glVertex2f(-0.95,1.0);
        glVertex2f(-0.95,-0.8);
        glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(-0.95,1.0);
        glVertex2f(-0.95,-0.8);
        glVertex2f(-0.94,1.0);
        glVertex2f(-0.94,-0.8);
        glColor3f(1.0 ,0.0 ,0.0 );
        glVertex2f(-0.94,1.0);
        glVertex2f(-0.94,-0.8);
        glVertex2f(-0.93,1.0);
        glVertex2f(-0.93,-0.8);
        glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(-0.93,1.0);
        glVertex2f(-0.93,-0.8);
        glVertex2f(-0.92,1.0);
        glVertex2f(-0.92,-0.8);
        glColor3f(1.0 ,0.0 ,0.0 );
        glVertex2f(-0.92,1.0);
        glVertex2f(-0.92,-0.8);
        glVertex2f(-0.91,1.0);
        glVertex2f(-0.91,-0.8);
        glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(-0.91,1.0);
        glVertex2f(-0.91,-0.8);
        glVertex2f(-0.90,1.0);
        glVertex2f(-0.90,-0.8);
        glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(-0.90,1.0);
        glVertex2f(-0.90,-0.8);
        glVertex2f(-0.89,1.0);
        glVertex2f(-0.89,-0.8);
        glColor3f(1.0 ,0.0 ,0.0 );
        glVertex2f(-0.89,1.0);
        glVertex2f(-0.89,-0.8);
        glVertex2f(-0.88,1.0);
        glVertex2f(-0.88,-0.8);

         glEnd();

                 glBegin(GL_QUAD_STRIP); //side curtain
        glColor3f(1.0 ,0.0 ,0.0 ); //red color
         glVertex2f(1.0,1.0);
         glVertex2f(1.0,-0.8);
         glVertex2f(0.98,1.0);
         glVertex2f(0.98,-0.8);
          glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(0.98,1.0);
        glVertex2f(0.98,-0.8);
        glVertex2f(0.99,1.0);
        glVertex2f(0.99,-0.8);
        glColor3f(1.0 ,0.0 ,0.0 );
        glVertex2f(0.98,1.0);
        glVertex2f(0.98,-0.8);
        glVertex2f(0.97,1.0);
        glVertex2f(0.97,-0.8);
        glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(0.97,1.0);
        glVertex2f(0.97,-0.8);
        glVertex2f(0.96,1.0);
        glVertex2f(0.96,-0.8);
        glColor3f(1.0 ,0.0 ,0.0 );
        glVertex2f(0.96,1.0);
        glVertex2f(0.96,-0.8);
        glVertex2f(0.95,1.0);
        glVertex2f(0.95,-0.8);
        glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(0.95,1.0);
        glVertex2f(0.95,-0.8);
        glVertex2f(0.94,1.0);
        glVertex2f(0.94,-0.8);
        glColor3f(1.0 ,0.0 ,0.0 );
        glVertex2f(0.94,1.0);
        glVertex2f(0.94,-0.8);
        glVertex2f(0.95,1.0);
        glVertex2f(0.95,-0.8);
        glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(0.95,1.0);
        glVertex2f(0.95,-0.8);
        glVertex2f(0.94,1.0);
        glVertex2f(0.94,-0.8);
        glColor3f(1.0 ,0.0 ,0.0 );
        glVertex2f(0.94,1.0);
        glVertex2f(0.94,-0.8);
        glVertex2f(0.93,1.0);
        glVertex2f(0.93,-0.8);
        glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(0.93,1.0);
        glVertex2f(0.93,-0.8);
        glVertex2f(0.92,1.0);
        glVertex2f(0.92,-0.8);
        glColor3f(1.0 ,0.0 ,0.0 );
        glVertex2f(0.92,1.0);
        glVertex2f(0.92,-0.8);
        glVertex2f(0.91,1.0);
        glVertex2f(0.91,-0.8);
        glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(0.91,1.0);
        glVertex2f(0.91,-0.8);
        glVertex2f(0.90,1.0);
        glVertex2f(0.90,-0.8);
        glColor3f(0.0 ,0.0 ,0.0 );
        glVertex2f(0.90,1.0);
        glVertex2f(0.90,-0.8);
        glVertex2f(0.89,1.0);
        glVertex2f(0.89,-0.8);
        glColor3f(1.0 ,0.0 ,0.0 );
        glVertex2f(0.89,1.0);
        glVertex2f(0.89,-0.8);
        glVertex2f(0.88,1.0);
        glVertex2f(0.88,-0.8);

         glEnd();

         }
         void star(){
          glPushMatrix();

       glRotatef(i2,0.1,0.0,0.0);
glBegin(GL_TRIANGLES); //star in backgound
glColor3f(0.5f, 0.9f, 1.0f);//cyan
 glVertex2f(0.5,0.6);
   glVertex2f(0.6,0.6);
   glVertex2f(0.55,0.75);
   glVertex2f(0.5,0.7);
   glVertex2f(0.6,0.7);
   glVertex2f(0.55,0.55);
   glVertex2f(-0.5,0.6);//star 2
   glVertex2f(-0.6,0.6);
   glVertex2f(-0.55,0.75);
   glVertex2f(-0.5,0.7);
   glVertex2f(-0.6,0.7);
   glVertex2f(-0.55,0.55);
    glVertex2f(0.5,-0.4);//star 3
   glVertex2f(0.6,-0.4);
   glVertex2f(0.55,-0.25);
   glVertex2f(0.5,-0.3);
   glVertex2f(0.6,-0.3);
   glVertex2f(0.55,-0.45);
    glVertex2f(-0.5,-0.4);//star 4
   glVertex2f(-0.6,-0.4);
   glVertex2f(-0.55,-0.25);
   glVertex2f(-0.5,-0.3);
   glVertex2f(-0.6,-0.3);
   glVertex2f(-0.55,-0.45);
   glVertex2f(-0.05,-0.05); // star 5
   glVertex2f(0.05,-0.05);
   glVertex2f(0.0,0.1);
   glVertex2f(0.05,0.05);
   glVertex2f(-0.05,0.05);
   glVertex2f(-0.0,-0.1);


glEnd();

 glPopMatrix();

 i2+=0.3f;
 }


void opening() {
glBegin(GL_QUADS);               // Each set of 4 vertices form a quad
      glColor3f(1.0f, 0.0f, 0.0f);
       glVertex2f( -0.1f,  -1.0f);
        glVertex2f(-0.1f,  1.0f);
        glVertex2f( -1.0f, 1.0f); // Red
      glVertex2f(-1.0f, -1.0f);


      glEnd();
      glPopMatrix();

      glPushMatrix();
       glTranslatef(i1,j12, 1.0f);
      glBegin(GL_QUADS);




 glVertex2f( 1.0f, -1.0f); // Red

        glVertex2f(1.0f, 1.0f);
                glVertex2f(0.1f,  1.0f);
       glVertex2f( 0.1f,  -1.0f);
    glEnd();
    glPopMatrix();
    while(i<=1)
  {

        i-=0.0005f;
        j-=0.00005f;

        break;
        }
          while(i1<=1)
  {
        i1+=0.0005f;
        j12+=0.00005f;

        break;
        }

}
void curtain(){

	glLoadIdentity();
	glLineWidth(2);
    /*glBegin(GL_LINES);
    //line 1
    glColor3f(0.0f, 1.0f, 1.0f); //
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.0f, 1.0f);

    glColor3f(0.0f, 1.0f, 1.0f); //
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glEnd();*/
      glBegin(GL_TRIANGLES); // upper curtain
      glColor3f(1.0f, 0.0f, 0.0f); // red color
        glVertex2f(0.8,0.7);
        glVertex2f(1.0,1.0);
        glVertex2f(0.6,1.0);
        glVertex2f(0.4,0.7);
        glVertex2f(0.6,1.0);
        glVertex2f(0.2,1.0);
        glVertex2f(0.0,0.7);
        glVertex2f(-0.2,1.0);
        glVertex2f(0.2,1.0);
        glVertex2f(-0.4,0.7);
        glVertex2f(-0.2,1.0);
        glVertex2f(-0.6,1.0);
        glVertex2f(-0.8,0.7);
        glVertex2f(-1.0,1.0);
        glVertex2f(-0.6,1.0);
        glEnd();
        puppet();
        glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(i, j, 1.0f);

 opening();

glFlush();



}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
star();
puppet();
curtain();
}
void display1(){
    glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
Day();
//sun
 glColor3f(1.0f, 1.1f ,0.0f);
sun(0.1,0.1,0.5,0.5);
//cloud

glColor3f(1.0f,1.0f,1.0f);
sun(-0.1,0.1,-0.5f,0.5f);
sun(-0.1,0.1,-0.6,0.5);
sun(-0.1,0.1,-0.57,0.57);

sun(-0.05,0.05,-0.2f,0.5f);
sun(-0.05,0.05,-0.28,0.5);
sun(-0.05,0.05,-0.25,0.57);
bird();
curtain();

}

void night(){


     glClear(GL_COLOR_BUFFER_BIT);


glBegin(GL_QUAD_STRIP);//background lower
    glColor3f(0.0f,0.05f,0.0f);
    glVertex2f(-0.9,-0.3);
    glVertex2f(-0.9,-0.49);
    glVertex2f(0.9,-0.3);
    glVertex2f(0.9,-0.49);
    glEnd();

    glBegin(GL_POLYGON);//background upper
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.9,1.0);
    glVertex2f(-0.9,-0.3);
    glVertex2f(0.9,-0.3);
    glVertex2f(0.9,1.0);
    glEnd();
glBegin(GL_TRIANGLES);//primid2
    glColor3f(0.6f,0.5f,0.0f);
    glVertex2f(0.1,0.2);
    glVertex2f(0.3,-0.3);
    glVertex2f(-0.1,-0.3);
    glEnd();

    glBegin(GL_TRIANGLES);//piramid1
    glColor3f(0.6f,0.5f,0.0f);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.7,-0.3);
    glVertex2f(-0.1,-0.3);
    glEnd();

    glBegin(GL_TRIANGLES);//piramid3
    glColor3f(0.6f,0.5f,0.0f);
    glVertex2f(0.5,0.1);
    glVertex2f(0.3,-0.3);
    glVertex2f(0.7,-0.3);
    glEnd();
    glBegin(GL_POLYGON);//tree 1
    glColor3f(0.8f,0.8f,0.7f);
    glVertex2f(-0.75,-0.05);
    glVertex2f(-0.78,-0.05);
    glVertex2f(-0.78,-0.3);
    glVertex2f(-0.75,-0.3);
    glEnd();

    glBegin(GL_TRIANGLES);//tree1 triangle1
    glColor3f(0.0f,0.3f,0.0f);
    glVertex2f(-0.76,0.2);
    glVertex2f(-0.66,-0.05);
    glVertex2f(-0.87,-0.05);
    glEnd();
    glBegin(GL_TRIANGLES);//tree1 triangle2
    glColor3f(0.0f,0.3f,0.0f);
    glVertex2f(-0.76,0.3);
    glVertex2f(-0.67,0.1);
    glVertex2f(-0.85,0.1);
    glEnd();
    glBegin(GL_TRIANGLES);//tree1 triangle3
    glColor3f(0.0f,0.3f,0.0f);
    glVertex2f(-0.76,0.4);
    glVertex2f(-0.69,0.2);
    glVertex2f(-0.83,0.2);
    glEnd();

    glBegin(GL_POLYGON);//tree 2
    glColor3f(0.8f,0.8f,0.7f);
    glVertex2f(0.75,-0.05);
    glVertex2f(0.78,-0.05);
    glVertex2f(0.78,-0.3);
    glVertex2f(0.75,-0.3);
    glEnd();

    glBegin(GL_TRIANGLES);//tree2 triangle1
    glColor3f(0.0f,0.3f,0.0f);
    glVertex2f(0.76,0.2);
    glVertex2f(0.66,-0.05);
    glVertex2f(0.87,-0.05);
    glEnd();
    glBegin(GL_TRIANGLES);//tree2 triangle2
    glColor3f(0.0f,0.3f,0.0f);
    glVertex2f(0.76,0.3);
    glVertex2f(0.67,0.1);
    glVertex2f(0.85,0.1);
    glEnd();
    glBegin(GL_TRIANGLES);//tree2 triangle3
    glColor3f(0.0f,0.3f,0.0f);
    glVertex2f(0.76,0.4);
    glVertex2f(0.69,0.2);
    glVertex2f(0.83,0.2);
    glEnd();
     glColor3f(1.0f, 1.0f ,1.0f);
sun(0.1,0.1,0.5,0.5);

///STARS

    glColor3f(1.0f, 1.0f ,1.0f);
    sun(0.00,0.004,0.2,0.6);
    sun(0.006,0.004,0.4,0.34);
    sun(0.006,0.004,0.5,0.8);
    sun(0.006,0.004,0.7,0.7);
    sun(0.006,0.004,-0.2,0.6);
    sun(0.006,0.004,-0.4,0.5);
    sun(0.006,0.004,-0.5,0.8);
    sun(0.006,0.004,-0.4,0.7);
    sun(0.006,0.004,-0.6,0.6);
    sun(0.006,0.004,0.3,0.8);
    sun(0.006,0.004,-0.1,0.65);
    sun(0.006,0.004,-0.3,0.75);
    sun(0.006,0.004,0.1,0.65);
    sun(0.006,0.004,-0.8,0.6);
    sun(0.006,0.004,-0.7,0.5);
    sun(0.006,0.004,-0.5,0.6);
    sun(0.006,0.004,-0.05,0.6);
    sun(0.006,0.004,-0.04,0.5);
    sun(0.006,0.004,0.8,0.6);
     sun(0.006,0.004,0.2,0.55);







   puppet();
    curtain();
}
void update(int value) {
    if(position3 < -1.0)
        position3 = 1.0f;

    position3 -= speed;


	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
//boy animation
void update2(int value) {
    if(position > 1.0)
        position = -1.0f;

    position += speed1;


	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}
void update3(int value) {
    if(i5 > 1.0)
        i5 = -1.0f;

    i5 += speed2;


	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}
void SpecialInput(int key, int x, int y)
{
switch(key)
{


case GLUT_KEY_UP:
    speed =0.0f;
    speed1 =0.0f;
    speed2 =0.0f;



break;
case GLUT_KEY_DOWN:
      speed=0.05f;

break;
case GLUT_KEY_LEFT:
    speed =0.05f;
   glutTimerFunc(100, update, 0);
break;
case GLUT_KEY_RIGHT:
    speed1=0.05f;
    glutTimerFunc(100, update2, 0);
break;
glutPostRedisplay();

}
}
void handleKeypress1(unsigned char key, int x, int y){
    switch (key) {
    case 'b':
        speed2=0.05f;
            glutTimerFunc(100, update3, 0);
    break;
case  'd':
glutDestroyWindow(1);
    glutInitWindowSize(1300,800);


 glutCreateWindow("Egyptian puppet show");
 glutDisplayFunc(display1);
 glutKeyboardFunc(handleKeypress1);
 glutSpecialFunc(SpecialInput);
 //sndPlaySound("Bird-Chirping-Sound-Effect-320k.wav",SND_ASYNC|SND_LOOP);



break;
case  'n':
glutDestroyWindow(1);
    glutInitWindowSize(1300,800);


 glutCreateWindow("Egyptian puppet show");
 glutDisplayFunc(night);
 glutKeyboardFunc(handleKeypress1);
 glutSpecialFunc(SpecialInput);
 //sndPlaySound("Night-Time-Sound-Effect.wav",SND_ASYNC|SND_LOOP);



break;
case  'e':
glutDestroyWindow(1);
    glutInitWindowSize(1300,800);


 glutCreateWindow("Egyptian puppet show");
 glutDisplayFunc(display);
 glutKeyboardFunc(handleKeypress1);
 glutSpecialFunc(SpecialInput);
 //sndPlaySound("Kids-Story-Telling-Music.wav",SND_ASYNC|SND_LOOP);



break;



    }


glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(1300,800);
    glutCreateWindow("Puppet Show");
    glutDisplayFunc(display);//
    initGL();
    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
     glutSpecialFunc(SpecialInput);
     glutKeyboardFunc(handleKeypress1);
      sndPlaySound("Applause.wav",SND_ASYNC);
     //sndPlaySound("Kids-Story-Telling-Music.wav",SND_ASYNC|SND_LOOP);
     glutMainLoop();

    return 0;
}
