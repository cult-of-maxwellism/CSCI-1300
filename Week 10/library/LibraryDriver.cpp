#include"Library.h"
#include <iostream>

// Assume the proper libraries are included
// Assume the proper implementation of the class is included

void printLibrary (Library name) {
    cout << "Library name  : " << name.getName() << endl
         << "Current books : " << name.getCurrentBooks() << endl;
    for (int i = 0; i < name.getCurrentBooks(); i++) {
        cout << "Book " << i+1 << " pages  : " << name.getPageCount(i) << endl;
    }
    cout << "Average Pages : " << name.getAveragePageCount() << endl;
}

string findLibraryWithLargestAveragePageCount(Library libraries[], const int ARR_SIZE){
    double largestAvg = 0.0;
    int largePosition;
    for (int i = 0; i < ARR_SIZE; i++) {
        if (libraries[i].getAveragePageCount() > largestAvg) {
            largestAvg = libraries[i].getAveragePageCount();
            largePosition = i;
        }
    }

    return libraries[largePosition].getName();
}

int main() {
    string name = "City Library";
    const int arr_size = 5;
    int page_counts[arr_size] = {250, 300, 150, 500, 400};
    Library new_library = Library(name, page_counts, arr_size);

    printLibrary(new_library);

    cout << "Adding a book..." << endl;
    if (new_library.addPageCount(90)){
        cout << "Successful! New library information:" << endl;
    } else {
        cout << "Failed. Library information:" << endl;
    }

    printLibrary(new_library);

    const int ARR_SIZE = 2;
    int page_counts1[3] = {250, 300, 350};
    int page_counts2[4] = {200, 300, 250, 400};
    Library library1 = Library("Downtown Library", page_counts1, 3);
    Library library2 = Library("Uptown Library", page_counts2, 4);
    Library libraries[ARR_SIZE] = {library1, library2};
    cout << findLibraryWithLargestAveragePageCount(libraries, ARR_SIZE) << endl;

}

// Expected Contents of `new_library` Object:
// _name = "City Library"
// _MAX_BOOKS = 10
// _current_books = 5
// _page_counts[] = { 250, 300, 150, 500, 400, 0, 0, 0, 0, 0 }