#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
   
    Point()
    {
        x = 0;
        y = 0;
    }


    void setCoordinates(int xValue, int yValue)
    {
        x = xValue;
        y = yValue;
    }

    int get(int x)
    { 
        return x;
    }

    int set(int x)
    {
        int X = x;
    }



    int get(int y)
    {
        return y;
    }

    int set(int y)
    {
        int Y = y;
    }

   
    float distance(const Point& other) 
    {
        return sqrt(pow((other.x - x), 2) + pow((other.y - y), 2));
    }
};

int main()
{
    int a, b;

    cout << "Enter the value of A :" << endl;
    cin >> a;

    cout << "Enter the value of B :" << endl;
    cin >> b;


    Point pointA, pointB;

    pointA.setCoordinates(a, 0); 
    pointB.setCoordinates(0, b); 

    cout << "Distance between A & B : " << pointA.distance(pointB) << endl;

    return 0;
}
