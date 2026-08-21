#include "queen_attack.h"

#include <stdbool.h>
#include <stdlib.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2) {    
    // Return INVALID_POSITION if both queens do NOT have a valid position
    if (!(have_valid_position(queen_1, queen_2)))
        return INVALID_POSITION;

    // Return CAN_ATTACK if both queens are aligned (share same rank, file, and/or diagonal)
    if (are_aligned(queen_1, queen_2))
        return CAN_ATTACK;

    // By exhaustion, the queens cannot attack
    return CAN_NOT_ATTACK;
}

// Helper to check for position validity for two queens
bool have_valid_position(position_t queen_1, position_t queen_2) {
    // Check if queens have a valid rank and have a valid file
    // Do not need to handle negatives as we're working with unsigned ints
    bool has_valid_rank = (queen_1.row <= 7) && (queen_2.row <= 7);
    bool has_valid_file = (queen_1.column) <= 7 && (queen_2.column <= 7);

    // If queens share same rank and file, they have same position, and are thus invalid
    bool share_same_position = (queen_1.row == queen_2.row) && (queen_1.column == queen_2.column);

    // Queens have valid position they have a valid rank and have a valid file, AND they do not share same position
    return has_valid_rank && has_valid_file && !share_same_position;
}

// Helper to check if two queens (with valid positions) are aligned on the board
bool are_aligned(position_t queen_1, position_t queen_2) {
    bool same_rank = (queen_1.row == queen_2.row); // Queens are on the same row
    bool same_file = (queen_1.column == queen_2.column); // Queens are on the same column
    bool same_diagonal = (abs((int) queen_1.row - (int) queen_2.row) == abs((int) queen_1.column - (int) queen_2.column));   // Queens are on the same diagonal

    // Queens are aligned if they have the same rank, file, and/or diagonal
    return same_rank || same_file || same_diagonal;
}