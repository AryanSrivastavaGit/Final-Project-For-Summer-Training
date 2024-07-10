#include<iostream>
#include<string>
#include<ctime>
using namespace std;

void Single_Player_Mode(string player1){
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
            cout<<"Enter your position "<<player1<<" : ";
            cin>>position;
            position--;
            while(arr2[position]!=" " || position<0 || position>8){
            cout<<"Enter the rigth position "<<player1<<" : ";
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
            cout<<"Position Entered by Computer is : ";
            srand(time(0));
            while(arr2[position]!=" " || position<0 || position>8){
                position=rand()%9;
            }
            cout<<(position+1)<<endl;
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
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\nCompueter Wins!";
            }
            running=false;
        }
        else if(arr2[3]!=" " && (arr2[3]==arr2[4] && arr2[3]==arr2[5])){
            if(arr2[3]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\nCompueter Wins!";
            }
            running=false;
        }
        else if(arr2[6]!=" " && (arr2[6]==arr2[7] && arr2[6]==arr2[8])){
            if(arr2[6]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\nCompueter Wins!";
            }
            running=false;
        }
        else if(arr2[0]!=" " && (arr2[0]==arr2[3] && arr2[0]==arr2[6])){
            if(arr2[0]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\nCompueter Wins!";
            }
            running=false;
        }
        else if(arr2[1]!=" " && (arr2[1]==arr2[4] && arr2[1]==arr2[7])){
            if(arr2[1]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\nCompueter Wins!";
            }
            running=false;
        }
        else if(arr2[2]!=" " && (arr2[2]==arr2[5] && arr2[2]==arr2[8])){
            if(arr2[2]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\nCompueter Wins!";
            }
            running=false;
        }
        else if(arr2[2]!=" " && (arr2[2]==arr2[4] && arr2[2]==arr2[6])){
            if(arr2[2]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\nCompueter Wins!";
            }
            running=false;
        }
        else if(arr2[0]!=" " && (arr2[0]==arr2[4] && arr2[0]==arr2[8])){
            if(arr2[0]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\nCompueter Wins!";
            }
            running=false;
        }
        else if(arr2[0]!=" " && arr2[1]!=" " && arr2[2]!=" " && arr2[3]!=" " && arr2[4]!=" " && arr2[5]!=" " && arr2[6]!=" " && arr2[7]!=" " && arr2[8]!=" "){
            cout<<"\n\nIt's a Tie!";
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
    cout<<"Thank You For Playing! "<<player1<<endl;
    cout<<"Feel Free To Play Again :)";
}

void Multi_Player_Mode(string player1, string player2){

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
            cout<<"Enter your position "<<player1<<" : ";
            cin>>position;
            position--;
            while(arr2[position]!=" " || position<0 || position>8){
            cout<<"Enter the rigth position "<<player1<<" : ";
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
            cout<<"Enter your position "<<player2<<" : ";
            cin>>position;
            position--;
            while(arr2[position]!=" " || position<0 || position>8){
            cout<<"Enter the rigth position "<<player2<<" : ";
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
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\n"<<player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[3]!=" " && (arr2[3]==arr2[4] && arr2[3]==arr2[5])){
            if(arr2[3]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\n"<<player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[6]!=" " && (arr2[6]==arr2[7] && arr2[6]==arr2[8])){
            if(arr2[6]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\n"<<player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[0]!=" " && (arr2[0]==arr2[3] && arr2[0]==arr2[6])){
            if(arr2[0]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\n"<<player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[1]!=" " && (arr2[1]==arr2[4] && arr2[1]==arr2[7])){
            if(arr2[1]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\n"<<player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[2]!=" " && (arr2[2]==arr2[5] && arr2[2]==arr2[8])){
            if(arr2[2]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\n"<<player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[2]!=" " && (arr2[2]==arr2[4] && arr2[2]==arr2[6])){
            if(arr2[2]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\n"<<player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[0]!=" " && (arr2[0]==arr2[4] && arr2[0]==arr2[8])){
            if(arr2[0]==x){
                cout<<"\n\n"<<player1<<" Win!";
            }else{
                cout<<"\n\n"<<player2<<" Wins!";
            }
            running=false;
        }
        else if(arr2[0]!=" " && arr2[1]!=" " && arr2[2]!=" " && arr2[3]!=" " && arr2[4]!=" " && arr2[5]!=" " && arr2[6]!=" " && arr2[7]!=" " && arr2[8]!=" "){
            cout<<"\n\nIt's a Tie!";
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
    cout<<"Thank You For Playing! "<<player1<<" and "<<player2<<endl;
    cout<<"Feel Free To Play Again :)";

}

int main(){

    cout<<"\n";
    cout<<"Welcome To TicTacToe Game!\n\n";

    string mode;
    cout<<"Press button 1 to Play 'Single-Player-Mode' or Press button 2 to Play 'Multi-Player-Mode' : ";
    cin>>mode;

    while(true){

        if(mode=="1"){
            string name_player1;
            cout<<"Enter Your Name Player 1 : ";
            getline(cin,name_player1);
            getline(cin,name_player1);
            cout<<name_player1<<" got 'X'"<<endl;
            cout<<"Computer got 'O'\n"<<endl;
            Single_Player_Mode(name_player1);
            break;

        }else if(mode=="2"){
            string name_player1; 
            string name_player2;
            cout<<"Enter Your Name Player 1 : ";
            getline(cin,name_player1);
            getline(cin,name_player1);
            cout<<name_player1<<" got 'X'"<<endl;
            cout<<"Enter Your Name Player 2 : ";
            getline(cin,name_player2);
            cout<<name_player2<<" got 'O'\n"<<endl;
            Multi_Player_Mode(name_player1,name_player2);
            break;

        }else{
            cout<<"Please enter the right button : ";
            cin>>mode;
        }

    }
    
    return 0;

}