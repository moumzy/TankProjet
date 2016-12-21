#ifndef POINT_H
#define POINT_H

#include <QPoint>

class Point: public QPoint{

public:
    QPoint a;
    int x;
    int y;


    // constructeurs
    Point(){
        this->x=a.x();
        this->y=a.y();
    }

    Point(int x1,int y1){

        this->x=x1;
        this->y=y1;
    }
    Point(const Point& p1){

        this->x=p1.x;
        this->y=p1.y;
    }
//

private:



};




#endif // POINT_H
