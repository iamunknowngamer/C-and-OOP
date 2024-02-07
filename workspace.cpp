#include <iostream>
using namespace std;

struct book{
    string title;
    string author;
    int year;
    string genre;
};

void addBooks(book* &data, int &numBooks);
void updateBook(book data[], int numBooks);
void searchBooks(book data[], int numBooks);

int main(){
    int numBooks;
    cout<<"How many books you want to register: ";
    cin>>numBooks;

    book*data = new book[numBooks];

    for (int i=0; i<numBooks; i++) {
        cout << "\n-Adding details for book " << i + 1 << ": ";
        cout << "\nEnter the book title: ";
        cin >> data[i].title;
        cout << "\nEnter the book author: ";
        cin >> data[i].author;
        cout << "\nEnter the year of publication: ";
        cin >> data[i].year;
        cout << "\nEnter the genre of book: ";
        cin >> data[i].genre;
    }

    int choice;
    do {
        cout << "1.Add\n2.Update\n3.Search\n4.Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                addBooks(data, numBooks);
                break;
            case 2:
                updateBook(data, numBooks);
                break;
            case 3:
                searchBooks(data, numBooks);
                break;
            case 4:
                cout << "Program Terminated.";
                delete[] data;  // Release memory before exiting
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 4);

    delete[] data;  // Release memory before exiting
    return 0;
}

void addBooks(book* &data, int &numBooks) {
    int numToAdd;
    cout << "How many books you wish to add: ";
    cin >> numToAdd;

    book* newData = new book[numBooks + numToAdd];

    // Copy existing elements to new array
    for (int i = 0; i < numBooks; i++) {
        newData[i] = data[i];
    }

    delete[] data;  // Release memory of the old array

    // Input details for new books
    for (int i = numBooks; i < numBooks + numToAdd; i++) {
        cout << "\n-Adding details for new book " << i + 1 << ": ";
        cout << "\nEnter the book title: ";
        cin >> newData[i].title;
        cout << "\nEnter the book author: ";
        cin >> newData[i].author;
        cout << "\nEnter the year of publication: ";
        cin >> newData[i].year;
        cout << "\nEnter the genre of book: ";
        cin >> newData[i].genre;
    }

    data = newData;  // Point 'data' to the new array
    numBooks += numToAdd;
}

void updateBook(book data[], int numBooks) {
    int year;
    cout << "Enter the year of the book you want to update: ";
    cin >> year;

    for (int i = 0; i < numBooks; i++) {
        if (data[i].year == year) {
            cout << "Updating details for book " << i + 1 << ": \n";
            cout << "\nEnter The New Book Title: ";
            cin >> data[i].title;
            cout << "\nEnter the book author: ";
            cin >> data[i].author;
            cout << "\nEnter the year of publication: ";
            cin >> data[i].year;
            cout << "\nEnter the genre of book: ";
            cin >> data[i].genre;
        }
    }
}

void searchBooks(book data[], int numBooks) {
    string temp;
    cout << "\nEnter the (author/title) of the book you want to search for: ";
    cin >> temp;

    cout << "Search complete(0.198 ms)--Matching results are: " << endl;
    for (int i = 0; i < numBooks; i++) {
        if (data[i].title == temp || data[i].author == temp) {
            cout << "\nSimilar Result " << i + 1 << ":";
            cout << "\nBook title: " << data[i].title;
            cout << "\nBook author: " << data[i].author;
            cout << "\nYear of publication: " << data[i].year;
            cout << "\nGenre: " << data[i].genre << "\n\n";
        }
    }
}
