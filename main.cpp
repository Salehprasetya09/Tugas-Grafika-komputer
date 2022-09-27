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

#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);

    glPointSize(8.0);
    glBegin(GL_POINTS);

    glColor3f(1.0, 1.0, 1.0);         //Warna Putih
    glVertex3f(0.3, 0.4, 0.0);
    glColor3f(0.75, 0.75, 0.75);      //Warna Abu-Abu
    glVertex3f(0.4, 0.5, 1.0);
    glColor3f(1.0, 1.0, 0.0);         //Warna Kuning
    glVertex3f(0.7, 0.4, 0.0);
    glColor3f(0.0, 1.0, 1.0);         //Warna Tosca
    glVertex3f(0.4, 0.6, 0.0);
    glColor3f(0.5, 1.0, 0.5);         //Warna Hijau Muda
    glVertex3f(0.2, 0.7, 0.0);
    glColor3f(1.0, 0.43, 0.78);       //Warna Pink
    glVertex3f(0.6, 0.7, 0.0);

    glEnd();
    glFlush();
}

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 230);
    glutInitWindowPosition(200, 210);
    glutCreateWindow("Point");
    Initialize();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
