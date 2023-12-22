#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{

    int points = 0;
    char choice;
    int ans1;
    int ans2;
    int ans3;
    int ans4;

    /////////////////////////////////////////////////////////////////
    cout << "Question 1: "; 
    cout << "4+3\n";
    cin >> ans1;  // saving the answer to memory so we can compare it
    if (ans1 == 7) // comparing the answer to 7
    {
        cout << "right answer\n";
        points++; // if the answer is correct we add 1 point 
    }
    else
    {
        cout << "wrong answer\n"; // if not we print wrong answer
    }
    /////////////////////////////////////////////////////////////////
    cout << "Question 2: ";
    cout << "6*6\n";
    cin >> ans2;
    if (ans2 == 36)
    {
        cout << "right answer\n";
        points++;
    }
    else
    {
        cout << "wrong answer\n";
    }
    /////////////////////////////////////////////////////////////////
    cout << "Question 3: ";
    cout << "50-12\n";
    cin >> ans3;
    if (ans3 == 38)
    {
        cout << "right answer\n";
        points++;
    }
    else
    {
        cout << "wrong answer\n";
    }
    /////////////////////////////////////////////////////////////////

    cout << "What is the capital city of Bayern?\n";
    cout << " A: Berlin\n B: Muenchen\n C: Berlin\n D: Hamburg\n";
    cout << "enter answer in capital Letter: \n";
    cin >> choice;  // saving the choice to compare it
    switch (choice) // comparing what letter we typed in to give an response
    {
    case 'A':
        cout << "wrong answer\n";
        break;
    case 'B':
        cout << "right answer\n";
        points++;
        break;
    case 'C':
        cout << "wrong answer\n";
        break;
    case 'D':
        cout << "wrong answer\n";
        break;
    default:
        cout << "invalid input....\n"; // If we entered anything else then A B C D (case sensitive) we print invalid input....

    }
    /////////////////////////////////////////////////////////////////


    cout << "How many states does Germany have?\n";
    cin >> ans4;
    if (ans4 == 16)
    {
        cout << "right answer\n"; 
        points++; 
    }
    else {
        cout << "wrong answer\n";
    }

    /////////////////////////////////////////////////////////////////
    cout << "\n\n";  // printing some empty lines
    cout << "let's get to the evaluation\n\n";
    if (points == 5)
    {
        cout << "congrats you got all 5 points!\n";
    }
    else if (points == 4)
    {
        cout << "congrats, you got 4 points\n";
    }
    else
    {
        cout << "you didn't even get 3 points :(\n";
    }

    /////////////////////////////////////////////////////////////////
    system("pause");
    return 0;
}
