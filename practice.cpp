#include <iostream>
using namespace std;
#include<string>
#include<vector>
    class user{
        private:
        int id;
        string password;
        public:
        string username;
        user(int id){
           this->id=id;
        };
       string getPassword(){
            return password;

        };
        void setpassword(string password){
            this->password=password;
        }

      };
 
int main(){
    user user1(101);
    user1.username="ruksana";
    user1.setpassword("Allah2026@!");
    cout<<"username= "<<user1.username<<endl;
    cout<<"passsword = "<<user1.getPassword()<<endl;
    return 0;




}