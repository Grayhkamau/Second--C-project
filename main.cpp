#include <iostream>
//Create a C++ program that uses a constructor to define the value for pie=3.142, a function for allowing the user to enter the radius of a circle, a function to compute the area of the circle, and a function to display the area.
using namespace std;
class one{
public:
    double pie;
    one(){
        pie=3.142;
    }
    void radius(){
    cout<<"enter
    }
};
int main()
{
 int x=10;
 int y=456;
 cout<<(x>y)<<endl;
  return 0;

  *Develop a C++ program that allows the user to enter a dimension. This dimension is going to be used as radius to calculate the area of a circle and as a length to calculate the area of a square. Use protected members of a class called Shapes and a child class called s that will contain the functions for computing area of circle and a function for computing area of square. The program should display both areas.
#include <iostream> using namespace std; class circle { public: double pie,area; int r; circle(); void input() { cout<<"Enter the radius of a circle"<<endl; cin>>r; } void computearea() { area=pie*r*r; } void display() { cout<<"Area of circle = "<<area<<endl; } }; circle::circle() { pie=3.142; } int main() { circle circle1; circle1.input(); circle1.computearea(); circle1.display(); return 0; }
