#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

void myInit (void)
{
        glClearColor(1.0, 1.0, 1.0, 0.0);
        glColor3f(0.0f, 0.0f, 0.0f);
        glPointSize(4.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0.0, 902.0, 0.0, 684.0);
}

void Sky()
{
        glPushMatrix();
        glColor3ub(103,155,170);
        glBegin(GL_QUADS);
        glVertex2i(0,684);
        glVertex2i(902,684);
        glVertex2i(902,0);
        glVertex2i(0,0);
        glEnd();
        glPopMatrix();

        glutPostRedisplay();
}

void homeWindow(int x,int y)
{
        glPushMatrix();
        glColor3ub(156,178,189);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+10,y);
        glVertex2i(x+10,y+12);
        glVertex2i(x,y+12);
        glEnd();
        glPopMatrix();
}

void homeWindow2(int x,int y)
{
        glPushMatrix();
        glColor3ub(96,131,135);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+4,y);
        glVertex2i(x+4,y+17);
        glVertex2i(x,y+17);
        glEnd();
        glPopMatrix();
}

void homeWindow3(int x,int y)
{
        glPushMatrix();
        glColor3ub(140,148,148);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+14,y);
        glVertex2i(x+14,y+13);
        glVertex2i(x,y+13);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glBegin(GL_QUADS);
        glVertex2i(x,y+17);
        glVertex2i(x+14,y+17);
        glVertex2i(x+14,y+30);
        glVertex2i(x,y+30);
        glEnd();
        glPopMatrix();
}

void Home()
{
        glPushMatrix();
        glColor3ub(235,214,184);
        glBegin(GL_QUADS);
        glVertex2i(20,385);
        glVertex2i(118,385);
        glVertex2i(118,398);
        glVertex2i(20,398);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(127,10,20);
        glBegin(GL_QUADS);
        glVertex2i(20,379);
        glVertex2i(118,379);
        glVertex2i(118,385);
        glVertex2i(20,385);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(235,214,184);
        glBegin(GL_QUADS);
        glVertex2i(28,370);
        glVertex2i(110,370);
        glVertex2i(110,379);
        glVertex2i(28,379);
        glEnd();

        glColor3ub(235,214,184);
        glBegin(GL_QUADS);
        glVertex2i(10,330);
        glVertex2i(130,330);
        glVertex2i(130,370);
        glVertex2i(10,370);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(235,214,184);
        glBegin(GL_QUADS);
        glVertex2i(0,309);
        glVertex2i(141,309);
        glVertex2i(141,331);
        glVertex2i(0,331);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(235,214,184);
        glBegin(GL_QUADS);
        glVertex2i(5,257);
        glVertex2i(137,257);
        glVertex2i(137,309);
        glVertex2i(5,309);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(52,257);
        glVertex2i(87,257);
        glVertex2i(87,287);
        glVertex2i(52,287);
        glEnd();
        glPopMatrix();

        //Bottom Block

        int HomeStripe1=-5;
         for(int i=9;i>=0;i--)
        {
            HomeStripe1+=13;
            homeWindow(HomeStripe1,292);
        }

        //Bottom up block
        int HomeStripe2=-5;
        for(int i=16;i>=0;i--)
        {
            HomeStripe2+=8;
            homeWindow2(HomeStripe2,312);
        }

        //next Bottom up block
        int HomeStripe3=-1;
        for(int i=5;i>=0;i--)
        {
            HomeStripe3+=18;
            homeWindow3(HomeStripe3,335);
        }

        glutPostRedisplay();
}


//*********HOSPITAL PART***********

void HospitalWindow1(int x,int y)
{
        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+16,y);
        glVertex2i(x+16,y+30);
        glVertex2i(x,y+30);
        glEnd();
        glPopMatrix();
}

void HospitalMidWindow1(int x,int y)
{
        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+12,y);
        glVertex2i(x+12,y+18);
        glVertex2i(x,y+18);
        glEnd();
        glPopMatrix();
}

void Hospital()
{
        glPushMatrix();
        glColor3ub(252,222,66);
        glBegin(GL_QUADS);
        glVertex2i(151,257);
        glVertex2i(181,257);
        glVertex2i(181,424);
        glVertex2i(151,424);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(252,222,66);
        glBegin(GL_QUADS);
        glVertex2i(449,257);
        glVertex2i(449,424);
        glVertex2i(420,424);
        glVertex2i(420,257);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(252,222,66);
        glBegin(GL_QUADS);
        glVertex2i(181,381);
        glVertex2i(420,381);
        glVertex2i(420,400);
        glVertex2i(181,400);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(190,27,9);
        glBegin(GL_QUADS);
        glVertex2i(181,258);
        glVertex2i(420,258);
        glVertex2i(420,381);
        glVertex2i(181,381);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(151,390);
        glVertex2i(181,390);
        glVertex2i(181,401);
        glVertex2i(151,401);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(420,390);
        glVertex2i(449,390);
        glVertex2i(449,401);
        glVertex2i(420,401);
        glEnd();
        glPopMatrix();

        int HospitalStripe1=163;
        for(int i=11;i>=0;i--)
        {
            HospitalStripe1+=20;
            HospitalWindow1(HospitalStripe1,349);
        }

        int HospitalStripe2=163;
        for(int i=11;i>=0;i--)
        {
            HospitalStripe2+=20;
            HospitalWindow1(HospitalStripe2,315);
        }

        int HospitalStripe3=163;
        for(int i=11;i>=0;i--)
        {
            HospitalStripe3+=20;
            HospitalWindow1(HospitalStripe3,281);
        }

         glPushMatrix(); //middle long stripe
        glColor3ub(252,222,66);
        glBegin(GL_QUADS);
        glVertex2i(263,257);
        glVertex2i(339,257);
        glVertex2i(339,400);
        glVertex2i(263,400);
        glEnd();
        glPopMatrix();

        int HospitalStripe4=260;
        for(int i=3;i>=0;i--)
        {
            HospitalStripe4+=14;
            HospitalMidWindow1(HospitalStripe4,370);
        }

         int HospitalStripe5=260;
        for(int i=3;i>=0;i--)
        {
            HospitalStripe5+=14;
            HospitalMidWindow1(HospitalStripe5,340);
        }

         int HospitalStripe6=260;
        for(int i=3;i>=0;i--)
        {
            HospitalStripe6+=14;
            HospitalMidWindow1(HospitalStripe6,310);
        }

        glPushMatrix();  //Door
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(286,257);
        glVertex2i(318,257);
        glVertex2i(318,298);
        glVertex2i(286,298);
        glEnd();
        glPopMatrix();

        glutPostRedisplay();
}

//******Circle******
void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius)
{
    int i;
    int triangleAmount = 50; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * 3.1416;

    glColor3ub(252,222,66);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2d(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
        glEnd();

        glPushMatrix();
        glColor3ub(255,0,0);
        glBegin(GL_QUADS);
        glVertex2i(295,395);
        glVertex2i(307,395);
        glVertex2i(307,426);
        glVertex2i(295,426);
        glEnd();
        glPopMatrix();

         glPushMatrix();
        glColor3ub(255,0,0);
        glBegin(GL_QUADS);
        glVertex2i(284,408);
        glVertex2i(318,408);
        glVertex2i(318,418);
        glVertex2i(284,418);
        glEnd();
        glPopMatrix();


}

//*********Hotel part******

void HotelBelowWindow1(int x,int y)
{
        glPushMatrix();
        glColor3ub(5,150,155);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+19,y);
        glVertex2i(x+19,y+13);
        glVertex2i(x,y+13);
        glEnd();
        glPopMatrix();
}

void HotelAboveWindow1(int x,int y)
{
        glPushMatrix();
        glColor3ub(5,150,155);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+17,y);
        glVertex2i(x+17,y+21);
        glVertex2i(x,y+21);
        glEnd();
        glPopMatrix();
}

void drawCircle(GLfloat x, GLfloat y, GLfloat radius)
{
    int i;
    int triangleAmount = 50; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * 3.1416;

    //glColor3ub(23,60,43);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2d(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
        glEnd();
}
void Hotel()
{
        glPushMatrix();
        glColor3ub(8,32,19);
        glBegin(GL_QUADS);
        glVertex2i(449,257);
        glVertex2i(644,257);
        glVertex2i(644,289);
        glVertex2i(449,289);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(23,60,43);
        glBegin(GL_QUADS);
        glVertex2i(473,289);
        glVertex2i(500,289);
        glVertex2i(500,413);
        glVertex2i(473,413);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(15,47,106);
        glBegin(GL_QUADS);
        glVertex2i(500,289);
        glVertex2i(517,289);
        glVertex2i(517,435);
        glVertex2i(500,435);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(21,63,53);
        glBegin(GL_QUADS);
        glVertex2i(517,289);
        glVertex2i(617,289);
        glVertex2i(617,408);
        glVertex2i(517,408);
        glEnd();
        glPopMatrix();

        glPushMatrix();  // above name plate
        glColor3ub(30,72,230);
        glBegin(GL_QUADS);
        glVertex2i(526,408);
        glVertex2i(600,408);
        glVertex2i(600,423);
        glVertex2i(526,423);
        glEnd();
        glPopMatrix();

         glColor3ub(23,60,43);  // side circle
        drawCircle(475.0f,310.0f,18.0f);
        drawCircle(475.0f,348.0f,18.0f);
        drawCircle(475.0f,383.0f,18.0f);

         int HotelBelowStripe1=430;
        for(int i=7;i>=0;i--)
        {
            HotelBelowStripe1+=24;
            HotelBelowWindow1(HotelBelowStripe1,267);
        }

        int HotelAboveStripe1=498;
        for(int i=3;i>=0;i--)
        {
            HotelAboveStripe1+=24;
            HotelAboveWindow1(HotelAboveStripe1,377);
        }

        int HotelAboveStripe2=498;
        for(int i=3;i>=0;i--)
        {
            HotelAboveStripe2+=24;
            HotelAboveWindow1(HotelAboveStripe2,350);
        }

        int HotelAboveStripe3=498;
        for(int i=3;i>=0;i--)
        {
            HotelAboveStripe3+=24;
            HotelAboveWindow1(HotelAboveStripe3,323);
        }

        int HotelAboveStripe4=498;
        for(int i=3;i>=0;i--)
        {
            HotelAboveStripe4+=24;
            HotelAboveWindow1(HotelAboveStripe4,295);
        }


}

void Door()
{
         glColor3ub(8,32,19);
        drawCircle(547.0f,282.0f,22.0f);

        glPushMatrix();     // door
        glColor3ub(119,81,70);
        glBegin(GL_QUADS);
        glVertex2i(524,258);
        glVertex2i(570,258);
        glVertex2i(570,281);
        glVertex2i(524,281);
        glEnd();
        glPopMatrix();

         glPushMatrix();     // door middle
        glColor3ub(70,113,106);
        glBegin(GL_QUADS);
        glVertex2i(528,280);
        glVertex2i(546,280);
        glVertex2i(546,257);
        glVertex2i(528,257);
        glEnd();
        glPopMatrix();

        glPushMatrix();     // door middle
        glColor3ub(70,113,106);
        glBegin(GL_QUADS);
        glVertex2i(548,257);
        glVertex2i(565,257);
        glVertex2i(565,280);
        glVertex2i(548,280);
        glEnd();
        glPopMatrix();

}

//**********School part***********

void SchoolWindow1(int x,int y)
{
        glPushMatrix();
        glColor3ub(190,202,200);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+20,y);
        glVertex2i(x+20,y+17);
        glVertex2i(x,y+17);
        glEnd();
        glPopMatrix();
}

void School()
{
        glPushMatrix();
        glColor3ub(214,130,5);
        glBegin(GL_QUADS);
        glVertex2i(643,257);
        glVertex2i(884,257);
        glVertex2i(884,351);
        glVertex2i(643,351);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(73,3,5);
        glBegin(GL_QUADS);
        glVertex2i(640,351);
        glVertex2i(887,351);
        glVertex2i(887,358);
        glVertex2i(640,358);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(80,149,146);
        glBegin(GL_QUADS);
        glVertex2i(648,265);
        glVertex2i(719,265);
        glVertex2i(719,275);
        glVertex2i(648,275);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(80,149,146);
        glBegin(GL_QUADS);
        glVertex2i(808,265);
        glVertex2i(879,265);
        glVertex2i(879,275);
        glVertex2i(808,275);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(217,132,3);
        glBegin(GL_POLYGON);
        glVertex2i(713,358);
        glVertex2i(813,358);
        glVertex2i(813,381);
        glVertex2i(763,402);
        glVertex2i(713,381);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(75,3,4);
        glBegin(GL_TRIANGLES);
        glVertex2i(707,381);
        glVertex2i(819,381);
        glVertex2i(763,409);
        glEnd();
        glPopMatrix();

        glColor3ub(200,200,240);
        drawCircle(762.0f,369.0f,10.0f);

        int SchoolStripe1=623;
        for(int i=2;i>=0;i--)
        {
            SchoolStripe1+=25;
            SchoolWindow1(SchoolStripe1,328);
        }

         int SchoolStripe2=623;
        for(int i=2;i>=0;i--)
        {
            SchoolStripe2+=25;
            SchoolWindow1(SchoolStripe2,304);
        }

        int SchoolStripe3=623;
        for(int i=2;i>=0;i--)
        {
            SchoolStripe3+=25;
            SchoolWindow1(SchoolStripe3,281);
        }

        int SchoolStripe4=783;
        for(int i=2;i>=0;i--)
        {
            SchoolStripe4+=25;
            SchoolWindow1(SchoolStripe4,328);
        }

        int SchoolStripe5=783;
        for(int i=2;i>=0;i--)
        {
            SchoolStripe5+=25;
            SchoolWindow1(SchoolStripe5,304);
        }

        int SchoolStripe6=783;
        for(int i=2;i>=0;i--)
        {
            SchoolStripe6+=25;
            SchoolWindow1(SchoolStripe6,282);
        }

}
void SchoolDoor()
{
        glPushMatrix();
        glColor3ub(72,2,4);
        glBegin(GL_QUADS);
        glVertex2i(728,257);
        glVertex2i(797,257);
        glVertex2i(797,321);
        glVertex2i(728,321);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(75,3,4);
        glBegin(GL_TRIANGLES);
        glVertex2i(722,321);
        glVertex2i(803,321);
        glVertex2i(763,347);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(100,150,100);
        glBegin(GL_QUADS);
        glVertex2i(733,304);
        glVertex2i(792,304);
        glVertex2i(792,321);
        glVertex2i(733,321);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(89,107,121);
        glBegin(GL_QUADS);
        glVertex2i(743,257);
        glVertex2i(782,257);
        glVertex2i(782,295);
        glVertex2i(743,295);
        glEnd();
        glPopMatrix();


}

void Sun()
{
        glColor3ub(246,171,26);
        drawCircle(824.0f,615.0f,40.0f);
        glutPostRedisplay();
}


void Road()
{
    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(0,148);
    glVertex2i(902,148);
    glVertex2i(902,47);
    glVertex2i(0,47);
    glEnd();
    glPopMatrix();

    for(int i=0;i<120*8;i+=120)
    {
        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(0+i,95);
        glVertex2i(35+i,95);
        glVertex2i(35+i,100);
        glVertex2i(0+i,100);
        glEnd();
        glPopMatrix();
    }
}

void RoadCorner1()
{
    for(int i=0;i<16*60;i+=30)
    {
        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(0+i,148);
        glVertex2i(16+i,148);
        glVertex2i(16+i,157);
        glVertex2i(0+i,157);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(16+i,148);
        glVertex2i(39+i,148);
        glVertex2i(39+i,157);
        glVertex2i(16+i,157);
        glEnd();
        glPopMatrix();
    }
}

void RoadCorner2()
{
    for(int i=0;i<16*60;i+=30)
    {
        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(0+i,148-100);
        glVertex2i(16+i,148-100);
        glVertex2i(16+i,157-100);
        glVertex2i(0+i,157-100);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(16+i,148-100);
        glVertex2i(39+i,148-100);
        glVertex2i(39+i,157-100);
        glVertex2i(16+i,157-100);
        glEnd();
        glPopMatrix();
    }
}

void RoadGrash()
{
    glPushMatrix();
    glColor3ub(100,171,55);
    glBegin(GL_QUADS);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(902.0,0.0,0.0);
    glVertex3f(902.0,47.0,0.0);
    glVertex3f(0.0,47.0,0.0);
    glEnd();
    glPopMatrix();
}



void Tree()
{
//    glPushMatrix();
//    glColor3ub(37,90,27);
//    glBegin(GL_TRIANGLES);
//    glVertex2i(24,78);
//    glVertex2i(67,78);
//    glVertex2i(46,110);
//    glEnd();
//    glPopMatrix();
//
//    glPushMatrix();
//    glColor3ub(37,90,27);
//    glBegin(GL_TRIANGLES);
//    glVertex2i(24,70);
//    glVertex2i(67,70);
//    glVertex2i(46,102);
//    glEnd();
//    glPopMatrix();

//    glPushMatrix();
//    glColor3ub(37,90,27);
//    glBegin(GL_TRIANGLES);
//    glVertex2i(24,62);
//    glVertex2i(67,62);
//    glVertex2i(46,94);
//    glEnd();
//    glPopMatrix();
//
//    glPushMatrix();
//    glColor3ub(37,90,27);
//    glBegin(GL_TRIANGLES);
//    glVertex2i(24,78-24);
//    glVertex2i(67,78-24);
//    glVertex2i(46,110-24);
//    glEnd();
//    glPopMatrix();

    for(int i=0; i<7*130;i+=130)
    {
        glPushMatrix();
        glColor3ub(37,90,27);
        glBegin(GL_TRIANGLES);
        glVertex2i(24+i,46);
        glVertex2i(67+i,46);
        glVertex2i(46+i,78);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(37,90,27);
        glBegin(GL_TRIANGLES);
        glVertex2i(24+i,40);
        glVertex2i(67+i,40);
        glVertex2i(46+i,72);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(161,89,61);
        glBegin(GL_QUADS);
        glVertex2i(39+i,40);
        glVertex2i(52+i,40);
        glVertex2i(52+i,0);
        glVertex2i(39+i,0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(37,90,27);
        glBegin(GL_TRIANGLES);
        glVertex2i(24+i,32);
        glVertex2i(67+i,32);
        glVertex2i(46+i,64);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(37,90,27);
        glBegin(GL_TRIANGLES);
        glVertex2i(24+i,24);
        glVertex2i(67+i,24);
        glVertex2i(46+i,56);
        glEnd();
        glPopMatrix();
    }
}

void Car1()
{
    glPushMatrix();
    glColor3ub(34,160,160);
    glBegin(GL_QUADS);
    glVertex2i(311,112);
    glVertex2i(414,112);
    glVertex2i(414,174);
    glVertex2i(311,174);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(45,194,198);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(414,162);
    glVertex2i(445,162);
    glVertex2i(473,134);
    glVertex2i(473,112);
    glVertex2i(414,112);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(75,89,89);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(417,158);
    glVertex2i(444,158);
    glVertex2i(463,139);
    glVertex2i(463,134);
    glVertex2i(417,134);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,0,0);
    glBegin(GL_QUADS);
    glVertex2i(464,128);
    glVertex2i(472,128);
    glVertex2i(472,113);
    glVertex2i(464,113);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(419,126);
    glVertex2i(431,126);
    glVertex2i(431,129);
    glVertex2i(419,129);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(48,48,46);
    drawFilledCircle(342,116,15);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(48,48,46);
<<<<<<< HEAD
    drawFilledCircle(434,116,15);
=======
    drawCircle(342,98+18,15);
>>>>>>> 7d8d4e743974d6f66c56a08e9c973c306a4af109
    glPopMatrix();
}

void myDisplay(void)
{
        glClear (GL_COLOR_BUFFER_BIT);
        //glPointSize(4.0);

        Sky();
        Home();
        drawFilledCircle(300.0f,400.0f,40.0f);
        Hospital();

       Hotel();
        Door();

        School();
        SchoolDoor();

        Sun();

        Road();
        RoadCorner1();
        RoadCorner2();
        RoadGrash();
        Tree();
        Car1();
        glFlush ();
}

int main(int argc, char** argv)
{
        glutInit(&argc, argv);
        glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize (902,684);
        //glutInitWindowPosition (100, 150);
        glutCreateWindow ("City Road View");
        glutDisplayFunc(myDisplay);
        myInit ();
        glutMainLoop();
}
