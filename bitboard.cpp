#include <string>
#include <iostream>
#include "bitboard.h"
using namespace std;

Bitboard::Bitboard() {
    initBitboards();
    turn_to_move = 0;
}

Bitboard::~Bitboard() {
    return;
}

void Bitboard::set_bit(U64 &piece, int square) {
    if (square < 0 || square > 63) {
        cout << "Invalid square" << endl;
        return;
    }

    piece |= (1ULL << square);
}

void Bitboard::clear_bit(U64 &piece, int square) {
    if (square < 0 || square > 63) {
        cout << "Invalid square" << endl;
        return;
    }

    piece &= ~(1 << square)
}

bool Bitboard::get_bit(U64 piece, int square) {
    if (square < 0 || square > 63) {
        cout << "Invalid square" << endl;
        return;
    }
    
    return (piece & (1ULL << square)) != 0;
}

// Note : 63 is MSB. 0 is LSB
// 63 is top right (H8) and 0 is bottom left (A1)
void Bitboard::initBitboards() {
    white_pawns = 0x0000000000FF00ULL;
    white_rooks = 0x00000000000081ULL;
    white_bishops = 0x00000000000042ULL;
    white_knights = 0x00000000000024ULL;
    white_queens = 0x0000000000008ULL;
    white_king = 0x00000000000010ULL;

    black_pawns = 0x00FF0000000000ULL;
    black_rooks = 0x81000000000000ULL;
    black_bishops = 0x42000000000000ULL;
    black_knights = 0x24000000000000ULL;
    black_queens = 0x08000000000000ULL;
    black_king = 0x10000000000000ULL;
}



