#include "Point2D.h"
 
Point2D::Point2D()
{   
    X = 0;  
    Y = 0;
}
Point2D::Point2D(int x, int y)
{   
    X = x;   
    Y = y;
}
 
int Point2D::getX()
{
    return X;
} 
 
int Point2D::getY()
{
    return Y;
} 
Point2D Point2D::operator+(Point2D &p)
{
    int x = X + p.X;
    int y = Y + p.Y;
    Point2D tmp(x, y);    
    return tmp;
}
Point2D Point2D::operator-(Point2D &p)
{    
    int x = X - p.X;
    int y = Y - p.Y;
    Point2D tmp(x, y);      
    return tmp;
}

//重載乘法
Point2D Point2D::operator*(Point2D &p)
{
	int x = X * p.X;
    int y = Y * p.Y;
    Point2D tmp(x, y);      
    return tmp;
}

//重載+運算子 令x及y軸各加上一數字
Point2D Point2D::operator+(int num){
	int x = X + num;
    int y = Y + num;
    Point2D tmp(x, y);      
    return tmp;
}
            
 

