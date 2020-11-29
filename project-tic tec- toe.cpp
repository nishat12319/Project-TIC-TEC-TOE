/**Importing The Inbuild Libraries In CPP **/
#include <iostream>
#include<stdlib.h>
using namespace std;

/** String Array For Board**/
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

/**Function Declaration**/
int checkwin();
void board();

/****Program Main Method*****/
int main()
 {
	int player = 1,i,choice;

    char mark;
    do
    {
        board();
        player=(player%2)?1:2;

/**Choose The Player And Enter A Number**/
        cout << " \tPlayer " << player << ", enter a number:  ";
        cin >> choice;
/****player the box selection****/

        mark=(player == 1) ? 'X' : 'Y';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
   }

    while(i==-1);
    board();
    if(i==1){

        cout<<"\t\t\t==>\aPlayer "<<--player<<"\n\t\t\t cougutunation to  win ";
    }
    else{
        cout<<"\t\t\t==>hoooo\aGame draw\n\t\t\tPlay Again\t\t\t";
    }

    cin.ignore();
    cin.get();
    return 0;
 }



/*****************
Function to Return Game Status
    1 For game Is Over With Result
   -1 For Game Is Progress
    0 For Game Is Over And No Result
*****************/



int checkwin()

  {

  /** ROW WISE **/
      if (square[1] == square[2] && square[2] == square[3])

           return 1;
      else if (square[4] == square[5] && square[5] == square[6])

           return 1;
      else if (square[7] == square[8] && square[8] == square[9])

           return 1;

  /** COLUMN WISE **/
      else if (square[1] == square[4] && square[4] == square[7])

           return 1;
      else if (square[2] == square[5] && square[5] == square[8])

           return 1;
      else if (square[3] == square[6] && square[6] == square[9])

           return 1;
   /** CROSSING WISE **/
      else if (square[1] == square[5] && square[5] == square[9])

           return 1;
      else if (square[3] == square[5] && square[5] == square[7])

           return 1;
      else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
                    && square[4] != '4' && square[5] != '5' && square[6] != '6'
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

           return 0;
      else
           return -1;

}


/***************
Function To Draw Board Of TIC TEC TOE With Player Mark
***************/

void board()
{

    system("cls");
    cout <<"\n\n\t\t\t\t\t===============Welcome=============\t\t" << endl;
    cout << "\n\n\t\t\t\t\t\t\t\b ****TIC TEC TOE**** \t\t\n\n";

    cout << "\t\t##Player 1 [X]   \n\t\t##Player 2 [Y]" << endl << endl;
    cout << endl;

    cout << "\t\t\t\t\t      |    |     " << endl;
    cout << "\t\t\t\t\t  " << square[1] << "   |  " << square[2] << " |  " << square[3] << endl;

    cout<<"\t\t\t\t\t  ____|____|____\n";
    cout<<"\t\t\t\t\t      |    |    \n";

    cout << "\t\t\t\t\t  " << square[4] << "   |  " << square[5] << " |  " << square[6] << endl;

    cout<<"\t\t\t\t\t  ____|____|____\n";
    cout<<"\t\t\t\t\t      |    |    \n";
    cout << "\t\t\t\t\t  " << square[7] << "   |  " << square[8] << " |  " << square[9] << endl;

    cout << "\t\t\t\t\t      |    |     " << endl << endl;

}

                       /***** END OF PROJECT******/
