#include<bits/stdc++.h>
using namespace std;        

class Book{
    private:
    vector<bool> isAvailable;  

    public:
    vector<string> title;
    vector<string> author;

    Book(vector<string> t , vector<string> a , vector<bool> av){
        title = t;
        author = a;
        isAvailable = av;

    }
    void borrowBook(string bookName){
        auto it = find(title.begin(), title.end(), bookName);
        if(it!= title.end()){
            int index = distance(title.begin(),it);

            if(isAvailable[index]){
                isAvailable[index] = false;

            }
            else{
                cout<<"Sorry, the book is not available for borrowing."<<endl;

            }

        }





    }
    void returnBook(string bookName){
        auto it = find(title.begin(),title.end(), bookName);
        if(it!= title.end()){
            int index = distance(title.begin(),it);
            isAvailable[index] = true;

        }
        else{
            cout<<"The book does not belong to this library."<<endl;    

        }
    }
    void getAvailability(string bookName){
        auto it = find(title.begin(),title.end(),bookName);
        if(it!=title.end()){
            int index = distance(title.begin(),it);
            if(isAvailable[index]){
                cout<<"The book is available for borrowing."<<endl;

            }
            else{
                cout<<"The book is not available for borrowing."<<endl;

            }

        }
        else{
            cout<<"The book does not belong to this library."<<endl;    

        }
    }


};

int main() {

    // Create vectors for storing book details
    vector<string> titles, authors;
    vector<bool> isAvailable;
    vector<vector<string>> methodCalls;

    // Create book object using parameterized constructor to initialize the attributes
    Book book(titles, authors, isAvailable);

    // Iterate over the methodCalls
    for (const auto& methodCall : methodCalls) {
        string operation = methodCall[0];
        string bookName = methodCall[1];

        if (operation == "1") {
            // If the operation is of type 1 then call borrowBook
            book.borrowBook(bookName);
        } 
        else if (operation == "2") {
            // If the operation is of type 2 then call returnBook
            book.returnBook(bookName);
        } 
        else if (operation == "3") {
            // If the operation is of type 3 then call getAvailability
            book.getAvailability(bookName);
        }
    }

    return 0;
}