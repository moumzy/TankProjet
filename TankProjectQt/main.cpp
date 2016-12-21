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

    // CREATION JOUEURS (a ajouter a la scene)
    MyRect * player1 = new MyRect();        // JOUEUR 1
    player1->setRect(0,0,100,100);

    MyRect * player2 = new MyRect();        // JOUEUR 2
    player2->setRect(0,0,100,100);

    // A
    scene->addItem(player1);
    scene->addItem(player2);
    // make rect focusable
    player1->setFlag(QGraphicsItem::ItemIsFocusable);
    player1->setFocus();
    player2->setFlag(QGraphicsItem::ItemIsFocusable);
    player2->setFocus();

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
