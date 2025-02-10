#include<iostream>
using namespace std;

int main () {
    int genre, director, movie;

    cout << "Select the genre: (1) Animation (2) Adventure" << endl;
    cin >> genre;

    switch (genre) {
        case (1):
            cout << "Select the director: (1) Pete Docter (2) Brad Bird (3) Andrew Stanton" << endl;
            cin >> director;
                switch (director){
                //Pete Docter
                    case (1):
                        cout << "Select the movie: (1) Monsters, Inc. (2) Inside Out" << endl;
                        cin >> movie;
                        switch (movie){
                            case (1):
                                cout << "You have reserved the movie: Monsters, Inc." << endl;
                                break;
                            case (2):
                                cout << "You have reserved the movie: Inside Out" << endl;
                                break;
                            default:
                                cout << "Please enter a valid input." << endl;
                        }
                        break;
                
                //Brad Bird
                    case (2):
                        cout << "Select the movie: (1) The Incredibles (2) Ratatouille" << endl;
                        cin >> movie;
                        switch (movie){
                            case (1):
                                cout << "You have reserved the movie: The Incredibles" << endl;
                                break;
                            case (2):
                                cout << "You have reserved the movie: Ratatouille" << endl;
                                break;
                            default:
                                cout << "Please enter a valid input." << endl;
                        }
                        break;
                    case (3):
                        cout << "Select the movie: (1) Finding Nemo (2) WALL-E" << endl;
                        cin >> movie;
                        switch (movie){
                            case (1):
                                cout << "You have reserved the movie: Finding Nemo" << endl;
                                break;
                            case (2):
                                cout << "You have reserved the movie: WALL-E" << endl;
                                break;
                            default:
                                cout << "Please enter a valid input." << endl;
                        }
                        break;
                    default: 
                        cout << "Please enter valid input" << endl;
                }
            break;
        case (2):
            cout << "Select the director: (1) Steven Spielberg (2) Jon Favreau (3) Robert Zemeckis" << endl;
            cin >> director;
                switch (director){
                    case (1):
                        cout << "Select the movie: (1) E.T. the Extra-Terrestrial (2) The BFG" << endl;
                        cin >> movie;
                        switch (movie){
                            case (1):
                                cout << "You have reserved the movie: E.T. the Extra-Terrestrial" << endl;
                                break;
                            case (2):
                                cout << "You have reserved the movie: The BFG" << endl;
                                break;
                            default:
                                cout << "Please enter a valid input." << endl;
                        }
                        break;
                    case (2):
                        cout << "Select the movie: (1) The Jungle Book (2016) (2) Elf" << endl;
                        cin >> movie;
                        switch (movie){
                            case (1):
                                cout << "You have reserved the movie: The Jungle Book (2016)" << endl;
                                break;
                            case (2):
                                cout << "You have reserved the movie: Elf" << endl;
                                break;
                            default:
                                cout << "Please enter a valid input." << endl;
                        }
                        break;
                    case (3):
                        cout << "Select the movie: (1) Back to the Future (2) Who Framed Roger Rabbit" << endl;
                        cin >> movie;
                        switch (movie){
                            case (1):
                                cout << "You have reserved the movie: Back to the Future" << endl;
                                break;
                            case (2):
                                cout << "You have reserved the movie: Who Framed Roger Rabbit" << endl;
                                break;
                            default:
                                cout << "Please enter a valid input." << endl;
                        }
                        break;
                    default: 
                        cout << "Please enter valid input" << endl;
                }
            break;
        default:
            cout << "Please enter a valid input." << endl;
    }

    return 0;
}