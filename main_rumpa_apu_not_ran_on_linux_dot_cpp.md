/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
// #include<windows.h>
#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>

static int slices = 16;
static int stacks = 16;

/* GLUT callback Handlers */

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);


    glColor3f( 1, 1, 0.0);

    // Define the 5 vertices of a pentagon
    glVertex2f( 0.1, 0.0);
    glVertex2f( 0.0, 0.1);
    glVertex2f( -0.1, 0.0);
    glVertex2f( 0.0, -0.1);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f( 0.0, 0.0, 1);

    glVertex2f( 0.1, 0.0);
    glVertex2f( 0.2, 0.1);
    glVertex2f( 0.3, 0.0);
    glVertex2f( 0.2, -0.1);



    glEnd();

    glBegin(GL_POLYGON);

    glColor3f( 0.0, 0.0, 1);

    glVertex2f( 0.0, 0.1);
    glVertex2f( 0.1, 0.2);
    glVertex2f( 0.0, 0.3);
    glVertex2f( -0.1, 0.2);



    glEnd();

    glBegin(GL_POLYGON);

    glColor3f( 0.0, 0.0, 1);
    glVertex2f( 0.0, -0.1);
    glVertex2f( 0.1, -0.2);
    glVertex2f( 0.0, -0.3);
    glVertex2f( -0.1, -0.2);



    glEnd();

    glBegin(GL_POLYGON);

    glColor3f( 0.0, 0.0, 1);

    glVertex2f( -0.1, 0.0);
    glVertex2f( -0.2, 0.1);
    glVertex2f( -0.3, 0.0);
    glVertex2f( -0.2, -0.1);



    glEnd();




    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(500, 0);
    glutCreateWindow("Creating a pentagon and displaying it.");
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}