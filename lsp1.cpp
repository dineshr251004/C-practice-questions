#include <iostream>
using namespace std;
class Stack{
    int arr[100];
    static int an;
    public:
    void push(int a);
    void pop();
};
void Stack::push(int a){
    arr[an]=a;
    cout<<"Pushed Element:"<<arr[an]<<endl;
    an++;
}
void Stack::pop(){
    if (an<=0) {   
      cout << "Stack is empty" << endl;
      return;
   }
   
   else
   {   
      for (int c=an;c<an;c++){
         arr[c]=arr[c+1];          
      }
      an=an-1;
      cout<<"Popped element is:"<<arr[an]<<endl;
   }   
}
int Stack::an=0;
int main(void){
    int ch,l,a,i;
    cout<<"1. Push"<<endl<<"2. Pop"<<endl<<"3. Exit"<<endl<<"Enter your choice:";
    cin>>ch;
    Stack s1;
    while (ch!=3){
        if (ch==1){
            cout<<"Enter the element to be pushed:";
            cin>>a;
            s1.push(a);
        }
        else if(ch==2){
            s1.pop();
        }
        cout<<"Enter your choice:";
        cin>>ch;
    }
    return 0;
}
