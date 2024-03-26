#include <iostream>
#include <math.h>
using namespace std;
class point
{
    int x;
    int y;

public:
    point(int, int);

    void print(void)
    {
        cout << "("<< x << "," << y << ")" << endl;
    }
    friend void calcpoint(point o1, point o2);
};

point ::point(int a,int b)
    {
        x = a;
        y = b;
    }

void calcpoint(point o1, point o2)
{
    float dist;
    dist = sqrt(pow(o2.x-o1.x,2)+pow(o2.y-o1.y,2));
    cout << dist;
}
int main()
{
    point q(2,3);
    q.print();
    point p = point(5,7);
    p.print();
    calcpoint(q,p);
    return 0;
}
