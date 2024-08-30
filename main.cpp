#include "bitboard.h"
#include <iostream>
using namespace std;

string col_to_rank(int file) {
    string f;
    switch(file) {
        case 0:
            f = "a"; break;
        case 1:
            f = "b"; break;
        case 2:
            f = "c"; break;
        case 3:
            f = "d"; break;
        case 4:
            f = "e"; break;
        case 5:
            f = "f"; break;
        case 6:
            f = "g"; break;
        case 7:
            f = "h"; break;
        default:
            cout << "invalid file: " << file<< endl;
            exit(0);
    }
    return f;
}
void print_squares() {
    for (int i = 7; i >= 0; i--) {
        for (int j = 0; j < 8; j++) {
            
            cout << col_to_rank(j) << i + 1;
            cout << " ";
            if (j % 7 == 0 && j != 0) {
                cout << endl;
            }
        }
    }
}
int main() {
    Bitboard b1;
    print_squares();
    return 0;
}
