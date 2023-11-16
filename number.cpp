#ifdef helloo
this is  a number guessing game
their are 3 levels in this
easy has 10 tries
medium has 6 tries this is a test edit
hard has 3 tries
their is a guess_counter that decrements in each iteration and when it reaches 0 you game is over
the sec_num stores the number to be guessed
guess variable is where the user will enter their guesses
#endif // helloo
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
    srand(time(NULL));
    cout<<"  ---- ---- ----WELCOME TO THE NUMBER GUESSING GAME!!!---- ----- ----"<<endl;
    cout<<"CHOOSE THE RANGE TILL WHICH YOU WANT TO GENERATE THE NUMBERS UPTO:"<<endl;
    int range;//we wil give the user the option to enter the range till where he wishes to guess
    cin>>range;
    int sec_num=rand()%range+1; // this is the secret number
    cout<<sec_num<<endl;
    cout<<"YOU WILL HAVE 3 DIFFICULTY LEVELS TO CHOOSE FROM"<<endl;
    cout<<"PRESS: \n 1) FOR EASY \n 2) FOR MEDIUM \n 3) FOR DIFFICULT \n 4) TO RESTART THE GAME"<<endl;
    /* the user will be given 10 choices in the easy level
        6 choices in the medium level
        and 3 choices in the hard level
    */
    int level_choice;
    cin>>level_choice;
    switch(level_choice)
    {
    case 1:                                         //EASY
        cout<<" ----------YOU WILL HAVE 10 TRIES TO GUESS THE CORRECT NUMBER"<<range<<"-----------"<<endl;
        cout<<"                         ALRIGHT NOW START GUESSING                     "<<endl;
        for(int i=1;i<=10;i++)
        {
            int guess_count=10-i;
            cout<<"Guess "<<i<<endl;
            int guess;
            while (!(cin >> guess))
            {
                // Handle non-integer input
                cout << "Invalid input. Please enter a valid integer." << endl;
                cin.clear();            // Clear the error flag

            }

            while(guess!=sec_num)
            {
                if(guess>range)
                {
                    cout<<"OUT OF RANGE!!"<<endl;
                    cout<<"enter within the range next time"<<endl;
                    break;
                }
                if(guess>sec_num)
                {
                    cout<<"Guess a bit lower"<<endl;
                    cout<<"You have "<<guess_count<<" choices left"<<endl;
                    break;
                }
                else
                {
                    cout<<"Guess a bit higher"<<endl;
                    cout<<"You have "<<guess_count<<" choices left"<<endl;
                    break;

                }


                if(guess_count==0){
                        cout<<"YOU LOST THE GAME \n BETTER LUCK NEXT TIME"<<endl;
                    }


        }
        if(guess==sec_num)
        {
            cout<<"YOU WON !!!"<<endl;
            break;
        }
        }
        break;
    case 2:                                         //MEDIUM
        cout<<" ----------YOU WILL HAVE 6 TRIES TO GUESS THE CORRECT NUMBER"<<range<<"-----------"<<endl;
        cout<<"                         ALRIGHT NOW START GUESSING                "<<endl;
        for(int i=1;i<=6;i++)
        {
            int guess_count=6-i;
            cout<<"Guess "<<i<<endl;
            int guess;
            while (!(cin >> guess))
            {
                // Handle non-integer input
                cout << "Invalid input. Please enter a valid integer." << endl;
                cin.clear();            // Clear the error flag

            }

            while(guess!=sec_num && guess!='65')
            {
                if(guess>range)
                {
                    cout<<"OUT OF RANGE!!"<<endl;
                    cout<<"enter within the range next time"<<endl;
                    break;
                }
                if(guess>sec_num)
                {
                    cout<<"Guess a bit lower"<<endl;
                    cout<<"You have "<<guess_count<<" choices left"<<endl;
                    break;
                }
                else
                {
                    cout<<"Guess a bit higher"<<endl;
                    cout<<"You have "<<guess_count<<" choices left"<<endl;
                    break;
                }


                if(guess_count=0){
                        cout<<"YOU LOST THE GAME \n BETTER LUCK NEXT TIME"<<endl;
                    }
            }
            if(guess==sec_num)
        {
            cout<<"YOU WON!!!"<<endl;
            break;
        }
        }
        break;
    case 3:                                          //HARD
        cout<<" ----------YOU WILL HAVE 3 TRIES TO GUESS THE CORRECT NUMBER"<<range<<"-----------"<<endl;
        cout<<"                   ALRIGHT NOW START GUESSING                "<<endl;
        for(int i=1;i<=3;i++)
        {
            int guess_count=3-i;
            cout<<"Guess "<<i<<endl;
            int guess;
            while (!(cin >> guess))
            {
                // Handle non-integer input
                cout << "Invalid input. Please enter a valid integer." << endl;
                cin.clear();            // Clear the error flag

            }

            while(guess!=sec_num)
            {
                if(guess>range)
                {
                    cout<<"OUT OF RANGE!!"<<endl;
                    cout<<"enter within the range next time"<<endl;
                    break;
                }
                if(guess>sec_num)
                {
                    cout<<"Guess a bit lower"<<endl;
                    cout<<"You have "<<guess_count<<" choices left"<<endl;
                    break;
                }


                else
                {
                    cout<<"Guess a bit higher"<<endl;
                    cout<<"You have "<<guess_count<<" choices left"<<endl;
                    break;

                }



            }
            if(guess_count=0){
                    cout<<"YOU LOST THE GAME \n BETTER LUCK NEXT TIME"<<endl;
                    break;
                    }

            if(guess==sec_num)
        {
            cout<<"YOU WON!!!"<<endl;
            break;
        }

        }
        break;
    case 4:
        cout<<"Good luck playing again"<<endl;
        break;
    default:
        cout<<"please enter a valid option";
    }
    return 0;

}
