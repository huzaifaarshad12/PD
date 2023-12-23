#include<iostream>
#include<windows.h>
using namespace std;
void printboard(char board[][27]);
void printBorder(char board[][27]);
void move_player(char board[][27],char pos);
void move_enemy(char board[][27],char enemy_type,char move);
void fire(char board[][27]);
void move_fire(char board[][27],int move);
void remove_fire(char board[][27]);
bool collision(char array[][27]);
void move_fire(char board[][27]);
int random(int min, int max);
int main()
{
    char board[11][27]={"##########################",
                        "#                   x    #",
                        "#      o                 #",
                        "#                        #",
                        "#                        #",
                        "#                        #",
                        "#                        #",
                        "#           p            #",
                        "#                        #",
                        "##########################"};
bool bullet_fire= false;
printboard(board);
while(true)
{
        if(GetAsyncKeyState(VK_LEFT))
        {
            move_player(board, 'L');
            printboard(board);
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            move_player(board, 'R');
            printboard(board);
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            if(!bullet_fire)
            {
                fire(board);    
                printboard(board);       
                bullet_fire = true;
            }
        }
        if (bullet_fire)  /// if true then move fire
        {
            if (collision(board))
            {
                move_fire(board);
                printboard(board);
            }
            else
            {
                bullet_fire = false;
                printboard(board);
            }
        }
        int a=random(0,1);
        if (a==0)
        {
            move_enemy(board, 'o', 'R');
            move_enemy(board, 'x', 'L');
            printboard(board);
        }
        else
        {
            move_enemy(board, 'o', 'L');
            move_enemy(board, 'x', 'R');
            printboard(board);
        } 
        if(GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        }
    }
    return 0;
}
int random(int min, int max)
{
    return rand() % (max-min+1)+ min;
}
void move_enemy(char board[][27],char enemy_type,char move)
{
    for(int i=0;i<11;i++)
    {
        for(int j=0 ;j<27;j++)
        {
            if(board[i][j]==enemy_type)
            {
                if(move=='R')               //right
                {
                    if(board[i][j] == enemy_type && board[i][j+1]==' ')
                    {
                        board[i][j] = ' ';
                        board[i][j+1] = enemy_type;
                        break;
                    }
                }
                else if (move == 'L')
                {
                    if(board[i][j-1] == ' ' && board[i][j-1] != '#')
                    {
                        board[i][j] = ' ';
                        board[i][j-1] = enemy_type;
                        break;
                    }

                }
            }
        }
    }
}
void move_player(char board[][27],char pos)
{
    for(int i=0; i<11;i++)
    {
        for(int j=0 ;j<27;j++)
        {
            if(board[i][j] == 'p')
            {
                if(pos == 'R')       //right
                {
                    if(j + 1 < 27 && board[i][j+1] == ' ')
                    {
                        board[i][j] = ' ';
                        board[i][j+1] = 'p';
                        break;
                    }
                }
                else if (pos == 'L')           //left
                {
                    if(board[i][j-1] == ' ')
                    {
                        board[i][j] = ' ';
                        board[i][j-1] = 'p';
                        break;
                    }

                }
            }    
        }
    }
}
void fire(char board[][27])
{
    for(int i=0; i<11; i++)
    {
        for(int j=0; j<27; j++)
        {
            if(board[i][j] == 'p')
            {
                board[i-1][j] = '.';
            }
        }
    }
}

void move_fire(char board[][27],int move)
{
    while(move!=0)
    {
        for(int i=0; i<11; i++)
        {
            for(int j=0; j<27; j++)
            {
                if(board[i][j] == '.')
                {
                    board[i][j] = ' ';
                    board[i-1][j] = '.';
                }
            }
        }
        move--;
    }
}
void move_fire(char board[][27])
{
    for(int i=0; i<11; i++)
    {
        for(int j=0; j<27; j++)
        {
            if(board[i][j] == '.')
            {
                board[i][j] = ' ';
                board[i-1][j] = '.';

            }
        }
    }
}
void remove_fire(char board[][27])
{
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 27; j++)
        {
            if (board[i][j] == '.')
            {
                board[i][j] = ' ';
                break;
            }
        }
    }
}
void printBorder(char board[][27])    //print only border
{
    system("cls");
    for(int i=0; i<11;i++)
    {
        for(int j=0; j<27; j++)
        {
            if(board[i][j] == '#' || board[i][j] == ' ')    //if the element is # and ' ' then print it
            {
                cout<< board[i][j];   
            }
            else
            {
                cout<< ' ';
            }
            cout<<endl;
        }
    }
}
void printboard(char board[][27])
{
    string muzer= "";
    for(int i=0; i<11; i++)
    {
        for(int j=0; j<27; j++)
        {                                  //storing each element in muzer variable
            muzer+= board[i][j]; 
        }
        muzer += "\n";
    }
    system("cls");
    cout<< muzer; //storing muzer variable which has board
}
bool collision(char array[][27])
{
    for(int i=0; i<11; i++)
    {
        for(int j=0; j<27; j++)
        {
            if(array[i][j] == '.' && array[i-1][j] == '#')
            {
                array[i][j] = ' ';
                return false;   //collision  detected
            }
        }
    }
    return true; //No  collision detected
}