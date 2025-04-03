#include "Library.h"

using namespace std;

Library::Library() {
    _name = "";
    _current_books = 0;
    for (int i = 0; i < _MAX_BOOKS; i++) {
        _page_counts[i] = 0;
    }
}

Library::Library(string name) {
    _name = name;
    _current_books = 0;
    for (int i = 0; i < _MAX_BOOKS; i++) {
        _page_counts[i] = 0;
    }
}
Library::Library(string name, int page_counts[], int arr_size) {
    _name = name;
    if (arr_size <= _MAX_BOOKS) {
        _current_books = arr_size;
    } else {
        _current_books = _MAX_BOOKS;
    }
    
    for (int i = 0; i < _current_books && i < _MAX_BOOKS; i++) {
        _page_counts[i] = page_counts[i];
    }
}

string Library::getName() {
    return _name;
}

int Library::getCurrentBooks() { return _current_books; }

void Library::setName(string libName) { _name = libName; }

int Library::getPageCount(int bookNum) {
    int pageCount = 0;
    if (bookNum < _MAX_BOOKS && bookNum < _current_books) {
        pageCount = _page_counts[bookNum];
    } else {
        pageCount = -1;
    }

    return pageCount;
}


bool Library::addPageCount(int pages) {
    bool value = false;
    if (_current_books < _MAX_BOOKS && pages >= 0) {
        value = true;
        _page_counts[_current_books] = pages;
        _current_books ++;
    }

    return value;
}

double Library::getAveragePageCount() {
    double average = 0;

    for (int i = 0; i < _current_books; i++) {
        average += _page_counts[i];
    }

    average = (average/_current_books);

    return average;
}