#include <iostream>
using namespace std;
class Volume{
    int length;
    int breadth;
    int height;
    public:
    Volume(int l,int b,int h){
        length=l;
        breadth=b;
        height=h;
    }
    int volume(void){
        return length * breadth * height;
    }
};
int main(){
    int l,b,h;
    cout<<"Enter the length of cuboid:"<<endl;
    cin>>l;
    cout<<"Enter the breadth of cuboid:"<<endl;
    cin>>b;
    cout<<"Enter the height of cuboid:"<<endl;
    cin>>h;
    Volume v1(l,b,h);
    cout<<"Volume of the cuboid:"<<v1.volume();
    return 0;
}
