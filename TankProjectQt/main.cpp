#include <QApplication>
#include <QtWidgets>
#include <QtGui>



int main(int argc, char *argv[])

{

        QApplication app(argc, argv);


        QGraphicsScene scene;


        QPixmap monPixmap("Note.png");

        scene.addPixmap(monPixmap);


        QRect rectangle(-8, -4, 100, 100);

        QPen pen(Qt::blue, 1, Qt::SolidLine);

        scene.addRect(rectangle, pen);

        scene.setBackgroundBrush(Qt::lightGray);


        QGraphicsView vue(&scene);

        vue.setFixedSize(600, 600);

        vue.show();


        return app.exec();

}


