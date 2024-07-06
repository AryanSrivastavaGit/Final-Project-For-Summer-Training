#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"\n";
    cout<<"Welcome To TicTacToe Game!\n\n";
    string name_player1; 
    string name_player2;
    cout<<"Enter Your Name Player 1 : ";
    getline(cin,name_player1);
    cout<<name_player1<<" got 'X'\n"<<endl;
    cout<<"Enter Your Name Player 2 : ";
    getline(cin,name_player2);
    cout<<name_player2<<" got 'O'\n"<<endl;

    string arr2[9]={" ", " ", " ", " ", " ", " ", " ", " ", " "};
    cout<<"  |   | "<<endl;
    cout<<arr2[0]<<" | "<<arr2[1]<<" | "<<arr2[2]<<endl;
    cout<<"__|___|__"<<endl;
    cout<<"  |   | "<<endl;
    cout<<arr2[3]<<" | "<<arr2[4]<<" | "<<arr2[5]<<endl;
    cout<<"__|___|__"<<endl;
    cout<<"  |   | "<<endl;
    cout<<arr2[6]<<" | "<<arr2[7]<<" | "<<arr2[8]<<endl;
    cout<<"  |   | "<<endl;

    bool running = true;
    bool chance = true;
    int position;
    string x = "X";
    string o = "O";
    while(running){
        if(chance == true){
            cout<<"Enter your position "<<name_player1<<" : ";
            cin>>position;
            position--;
            while(arr2[position]!=" " || position<0 || position>8){
            cout<<"Enter the rigth position "<<name_player1<<" : ";
            cin>>position;
            position--;              
            }
            arr2[position]=x;
            cout<<"  |   | "<<endl;
            cout<<arr2[0]<<" | "<<arr2[1]<<" | "<<arr2[2]<<endl;
            cout<<"__|___|__"<<endl;
            cout<<"  |   | "<<endl;
            cout<<arr2[3]<<" | "<<arr2[4]<<" | "<<arr2[5]<<endl;
            cout<<"__|___|__"<<endl;
            cout<<"  |   | "<<endl;
            cout<<arr2[6]<<" | "<<arr2[7]<<" | "<<arr2[8]<<endl;
            cout<<"  |   | "<<endl;
            chance = false;
        }else{
            cout<<"Enter your position "<<name_player2<<" : ";
            cin>>position;
            position--;
            while(arr2[position]!=" " || position<0 || position>8){
            cout<<"Enter the rigth position "<<name_player2<<" : ";
            cin>>position;
            position--;              
            }
            arr2[position]=o;
            cout<<"  |   | "<<endl;
            cout<<arr2[0]<<" | "<<arr2[1]<<" | "<<arr2[2]<<endl;
            cout<<"__|___|__"<<endl;
            cout<<"  |   | "<<endl;
            cout<<arr2[3]<<" | "<<arr2[4]<<" | "<<arr2[5]<<endl;
            cout<<"__|___|__"<<endl;
            cout<<"  |   | "<<endl;
            cout<<arr2[6]<<" | "<<arr2[7]<<" | "<<arr2[8]<<endl;
            cout<<"  |   | "<<endl;
            chance = true;
        }
        if(arr2[0]!=" " && (arr2[0]==arr2[1] && arr2[0]==arr2[2])){
            if(arr2[0]==x){
                cout<<"\n\n"<<name_player1<<" Win!";
            }else{
                cout<<"\n\n"<<name_player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[3]!=" " && (arr2[3]==arr2[4] && arr2[3]==arr2[5])){
            if(arr2[3]==x){
                cout<<"\n\n"<<name_player1<<" Win!";
            }else{
                cout<<"\n\n"<<name_player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[6]!=" " && (arr2[6]==arr2[7] && arr2[6]==arr2[8])){
            if(arr2[6]==x){
                cout<<"\n\n"<<name_player1<<" Win!";
            }else{
                cout<<"\n\n"<<name_player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[0]!=" " && (arr2[0]==arr2[3] && arr2[0]==arr2[6])){
            if(arr2[0]==x){
                cout<<"\n\n"<<name_player1<<" Win!";
            }else{
                cout<<"\n\n"<<name_player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[1]!=" " && (arr2[1]==arr2[4] && arr2[1]==arr2[7])){
            if(arr2[1]==x){
                cout<<"\n\n"<<name_player1<<" Win!";
            }else{
                cout<<"\n\n"<<name_player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[2]!=" " && (arr2[2]==arr2[5] && arr2[2]==arr2[8])){
            if(arr2[2]==x){
                cout<<"\n\n"<<name_player1<<" Win!";
            }else{
                cout<<"\n\n"<<name_player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[2]!=" " && (arr2[2]==arr2[4] && arr2[2]==arr2[6])){
            if(arr2[2]==x){
                cout<<"\n\n"<<name_player1<<" Win!";
            }else{
                cout<<"\n\n"<<name_player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[0]!=" " && (arr2[0]==arr2[4] && arr2[0]==arr2[8])){
            if(arr2[0]==x){
                cout<<"\n\n"<<name_player1<<" Win!";
            }else{
                cout<<"\n\n"<<name_player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[0]!=" " && arr2[1]!=" " && arr2[2]!=" " && arr2[3]!=" " && arr2[4]!=" " && arr2[5]!=" " && arr2[6]!=" " && arr2[7]!=" " && arr2[8]!=" "){
            cout<<"\nIt's a Tie!";
            running=false;
        }
    }

    cout<<"\n";
    cout<<"  |   | "<<endl;
    cout<<arr2[0]<<" | "<<arr2[1]<<" | "<<arr2[2]<<endl;
    cout<<"__|___|__"<<endl;
    cout<<"  |   | "<<endl;
    cout<<arr2[3]<<" | "<<arr2[4]<<" | "<<arr2[5]<<endl;
    cout<<"__|___|__"<<endl;
    cout<<"  |   | "<<endl;
    cout<<arr2[6]<<" | "<<arr2[7]<<" | "<<arr2[8]<<endl;
    cout<<"  |   | "<<endl;
    cout<<"Thank You For Playing! "<<name_player1<<" and "<<name_player2<<endl;
    cout<<"Feel Free To Play Again :)";

    return 0;

}