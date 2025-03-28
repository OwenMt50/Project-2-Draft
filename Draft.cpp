//Created by Owen Martin
//Date: 3/27/25
//Description: Draft of Project #2, will finish this description in final

#include <iostream>
#include <cmath>

using namespace std;

    void multiply(int acres, int price){ //multiply function for bad ending
        cout<<acres<<"x"<<price<<" = ""$"<<acres*price<<"\n";

    }

    void possibility(string vertical, string horizontal){ //if function determines ending from user choice
        if(vertical < horizontal){
        cout<<"You chose to mine a "<<vertical<<".\n";
        }else if(vertical > horizontal){
        cout<<"You have chosen to "<<horizontal<<".\n";
        }
    }

int main(){

    int acres = 0;
    int price = 750;
    float mine = 0;
    string vertical = "vertical mine";
    string horizontal = "strip mine";

    cout<<"You have just bought a plot of land that has been rumored to be hiding gold.\n"; //start of adventure
    cout<<"With your pickaxe, and determination to strike it rich, will you find this supposed gold in your newly acquired land?\n";
    cout<<"Enter the amount of land you have bought in acres\n";
    cin>>acres;

    cout<<"Do you want to mine vertically, or strip mine?\n"; //user choice of mine
    cin>>mine;
    possibility(vertical, horizontal); //call for if function

    if (vertical<horizontal){ //if statement that determines ending from input of int main, and possibility function
        cout<<"Strike it rich ending."; //good ending, modulo showing how much time you mined will be added to this, time mined will be pre-determined
    }else if(vertical>horizontal){ 
        cout<<"Bad ending."; //bankrupt ending
    }

}
