#include <iostream>
#include<fstream>
#include<vector>
using namespace std;

struct Point
{
    double x;
    double y;
    Point(double x, double y) :x{ x }, y{ y } {}
      
};


int main()
{
 /*   vector<Point> pointer{ Point {0,8},Point{2,3},Point {-8,8},Point{-2,-3} };

    ofstream out("point.txt");
    if (out.is_open())
    {   
        int i = 0;
        for (const Point& point:pointer)
        {
           
            out <<"["<<++i<<"]"<< point.x << " " << point.y << endl;
        }
    }
    out.close();*/

    vector<Point> new_point;
    fstream in("point.txt");
    if (in.is_open())
    {
        double x, y;
        while (in>>x>>y)
        {
            new_point.push_back(Point{ x,y });
        }
    }
    in.close();
    int i = 0;
    for (const Point& point1 : new_point)
    {
       
        cout << "[" << ++i << "]    X = " << point1.x << "\t Y = " << point1.y << endl;
    }
    cin.get();

}


