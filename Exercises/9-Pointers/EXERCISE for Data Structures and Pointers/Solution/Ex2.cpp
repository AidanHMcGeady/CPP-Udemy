#include <iostream>

using namespace std;

struct book
{
    char title;
    string authorFN;
    string authorLN;
    int pubYear;
};

int bookFill()
{
    book It;

    It.title;
    It.authorFN;
    It.authorLN;
    It.pubYear;

    cout << "What is a one word title of that book" << endl;
    cin >> It.title;

    cout << "What is the first name of the author of that book" << endl;
    cin >> It.authorFN;

    cout << "What is the last name of the author of that book" << endl;
    cin >> It.authorLN;

    cout << "When was the publication of that book" << endl;
    cin >> It.pubYear;
}

int main()
{
    cout << "Please answer these for me:" << endl
         << "- Book Title" << endl
         << "- Book Author" << endl
         << "- Publication Year" << endl << endl;

    bookFill();
}
