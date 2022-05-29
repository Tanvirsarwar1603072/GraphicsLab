#include "GL/freeglut.h"
#include "GL/gl.h"

void drawTriangle(){
    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.9, 0.0);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.8, 0.25);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.8, -0.25);
    glEnd();
    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.8, 0.0);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.5, 0.5);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.5, -0.5);
    glEnd();
    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.5, 0.5);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.5, -0.5);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.2, 0.0);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.2, 0.0);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.1, 0.75);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.0, 0.25);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.0, -0.25);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.1, -0.75);
    glEnd();
    
    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.0, 0.25);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.0, -0.25);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.1, -0.5);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.25, 0.0);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.1, 0.5);
    glEnd();

    glFlush();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL - Complex shape");
    glutDisplayFunc(drawTriangle);
    glutMainLoop();
    return 0;
}