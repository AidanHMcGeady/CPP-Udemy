#include <iostream>

using namespace std;

struct book
{
    string title;
    string author;
    int pubYear;
};

int main()
{
    book It;

    It.title;
    It.author;
    It.pubYear;

    cout << "Please answer these for me:" << endl
         << "- Book Title" << endl
         << "- Book Author" << endl
         << "- Publication Year" << endl;

    cin >> It.title;
    cin >> It.author;
    cin >> It.pubYear;
}
