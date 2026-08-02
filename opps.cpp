#include<iostream>
using namespace std;
#include<vector>
class car{
        string name;
        string color;
        public:
        car(string name, string color){
            cout<<"constructure is callled ";
            this->name=name;
            this->color=color;
            
            
        }
        void start(){
            cout<<"without prammeter now this is gonna strt";

        }
        void stop(){
            cout<<"with parameter  now this care is gonna stop";
        }
        string getName(){
            return name;
        }
    };

    class animal{
        public:
        string color ;
        void eat(){
            cout<<"eats"<<endl;

        }
        void breath(){
            cout<<"breath"<<endl;
        }
  
    };
class fish :public animal{
    public:
    int fins;
   
    void swim(){
         eat();
        cout<<"swims"<<endl;
    }

};


int main(){
//     car c1("maruti 800","Blue");
//     car c();
// cout<<"car name is called"<<c1.getName()<<endl;
//     return 0;
fish f1;
f1.fins=3;
cout<<f1.fins<<endl;
f1.swim();
f1.eat();
f1.breath();

   
}