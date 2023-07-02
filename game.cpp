#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  srand(time(0)); // used to change the random num

  int random = rand() % 100 + 20; // random number generation
  int guess = 0;
  int moves = 0;

  do
  {
    moves++;
    cout << "Enter your guess: ";
    cin >> guess;
    if (guess == random)
      cout << "You win! Your answer was correct! You won in " << moves << " Moves" << endl;
    else if (guess < random)
      cout << "Wrong guess! You are too low. " << endl;
    else if (guess > random)
      cout << "Wrong guess! You are too high. " << endl;
  } while (guess != random);
}