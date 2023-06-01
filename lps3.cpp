#include <iostream>
#include <math.h>
using namespace std;
class shape{
    public:
    int length;
    int breadth;
    int height;
};
class rectangle:public shape{
    public:
    rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int p;
    int area(){
        return length*breadth;
    }
    int peri(){
        return 2*(length+breadth);
        p= 2*(length+breadth);
    }
};
class square:public shape{
    public:
    square(int l){
        length=l;
    }
    int area(){
        return length*length;
    }
    int p;
    int peri(){
        return 4*length;
        p=4*length;
    }
};
class triangle:public shape{
    public:
    triangle(int b,int h){
        breadth=b;
        height=h;
    }
    int area(){
        return 0.5*height*breadth;
    }
    int p;
    int peri(){
        return 2* (sqrt((breadth*breadth)/4+(height*height))) + breadth;
        p=2* (sqrt((breadth*breadth)/4+(height*height))) + breadth;
    }
};
class circle:public shape{
    public:
    circle(int l){
        length=l;
    }
    int area(){
        return 3.14*length*length;
    }
    int p;
    int peri(){
        return 2*3.14*length;
        p=2*3.14*length;
    }
};
class parallelogram:public shape{
    public:
    parallelogram(int l,int h,int b){
        length=l;
        height=h;
        breadth=b;
    }
    int area(){
        return height*breadth;
    }
    int p;
    int peri(){
        return 2*(length+height);
        p=2*(length+height);
    }
};
class fencing:public rectangle,public square,public triangle,public circle,public parallelogram{
    int cost(){
        return p*50;
    }
    
};
int main(){
    int l,b,h;
    cout<<"Enter the length:";
    cin>>l;
    cout<<"Enter the breadth:";
    cin>>b;
    cout<<"Enter the height:";
    cin>>h;
    rectangle r(l,b);
    square s(l);
    triangle t(b,h);
    circle c(l);
    parallelogram p(l,b,h);
    cout<<r.area()<<" "<<r.peri()<<endl;
    cout<<s.area()<<" "<<s.peri()<<endl;
    cout<<t.area()<<" "<<t.peri()<<endl;
    cout<<c.area()<<" "<<c.peri()<<endl;
    cout<<p.area()<<" "<<p.peri()<<endl;
    return 0;
}
