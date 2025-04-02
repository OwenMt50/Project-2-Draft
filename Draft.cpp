//Created by Owen Martin
//Date: 3/27/25
//Description: Draft of Project #2, will finish this description in final

#include <iostream>
#include <cmath>

using namespace std;

int acres = 0;
int price = 750;

    int multiply(int acres, int price){ //multiply function for bad ending
        return acres*price;
    }

    void possibility(string vertical, string strip){ //if function determines ending from user choice
        if (vertical > strip){ 
            cout<<"Your whole body is aching of pain, and it felt like you have been mining for an eternity.\n"; 
            cout<<"You look down at your wrist watch to see it is "<<13%12<<" AM.\n";
            cout<<"'I could fall over any second now, I'm way too tired, but I have to find this gold.'" " You say to yourself.\n";
            cout<<"And with all the strength you have left, you strike into the rock. One. Last. Time.\n";
            cout<<"You don't hear the usual rock crumble from your pickaxe, instead a loud 'TING' and you shine your light onto what you just hit a moment ago.\n";
            cout<<"Congradulations, you have just struck gold! You are now destined to be the richest man West of the Mississippi.\n";
            cout<<"+=======+\n";
            cout<<"EUREKA!!!\n";
            cout<<"+=======+\n";
        }else if(vertical < strip){ 
            cout<<"You mined for what felt like an eternity...\n"; 
            cout<<"All that is found within your strip mine are some copper, and low quality silver veins.\n";
            cout<<"'I bought all this land for some crappy metals? I knew it I should've stayed in the big city than try my luck!'\n";
            cout<<"After several hours of rest, you decide to give up, and sell your land to another prospector.\n";
            cout<<"You sold your land for $"<<multiply(acres, price)<<"\n";
            cout<<"__________\n";
            cout<<"GAME OVER\n";
            cout<<"‾‾‾‾‾‾‾‾‾‾\n";
        }
    }

int main(){


    float mine = 0;
    string vertical = "vertical mine";
    string strip = "strip mine";

    cout<<"You have just bought a plot of land that has been rumored to be hiding gold.\n"; //start of adventure
    cout<<"Alone with your pickaxe, and sheer determination to strike it rich, will you find this supposed gold in your newly acquired land?\n";
    cout<<"Enter the amount of land you have bought in acres\n";
    cin>>acres;


    cout<<"Do you want to mine vertically, or strip mine? (To choose you must input either vertical, or strip)\n"; //user choice of mine
    cin>>mine;

    if(vertical > strip){
        cout<<"*You chose to mine a "<<vertical<<"*\n";
        }else if(vertical < strip){
        cout<<"*You have chosen to "<<strip<<"*\n";
    }
    
    possibility(vertical, strip); //call for if function



}
