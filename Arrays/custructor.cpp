#include <iostream>
using namespace std;

class Rectangle{

    public:

    int length, width;
    Rectangle(int l, int w){
        length = l;
        width = w;
    }

    void printArea()
    {
        cout<<length * width <<endl;
    }

};
int main(){
    Rectangle R1(7, 3);

    R1.printArea();

    



}