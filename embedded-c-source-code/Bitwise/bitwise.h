#ifndef BITWISE_H_INCLUDED
#define BITWISE_H_INCLUDED

int bitwise_func();
int check_integer_sign(int);
int check_opposite_sign(int,int);
int check_power_of_integer(int);
int bit_set(unsigned char,int);
int clear_bit(unsigned char,int);
int bit_check(unsigned char,int);
int bit_tonggle(unsigned char,int);
int count_set_bits(int);
int chane_endianness(int);
int clear_bits_from_msb_to_ith(int,int);

#endif // BITWISE_H_INCLUDED
