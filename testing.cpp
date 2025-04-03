#include <iostream>
#include <fstream>

using namespace std;

struct Book {
    string title;
    int pages[2];
};

int main() {
    Book myBook = {"K & R C", {200,400}};

    cout << myBook.title << " is " << myBook.pages[1] << " pages long." << endl;
    /*
    ifstream fin("data.txt");
    string word;

    while (fin >> word) {
        cout << word << endl;
    }

    fin.close();
    */
    return 0;
}
