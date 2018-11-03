//
//  main.cpp
//  Battleship
//
//  Created by Jared Felton on 11/3/18.
//  Copyright © 2018 Jared Felton. All rights reserved.
//
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GLUT/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);
    glEnd();
    glFlush();
    
}

void myinit() {
    glEnable(GL_DEPTH_TEST);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3f(0.0, 1.0, 0.0);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_DEPTH);
    
    glutInitWindowSize(1450, 700);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("BattleShip");
    
    glutDisplayFunc(display);
    
    myinit();
    glutMainLoop();
    return 0;
}
