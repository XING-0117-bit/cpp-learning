//#define _CRT_SECURE_NO_WARNINGS 
//int max(int a, int b) { return a > b ? a : b; }
//double max(double a, double b) { return a > b ? a : b; }
//float max(float a, float b) { return a > b ? a : b; }
//char max(char a, char b) { return a > b ? a : b; }
//
//template<class T>
//T max(T a, T b) {
//    return a > b ? a : b;
//}

//
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//    vector<string> vect;
//    string str[3] = { "Hello", "world!", "C++" };
//    for (int i = 0; i < 3; i++) {
//        vect.push_back(str[i]);        
//    }
//    while (!vect.empty()) {
//        cout << vect.back() << " ";    
//        vect.pop_back();               
//    }
//    return 0;
//}
//#include <iostream>
//#include <list>
//#include <string>
//using namespace std;
//
//int main()
//{
//    list<string> lst;
//    list<string>::iterator iter; 
//    string str[] = { "Hello", "World", "C++" };
//
//    for (int i = 0; i < 3; i++)
//    {
//        lst.push_back(str[i]); 
//    }
//
//    for (iter = lst.begin(); iter != lst.end(); iter++) 
//    {
//        cout << *iter << " ";
//    }
//    cout << endl;
//    return 0;
//}

//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//
//struct Book {
//    string ISBN;
//    string author;
//    string press;
//    float price;
//};
//
//void print(Book book) {
//    cout << book.ISBN << " " << book.author << " " << book.press << " " << book.price << endl;
//}
//
//int main() {
//    map<string, Book> map_books;
//    Book books[] = {
//        {"9787302194316", "tom", "tsinghua", 89.0f},
//        {"9787302194317", "scott", "peking", 70.0f},
//        {"9787302194318", "cleark", "tsinghua", 39.0f}
//    };
//
//    for (int i = 0; i < 3; i++) {
//        map_books.insert(make_pair(books[i].ISBN, books[i]));
//    }
//
//    print(map_books["9787302194316"]);
//    print(map_books["9787302194317"]);
//    print(map_books["9787302194318"]);
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int a[] = { 5, 7, 2, 1, 9, 6 };
//    sort(a, a + 6); 
//    for (int i = 0; i < 6; i++) {
//        cout << a[i] << " ";
//    }
//    return 0;
//}