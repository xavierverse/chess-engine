#include <iostream>
using namespace std;

#ifndef Bitboard_H_INCLUDE_
#define Bitboard_H_INCLUDE_

typedef unsigned long long U64;

class Bitboard {
    private:
        void initBitboards() {
            // white_pawns
            // white_rooks
            // white_bishops
            // white_knights
            // white_queen
            // white_king
            // black_pawns
            // black_rooks
            // black_bishops
            // black_knights
            // black_queen
            // black_king
        }

    public:
        Bitboard();
        ~Bitboard();

        uint64_t white_pawns;
        uint64_t white_rooks;
        uint64_t white_bishops;
        uint64_t white_knights;
        uint64_t white_queen;
        uint64_t white_king;

        uint64_t black_pawns;
        uint64_t black_rooks;
        uint64_t black_bishops;
        uint64_t black_knights;
        uint64_t black_queen;
        uint64_t black_king;
};

#endif