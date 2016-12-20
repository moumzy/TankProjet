#include <QApplication>
#include "MyRect.h"
#include <QGraphicsScene>
#include <QGraphicsView>

/*
Tutorial Topics:
-QTimer
-signals and slots (connect function)
-QObject and Q_OBJECT macro
*/

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    // create a scene
    QGraphicsScene * scene = new QGraphicsScene();

    // create an item to add to the scene
    MyRect * player1 = new MyRect();
    player1->setRect(0,0,100,100); // change the rect from 0x0 (default) to 100x100 pixels

    // add the item to the scene
    scene->addItem(player1);

    // make rect focusable
    player1->setFlag(QGraphicsItem::ItemIsFocusable);
    player1->setFocus();

    // create a view to visualize the scene
    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // show the view
    view->show();
    view->setFixedSize(800,600);       //taille de la fenetre
    scene->setSceneRect(0,0,800, 600); // position INITIALE du rectangle

    //==new code==


    return a.exec();
}
