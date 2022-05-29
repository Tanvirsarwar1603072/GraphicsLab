#include "GL/freeglut.h"
#include "GL/gl.h"

void drawTriangle(){
    glBegin(GL_POLYGON);
    //For the bigger square
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(-0.9, 0.9);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(-0.9, 0.0);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(-0.1, 0.0);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(-0.1, 0.9);
    glEnd();

    glBegin(GL_POLYGON);
    //For the smaller square
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.8, 0.8);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.8, 0.7);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.7, 0.7);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.7, 0.8);
    glEnd();

    glBegin(GL_POLYGON);
    //For the smaller square
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.3, 0.8);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.3, 0.7);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.2, 0.7);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.2, 0.8);
    glEnd();

    glBegin(GL_POLYGON);
    //For the smaller square
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.8, 0.2);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.8, 0.1);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.7, 0.1);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.7, 0.2);
    glEnd();

    glBegin(GL_POLYGON);
    //For the smaller square
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.3, 0.2);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.3, 0.1);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.2, 0.1);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.2, 0.2);
    glEnd();

    //For hut

    glBegin(GL_POLYGON);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.1, 0.6);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.1, 0.1);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.3, 0.1);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.3, 0.6);
    glEnd();

    glBegin(GL_POLYGON);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.3, 0.6);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.3, 0.3);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.5, 0.3);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.5, 0.6);
    glEnd();

    glBegin(GL_POLYGON);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.5, 0.6);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.5, 0.3);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.7, 0.3);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.7, 0.6);
    glEnd();

    glBegin(GL_POLYGON);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.5, 0.3);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.5, 0.1);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.7, 0.1);
        glColor4f(1.0, 1.0, 0.0, 0.0);
        glVertex2f(0.7, 0.3);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.7, 0.6);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.7, 0.1);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.9, 0.1);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.9, 0.6);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.8,0.9);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.7, 0.6);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.9, 0.6);
        
    glEnd();

    glBegin(GL_POLYGON);
        glColor4f(0.0, 1.0, 1.0, 1.0);
        glVertex2f(0.2,0.9);
        glColor4f(0.0, 1.0, 1.0, 1.0);
        glVertex2f(0.1, 0.6);
        glColor4f(0.0, 1.0, 1.0, 1.0);
        glVertex2f(0.7, 0.6);
        glColor4f(0.0, 1.0, 1.0, 1.0);
        glVertex2f(0.8, 0.9);
        
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