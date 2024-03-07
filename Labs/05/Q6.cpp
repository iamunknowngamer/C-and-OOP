// Syed Saif ur Rehman Shah (23k-0032)

#include "iostream"
using namespace std;

class Graphics_rendering_engine{

    public:
    void render(){
        cout<<"Rendering Graphics..."<<endl;
    }
};

class Input_Handler{

    public:
    void handle(){
        cout<<"Input is being managed properly..."<<endl;
    }
};

class Physics_Engine{

    public:
    void engine(){
        cout<<"Game physics working properly..."<<endl;
    }
};

class Game_Engine{
    Graphics_rendering_engine gre;
    Input_Handler ih;
    Physics_Engine pe;

    public:

    void Run(){
        gre.render();
        ih.handle();
        pe.engine();
    }
};

int main(){

    Game_Engine ge;
    ge.Run();
    
}
