#include<bits/stdc++.h>
using namespace std;

class space{

    int x,y,z;
    string dir;
    public:
    space(){
        x=0;
        y=0;
        z=0;
        dir="N";
    }
    
    void move( string direction){
        if(dir=="U"||dir=="D"){
            if(direction=="f"){
                z++;
            }
            else if(direction=="b"){
                z--;
            }
        }
        else if(dir=="N"||dir=="S"){
            if(direction=="f"){
                y++;
            }
            else if(direction=="b"){
                y--;
            }
        }
        else if(dir=="E"||dir==""){
            if(direction=="f"){
                x++;
            }
            else if(direction=="b"){
                x--;
            }
        }

    }
    void turn(string direction){
        if(direction=="l")
        {
            if(dir=="N")
               dir="W";
            else if(dir=="W")
               dir="S"; 
            else if(dir=="S")
               dir="E"; 
            else if(dir=="E")
               dir="N"; 
        }
        else if(direction=="r"){
        {
            if(dir=="N")
               dir="E";
            else if(dir=="E")
                dir="S"; 
            else if(dir=="S")
               dir="W"; 
            else if(dir=="W")
                dir="N"; 
        }
        }

    }
    void action (string c)
    {
        if(c=="l" || c=="r")
        {
            turn(c);
        }
        else if(c=="f" || c=="b")
        {
            move(c);
        }
    }
    void display(){
        cout<<"position "<<x<<y<<z<<endl;
        cout<<"Direction "<<dir<<endl;
    }

};
int main(){
    space chandrayan;
    string commands[] ={"f","b","b","r","l"};
    for (string c : commands)
    {
        chandrayan.action(c);
    }
    chandrayan.display();

    return 0;
}