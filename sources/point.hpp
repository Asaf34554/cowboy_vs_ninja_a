#pragma once
namespace ariel{


    class Point{
        double __x;
        double __y;


        public:
        Point(double x,double y):
            __x(x),__y(y){}

        double getX(){
            return __x;
        }
        double getY(){
            return __y;
        }

        void setX(double new_x){
            __x = new_x;
        }
        void setY(double new_y){
            __y = new_y;
        }

        double distance(Point dst);
        void print();
        Point moveTowards(Point src,Point dst,double dist);
    };

}