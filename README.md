// Напишу здесь пример функции main, с помощью которой можно попробовать собрать и нарисовать все, что есть в этой библиотеке.

// Надеюсь, будет полезно


#include "Triangles.cpp"  // это для рисования треугольников

#include "Square.cpp"  // это квадраты

#include "Spring.cpp"  // пружинка

#include "Circle.cpp"  // круги

#include "Rectangle.cpp"  // прямоугольники


// Функция ниже позволяет выводить рисунки на экран
///////////////////////////////////////////////////////////////////////////////////


void displayCell()

{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //очищаем экран, чтобы картинки "не размножались"
    glLoadIdentity();  // служебная функция
    /////////////////////////////////////////////////////
    // здесь пишем весь код рисования. Например как ниже:
    Triangle a = Triangle(Vector2D(0, 0), Vector2D(0, 0.5), Vector2D(0.5, 0));
    a.paintLines();
    //////////////////////////////////////////////////////
    // по итогам этого будет нарисован треугольник
    glFlush();
    glutSwapBuffers();
};

// Данная функция позволяет сохранять пропорции при изменении окна
void changeSize(int w, int h)
{

    if (h == 0)
        h = 1;
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    float ratio = (float) w / (float) h;
    if (w <= h)
        glOrtho(-1, 1, -1 / ratio, 1 / ratio, 1, -1);
    else
        glOrtho(-1 * ratio, 1 * ratio, -1, 1, 1, -1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);  // параметры окна(двойная буферизация и всё такое)
    glutInitWindowSize(1200, 800);  // это размеры окна
    glutCreateWindow("Awesome Cube");  // это название создающегося окна
    glEnable(GL_DEPTH_TEST);  // тест глубины или что-то такое

    glutDisplayFunc(displayCell);  // вызвываем функцию, которая рисует
    glutReshapeFunc(changeSize);  // вызываем функцию, которая сохраняет "квадраты квадратами"

    glutMainLoop();  //а это бесконечный цикл
    return 0;
}
// конец:)
