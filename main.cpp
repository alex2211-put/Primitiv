#include "Triangles.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Vector2D.h"
#include "Circle.cpp"
#include "Block.cpp"

void displayCell()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //очищаем экран, чтобы картинки "не размножались"

    glLoadIdentity();

    Square a = Square(Vector2D(0.5, 0), Vector2D(0, 0.15));
    a.setColor(1, 0, 0);
    a.paintPolygon();

    glEnable(GL_ALPHA_TEST); //включаем прозрачность
    glEnable(GL_BLEND);  //разрешаем мешать цвета
    glBlendFunc(GL_SRC_ALPHA,
                GL_ONE_MINUS_SRC_ALPHA);  //устанавливаем уровень прозрачности - пока до конца не разобрался

    glFlush();
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);  //параметры окна(двойная буферизация и всё такое)
    glutInitWindowSize(1200, 800);  //это размеры окна
    glutCreateWindow("Awesome Cube");  //это название создающегося окна
    glEnable(GL_DEPTH_TEST);  //тест глубины или что-то такое

    glutDisplayFunc(displayCell);  //вызвываем функцию, которая рисует кубы

    glutMainLoop();  //а это бесконечный цикл
    return 0;

}