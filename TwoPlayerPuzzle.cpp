#include<iostream>
#include<vector>

void showBoard(char*);
void removePiece(char*);

int main(){

    bool winner=false;
    int turn=1;
    char board[13];
    for(int i=1;i<13;i++){
        board[i]=i;
    }

    std::cout<<"Welcome to the Two-Player Puzzle Game!\n"<<std::endl;

    while(!winner){
        bool cleared=true;
        int removals;
        std::cout<<"It\'s player "<<turn<<"\'s turn.\nPlayer "<<turn<<" do you want to remove 1, or 2 pieces?\n"<<std::endl;
        showBoard(board);
        ask:
        std::cin>>removals;
        switch(removals){
            case 1:
                if(turn==1){
                    turn=2;
                }
                else{
                    turn=1;
                }
                std::cout<<"One piece removed.\n"<<std::endl;
                removePiece(board);
                break;
            case 2:
                if(turn==1){
                    turn=2;
                }
                else{
                    turn=1;
                }
                std::cout<<"Two pieces removed.\n"<<std::endl;
                removePiece(board);
                removePiece(board);
                break;
            default:
                std::cout<<"Sorry, you must enter either a 1, or 2."<<std::endl;
                goto ask;
                break;
            for(int i=0;i<13;i++){
                if(board[i]!=' '){
                    cleared=false;
                }
            }
            if(cleared==true){
                winner=true;
            }
        }
    }
    std::cout<<"Congratulations player "<<turn<<", you\'ve won"<<std::endl;
    return 0;
}

void showBoard(char *board){
    for(int i=0;i<13;i++){
        std::cout<<i+1<<"|";
    }
    std::cout<<"\n";
}

void removePiece(char *board){
    bool removed=false;
    while(!removed){
        for(int i=0;i<13;i++){
            if(board[i]!=' '){
                board[i]=' ';
                removed=true;
                break;
            }
        }
    }
}
