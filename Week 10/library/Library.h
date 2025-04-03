#include<iostream>

using namespace std;

class Library {
    private:
    string _name;
    const static int _MAX_BOOKS = 10;
    int _page_counts[_MAX_BOOKS], _current_books;

    public: 
    Library();
    Library(string);
    Library(string, int[], int);
    string getName();
    int getCurrentBooks();
    void setName(string);
    int getPageCount(int);
    bool addPageCount(int);
    double getAveragePageCount();
};