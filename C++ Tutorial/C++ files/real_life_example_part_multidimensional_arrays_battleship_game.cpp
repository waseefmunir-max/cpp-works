#include <iostream>
using namespace std;

int main() {
    int DimSelect = 0;
    int life = 0;
    int hits = 0;
    int score = 0;
    string DiffSelect;

    cout << "***************** BATTLESHIP *****************\n";
    do
    {
        cout << "In which dimention you want to play (1-3)? Answer: ";
        cin >> DimSelect;
        if (DimSelect == 1)
        {
            cout << "Selected Dimension = " << DimSelect << '\n';
            do
            {
                cout << "Choose your difficulty (easy, medium, hard): ";
                cin.ignore(); // Clear the input buffer
                getline(cin, DiffSelect);

                int ShipCount1D[5] = {0, 0, 1, 0, 1};

                if (DiffSelect == "Easy" && DiffSelect == "easy")
                {
                    cout << "Selected difficulty level: Easy\n";
                    int life = 5;
                    int hit = 0;
                    int EleChoice = 0;
                    cout << "Now, the game begins!\n";
                    for (int i = 0; i <= hit; i++)
                    {
                        cout << "Lives left: " << life << ". Number of hits: " << hits << '\n';
                        cout << "Enter the element number you want to hit (0-4): ";
                        cin >> EleChoice;
                        if (EleChoice == 0)
                        {
                            cout << "Miss! Try again.\n";
                            life--;
                            hit++;
                        }
                        else if (EleChoice == 1)
                        {
                            cout << "Miss! Try again.\n";
                            life--;
                            hit++;
                        }
                        else if (EleChoice == 2)
                        {
                            cout << "Hit!\n";
                            hit++;
                        }
                        else if (EleChoice == 3)
                        {
                            cout << "Miss! Try again.\n";
                            life--;
                            hit++;
                        }
                        else if (EleChoice == 4)
                        {
                            cout << "Hit!\n";
                            hit++;
                        }
                        else
                        {
                            cout << "Please choose your element number correctly.\n";
                            cout << "Enter the element number you want to hit (0-4): ";
                            cin >> EleChoice;
                        }
                        
                    }
                    
                    
                }
                

            } while (DiffSelect != "Easy" && DiffSelect != "easy" && DiffSelect != "Medium" && DiffSelect != "medium" && DiffSelect != "Hard" && DiffSelect != "hard");
            
        }
        
    } while (DimSelect >= 3 && DimSelect <= 0);
    

    return 0;
}