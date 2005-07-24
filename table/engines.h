/* $Id$ */

#ifndef ENGINES_H
#define ENGINES_H

/** @file table/engines.h
  * This file contains all the data for vehicles
  */

#include "sound.h"

/** Writes the properties of a vehicle into the EngineInfo struct.
  * @see EngineInfo
  * @param a Introduction date
  * @param e Rail Type of the vehicle
  * @param f Bitmask of the climates
  */
#define MK(a,b,c,d,e,f) {a,b,c,d,((e)<<4)|(f)}
/** Writes the properties of a train carriage into the EngineInfo struct.
  * @see EngineInfo
  * @param a Introduction date
  * @param e Rail Type of the vehicle
  * @param f Bitmask of the climates
  * @note the 0x80 in parameter b sets the "is carriage bit"
  */
#define MW(a,b,c,d,e,f) {a,b|0x80,c,d,((e)<<4)|(f)}

EngineInfo _engine_info[TOTAL_NUM_ENGINES] = {
	MK(  1827,  20,  15,  30,   0,   1), /*   0 Kirby Paul Tank (Steam) */
	MK( 12784,  20,  22,  30,   0,   6), /*   1 MJS 250 (Diesel) */
	MK(  9497,  20,  20,  50,   0,   8), /*   2 Ploddyphut Choo-Choo */
	MK( 11688,  20,  20,  30,   0,   8), /*   3 Powernaut Choo-Choo */
	MK( 16802,  20,  20,  30,   0,   8), /*   4 Mightymover Choo-Choo */
	MK( 18993,  20,  20,  30,   0,   8), /*   5 Ploddyphut Diesel */
	MK( 20820,  20,  20,  30,   0,   8), /*   6 Powernaut Diesel */
	MK(  8766,  20,  20,  30,   0,   6), /*   7 Wills 2-8-0 (Steam) */
	MK(  5114,  20,  21,  30,   0,   1), /*   8 Chaney 'Jubilee' (Steam) */
	MK(  5479,  20,  20,  30,   0,   1), /*   9 Ginzu 'A4' (Steam) */
	MK( 12419,  20,  23,  25,   0,   1), /*  10 SH '8P' (Steam) */
	MK( 13149,  20,  12,  30,   0,   1), /*  11 Manley-Morel DMU (Diesel) */
	MK( 23376,  20,  15,  35,   0,   1), /*  12 'Dash' (Diesel) */
	MK( 14976,  20,  18,  28,   0,   1), /*  13 SH/Hendry '25' (Diesel) */
	MK( 14245,  20,  20,  30,   0,   1), /*  14 UU '37' (Diesel) */
	MK( 15341,  20,  22,  33,   0,   1), /*  15 Floss '47' (Diesel) */
	MK( 14976,  20,  20,  25,   0,   6), /*  16 CS 4000 (Diesel) */
	MK( 16437,  20,  20,  30,   0,   6), /*  17 CS 2400 (Diesel) */
	MK( 18993,  20,  22,  30,   0,   6), /*  18 Centennial (Diesel) */
	MK( 13880,  20,  22,  30,   0,   6), /*  19 Kelling 3100 (Diesel) */
	MK( 20454,  20,  22,  30,   0,   6), /*  20 Turner Turbo (Diesel) */
	MK( 16071,  20,  22,  30,   0,   6), /*  21 MJS 1000 (Diesel) */
	MK( 20820,  20,  20,  25,   0,   1), /*  22 SH '125' (Diesel) */
	MK( 16437,  20,  23,  30,   0,   1), /*  23 SH '30' (Electric) */
	MK( 19359,  20,  23,  80,   0,   1), /*  24 SH '40' (Electric) */
	MK( 23376,  20,  25,  30,   0,   1), /*  25 'T.I.M.' (Electric) */
	MK( 26298,  20,  25,  50,   0,   1), /*  26 'AsiaStar' (Electric) */
	MW(  1827,  20,  20,  50,   0,  15), /*  27 Passenger Carriage */
	MW(  1827,  20,  20,  50,   0,  15), /*  28 Mail Van */
	MW(  1827,  20,  20,  50,   0,   3), /*  29 Coal Truck */
	MW(  1827,  20,  20,  50,   0,   7), /*  30 Oil Tanker */
	MW(  1827,  20,  20,  50,   0,   3), /*  31 Livestock Van */
	MW(  1827,  20,  20,  50,   0,   7), /*  32 Goods Van */
	MW(  1827,  20,  20,  50,   0,   7), /*  33 Grain Hopper */
	MW(  1827,  20,  20,  50,   0,   7), /*  34 Wood Truck */
	MW(  1827,  20,  20,  50,   0,   1), /*  35 Iron Ore Hopper */
	MW(  1827,  20,  20,  50,   0,   1), /*  36 Steel Truck */
	MW(  1827,  20,  20,  50,   0,   7), /*  37 Armoured Van */
	MW(  1827,  20,  20,  50,   0,   6), /*  38 Food Van */
	MW(  1827,  20,  20,  50,   0,   2), /*  39 Paper Truck */
	MW(  1827,  20,  20,  50,   0,   4), /*  40 Copper Ore Hopper */
	MW(  1827,  20,  20,  50,   0,   4), /*  41 Water Tanker */
	MW(  1827,  20,  20,  50,   0,   4), /*  42 Fruit Truck */
	MW(  1827,  20,  20,  50,   0,   4), /*  43 Rubber Truck */
	MW(  1827,  20,  20,  50,   0,   8), /*  44 Sugar Truck */
	MW(  1827,  20,  20,  50,   0,   8), /*  45 Candyfloss Hopper */
	MW(  1827,  20,  20,  50,   0,   8), /*  46 Toffee Hopper */
	MW(  1827,  20,  20,  50,   0,   8), /*  47 Bubble Van */
	MW(  1827,  20,  20,  50,   0,   8), /*  48 Cola Tanker */
	MW(  1827,  20,  20,  50,   0,   8), /*  49 Sweet Van */
	MW(  1827,  20,  20,  50,   0,   8), /*  50 Toy Van */
	MW(  1827,  20,  20,  50,   0,   8), /*  51 Battery Truck */
	MW(  1827,  20,  20,  50,   0,   8), /*  52 Fizzy Drink Truck */
	MW(  1827,  20,  20,  50,   0,   8), /*  53 Plastic Truck */
	MK( 28490,  20,  20,  50,   1,   7), /*  54 'X2001' (Electric) */
	MK( 31047,  20,  20,  50,   1,   7), /*  55 'Millennium Z1' (Electric) */
	MK( 28855,  20,  20,  50,   1,   8), /*  56 Wizzowow Z99 */
	MW(  1827,  20,  20,  50,   1,  15), /*  57 Passenger Carriage */
	MW(  1827,  20,  20,  50,   1,  15), /*  58 Mail Van */
	MW(  1827,  20,  20,  50,   1,   3), /*  59 Coal Truck */
	MW(  1827,  20,  20,  50,   1,   7), /*  60 Oil Tanker */
	MW(  1827,  20,  20,  50,   1,   3), /*  61 Livestock Van */
	MW(  1827,  20,  20,  50,   1,   7), /*  62 Goods Van */
	MW(  1827,  20,  20,  50,   1,   7), /*  63 Grain Hopper */
	MW(  1827,  20,  20,  50,   1,   7), /*  64 Wood Truck */
	MW(  1827,  20,  20,  50,   1,   1), /*  65 Iron Ore Hopper */
	MW(  1827,  20,  20,  50,   1,   1), /*  66 Steel Truck */
	MW(  1827,  20,  20,  50,   1,   7), /*  67 Armoured Van */
	MW(  1827,  20,  20,  50,   1,   6), /*  68 Food Van */
	MW(  1827,  20,  20,  50,   1,   2), /*  69 Paper Truck */
	MW(  1827,  20,  20,  50,   1,   4), /*  70 Copper Ore Hopper */
	MW(  1827,  20,  20,  50,   1,   4), /*  71 Water Tanker */
	MW(  1827,  20,  20,  50,   1,   4), /*  72 Fruit Truck */
	MW(  1827,  20,  20,  50,   1,   4), /*  73 Rubber Truck */
	MW(  1827,  20,  20,  50,   1,   8), /*  74 Sugar Truck */
	MW(  1827,  20,  20,  50,   1,   8), /*  75 Candyfloss Hopper */
	MW(  1827,  20,  20,  50,   1,   8), /*  76 Toffee Hopper */
	MW(  1827,  20,  20,  50,   1,   8), /*  77 Bubble Van */
	MW(  1827,  20,  20,  50,   1,   8), /*  78 Cola Tanker */
	MW(  1827,  20,  20,  50,   1,   8), /*  79 Sweet Van */
	MW(  1827,  20,  20,  50,   1,   8), /*  80 Toy Van */
	MW(  1827,  20,  20,  50,   1,   8), /*  81 Battery Truck */
	MW(  1827,  20,  20,  50,   1,   8), /*  82 Fizzy Drink Truck */
	MW(  1827,  20,  20,  50,   1,   8), /*  83 Plastic Truck */
	MK( 36525,  20,  20,  50,   2,   7), /*  84 Lev1 'Leviathan' (Electric) */
	MK( 39447,  20,  20,  50,   2,   7), /*  85 Lev2 'Cyclops' (Electric) */
	MK( 42004,  20,  20,  50,   2,   7), /*  86 Lev3 'Pegasus' (Electric) */
	MK( 42735,  20,  20,  50,   2,   7), /*  87 Lev4 'Chimaera' (Electric) */
	MK( 36891,  20,  20,  60,   2,   8), /*  88 Wizzowow Rocketeer */
	MW(  1827,  20,  20,  50,   2,  15), /*  89 Passenger Carriage */
	MW(  1827,  20,  20,  50,   2,  15), /*  90 Mail Van */
	MW(  1827,  20,  20,  50,   2,   3), /*  91 Coal Truck */
	MW(  1827,  20,  20,  50,   2,   7), /*  92 Oil Tanker */
	MW(  1827,  20,  20,  50,   2,   3), /*  93 Livestock Van */
	MW(  1827,  20,  20,  50,   2,   7), /*  94 Goods Van */
	MW(  1827,  20,  20,  50,   2,   7), /*  95 Grain Hopper */
	MW(  1827,  20,  20,  50,   2,   7), /*  96 Wood Truck */
	MW(  1827,  20,  20,  50,   2,   1), /*  97 Iron Ore Hopper */
	MW(  1827,  20,  20,  50,   2,   1), /*  98 Steel Truck */
	MW(  1827,  20,  20,  50,   2,   7), /*  99 Armoured Van */
	MW(  1827,  20,  20,  50,   2,   6), /* 100 Food Van */
	MW(  1827,  20,  20,  50,   2,   2), /* 101 Paper Truck */
	MW(  1827,  20,  20,  50,   2,   4), /* 102 Copper Ore Hopper */
	MW(  1827,  20,  20,  50,   2,   4), /* 103 Water Tanker */
	MW(  1827,  20,  20,  50,   2,   4), /* 104 Fruit Truck */
	MW(  1827,  20,  20,  50,   2,   4), /* 105 Rubber Truck */
	MW(  1827,  20,  20,  50,   2,   8), /* 106 Sugar Truck */
	MW(  1827,  20,  20,  50,   2,   8), /* 107 Candyfloss Hopper */
	MW(  1827,  20,  20,  50,   2,   8), /* 108 Toffee Hopper */
	MW(  1827,  20,  20,  50,   2,   8), /* 109 Bubble Van */
	MW(  1827,  20,  20,  50,   2,   8), /* 110 Cola Tanker */
	MW(  1827,  20,  20,  50,   2,   8), /* 111 Sweet Van */
	MW(  1827,  20,  20,  50,   2,   8), /* 112 Toy Van */
	MW(  1827,  20,  20,  50,   2,   8), /* 113 Battery Truck */
	MW(  1827,  20,  20,  50,   2,   8), /* 114 Fizzy Drink Truck */
	MW(  1827,  20,  20,  50,   2,   8), /* 115 Plastic Truck */
	MK(  3378,  20,  12,  40,   0,   7), /* 116 MPS Regal Bus */
	MK( 16071,  20,  15,  30,   0,   7), /* 117 Hereford Leopard Bus */
	MK( 24107,  20,  15,  40,   0,   7), /* 118 Foster Bus */
	MK( 32142,  20,  15,  80,   0,   7), /* 119 Foster MkII Superbus */
	MK(  9132,  20,  15,  40,   0,   8), /* 120 Ploddyphut MkI Bus */
	MK( 18993,  20,  15,  40,   0,   8), /* 121 Ploddyphut MkII Bus */
	MK( 32873,  20,  15,  80,   0,   8), /* 122 Ploddyphut MkIII Bus */
	MK(  5479,  20,  15,  55,   0,   3), /* 123 Balogh Coal Truck */
	MK( 20089,  20,  15,  55,   0,   3), /* 124 Uhl Coal Truck */
	MK( 33969,  20,  15,  85,   0,   3), /* 125 DW Coal Truck */
	MK(  5479,  20,  15,  55,   0,   7), /* 126 MPS Mail Truck */
	MK( 21550,  20,  15,  55,   0,   7), /* 127 Reynard Mail Truck */
	MK( 35795,  20,  15,  85,   0,   7), /* 128 Perry Mail Truck */
	MK(  5479,  20,  15,  55,   0,   8), /* 129 MightyMover Mail Truck */
	MK( 21550,  20,  15,  55,   0,   8), /* 130 Powernaught Mail Truck */
	MK( 35795,  20,  15,  85,   0,   8), /* 131 Wizzowow Mail Truck */
	MK(  5479,  20,  15,  55,   0,   7), /* 132 Witcombe Oil Tanker */
	MK( 19359,  20,  15,  55,   0,   7), /* 133 Foster Oil Tanker */
	MK( 31047,  20,  15,  85,   0,   7), /* 134 Perry Oil Tanker */
	MK(  5479,  20,  15,  55,   0,   3), /* 135 Talbott Livestock Van */
	MK( 21915,  20,  15,  55,   0,   3), /* 136 Uhl Livestock Van */
	MK( 37256,  20,  15,  85,   0,   3), /* 137 Foster Livestock Van */
	MK(  5479,  20,  15,  55,   0,   7), /* 138 Balogh Goods Truck */
	MK( 19724,  20,  15,  55,   0,   7), /* 139 Craighead Goods Truck */
	MK( 31047,  20,  15,  85,   0,   7), /* 140 Goss Goods Truck */
	MK(  5479,  20,  15,  55,   0,   7), /* 141 Hereford Grain Truck */
	MK( 21185,  20,  15,  55,   0,   7), /* 142 Thomas Grain Truck */
	MK( 32873,  20,  15,  85,   0,   7), /* 143 Goss Grain Truck */
	MK(  5479,  20,  15,  55,   0,   7), /* 144 Witcombe Wood Truck */
	MK( 19724,  20,  15,  55,   0,   7), /* 145 Foster Wood Truck */
	MK( 35430,  20,  15,  85,   0,   7), /* 146 Moreland Wood Truck */
	MK(  5479,  20,  15,  55,   0,   1), /* 147 MPS Iron Ore Truck */
	MK( 20820,  20,  15,  55,   0,   1), /* 148 Uhl Iron Ore Truck */
	MK( 33238,  20,  15,  85,   0,   1), /* 149 Chippy Iron Ore Truck */
	MK(  5479,  20,  15,  55,   0,   1), /* 150 Balogh Steel Truck */
	MK( 21185,  20,  15,  55,   0,   1), /* 151 Uhl Steel Truck */
	MK( 31777,  20,  15,  85,   0,   1), /* 152 Kelling Steel Truck */
	MK(  5479,  20,  15,  55,   0,   7), /* 153 Balogh Armoured Truck */
	MK( 22281,  20,  15,  55,   0,   7), /* 154 Uhl Armoured Truck */
	MK( 33603,  20,  15,  85,   0,   7), /* 155 Foster Armoured Truck */
	MK(  5479,  20,  15,  55,   0,   6), /* 156 Foster Food Van */
	MK( 18628,  20,  15,  55,   0,   6), /* 157 Perry Food Van */
	MK( 30681,  20,  15,  85,   0,   6), /* 158 Chippy Food Van */
	MK(  5479,  20,  15,  55,   0,   2), /* 159 Uhl Paper Truck */
	MK( 21185,  20,  15,  55,   0,   2), /* 160 Balogh Paper Truck */
	MK( 31777,  20,  15,  85,   0,   2), /* 161 MPS Paper Truck */
	MK(  5479,  20,  15,  55,   0,   4), /* 162 MPS Copper Ore Truck */
	MK( 20820,  20,  15,  55,   0,   4), /* 163 Uhl Copper Ore Truck */
	MK( 33238,  20,  15,  85,   0,   4), /* 164 Goss Copper Ore Truck */
	MK(  5479,  20,  15,  55,   0,   4), /* 165 Uhl Water Tanker */
	MK( 20970,  20,  15,  55,   0,   4), /* 166 Balogh Water Tanker */
	MK( 33388,  20,  15,  85,   0,   4), /* 167 MPS Water Tanker */
	MK(  5479,  20,  15,  55,   0,   4), /* 168 Balogh Fruit Truck */
	MK( 21335,  20,  15,  55,   0,   4), /* 169 Uhl Fruit Truck */
	MK( 33753,  20,  15,  85,   0,   4), /* 170 Kelling Fruit Truck */
	MK(  5479,  20,  15,  55,   0,   4), /* 171 Balogh Rubber Truck */
	MK( 20604,  20,  15,  55,   0,   4), /* 172 Uhl Rubber Truck */
	MK( 33023,  20,  15,  85,   0,   4), /* 173 RMT Rubber Truck */
	MK(  5479,  20,  15,  55,   0,   8), /* 174 MightyMover Sugar Truck */
	MK( 19724,  20,  15,  55,   0,   8), /* 175 Powernaught Sugar Truck */
	MK( 33238,  20,  15,  85,   0,   8), /* 176 Wizzowow Sugar Truck */
	MK(  5479,  20,  15,  55,   0,   8), /* 177 MightyMover Cola Truck */
	MK( 20089,  20,  15,  55,   0,   8), /* 178 Powernaught Cola Truck */
	MK( 33603,  20,  15,  85,   0,   8), /* 179 Wizzowow Cola Truck */
	MK(  5479,  20,  15,  55,   0,   8), /* 180 MightyMover Candyfloss Truck */
	MK( 20454,  20,  15,  55,   0,   8), /* 181 Powernaught Candyfloss Truck */
	MK( 33969,  20,  15,  85,   0,   8), /* 182 Wizzowow Candyfloss Truck */
	MK(  5479,  20,  15,  55,   0,   8), /* 183 MightyMover Toffee Truck */
	MK( 20820,  20,  15,  55,   0,   8), /* 184 Powernaught Toffee Truck */
	MK( 34334,  20,  15,  85,   0,   8), /* 185 Wizzowow Toffee Truck */
	MK(  5479,  20,  15,  55,   0,   8), /* 186 MightyMover Toy Van */
	MK( 21185,  20,  15,  55,   0,   8), /* 187 Powernaught Toy Van */
	MK( 34699,  20,  15,  85,   0,   8), /* 188 Wizzowow Toy Van */
	MK(  5479,  20,  15,  55,   0,   8), /* 189 MightyMover Sweet Truck */
	MK( 21550,  20,  15,  55,   0,   8), /* 190 Powernaught Sweet Truck */
	MK( 35064,  20,  15,  85,   0,   8), /* 191 Wizzowow Sweet Truck */
	MK(  5479,  20,  15,  55,   0,   8), /* 192 MightyMover Battery Truck */
	MK( 19874,  20,  15,  55,   0,   8), /* 193 Powernaught Battery Truck */
	MK( 35430,  20,  15,  85,   0,   8), /* 194 Wizzowow Battery Truck */
	MK(  5479,  20,  15,  55,   0,   8), /* 195 MightyMover Fizzy Drink Truck */
	MK( 20239,  20,  15,  55,   0,   8), /* 196 Powernaught Fizzy Drink Truck */
	MK( 35795,  20,  15,  85,   0,   8), /* 197 Wizzowow Fizzy Drink Truck */
	MK(  5479,  20,  15,  55,   0,   8), /* 198 MightyMover Plastic Truck */
	MK( 20604,  20,  15,  55,   0,   8), /* 199 Powernaught Plastic Truck */
	MK( 32873,  20,  15,  85,   0,   8), /* 200 Wizzowow Plastic Truck */
	MK(  5479,  20,  15,  55,   0,   8), /* 201 MightyMover Bubble Truck */
	MK( 20970,  20,  15,  55,   0,   8), /* 202 Powernaught Bubble Truck */
	MK( 33023,  20,  15,  85,   0,   8), /* 203 Wizzowow Bubble Truck */
	MK(  2922,   5,  30,  50,   0,   7), /* 204 MPS Oil Tanker */
	MK( 17167,   5,  30,  90,   0,   7), /* 205 CS-Inc. Oil Tanker */
	MK(  2192,   5,  30,  55,   0,   7), /* 206 MPS Passenger Ferry */
	MK( 18628,   5,  30,  90,   0,   7), /* 207 FFP Passenger Ferry */
	MK( 17257,  10,  25,  90,   0,   7), /* 208 Bakewell 300 Hovercraft */
	MK(  9587,   5,  30,  40,   0,   8), /* 209 Chugger-Chug Passenger Ferry */
	MK( 20544,   5,  30,  90,   0,   8), /* 210 Shivershake Passenger Ferry */
	MK(  2557,   5,  30,  55,   0,   7), /* 211 Yate Cargo ship */
	MK( 19724,   5,  30,  98,   0,   7), /* 212 Bakewell Cargo ship */
	MK(  9587,   5,  30,  45,   0,   8), /* 213 Mightymover Cargo ship */
	MK( 22371,   5,  30,  90,   0,   8), /* 214 Powernaut Cargo ship */
	MK(  2922,  20,  20,  20,   0,   7), /* 215 Sampson U52 */
	MK(  9922,  20,  24,  20,   0,   7), /* 216 Coleman Count */
	MK( 12659,  20,  18,  20,   0,   7), /* 217 FFP Dart */
	MK( 17652,  20,  25,  35,   0,   7), /* 218 Yate Haugan */
	MK(  4929,  20,  30,  30,   0,   7), /* 219 Bakewell Cotswald LB-3 */
	MK( 13695,  20,  23,  25,   0,   7), /* 220 Bakewell Luckett LB-8 */
	MK( 16341,  20,  26,  30,   0,   7), /* 221 Bakewell Luckett LB-9 */
	MK( 21395,  20,  25,  30,   0,   7), /* 222 Bakewell Luckett LB80 */
	MK( 18263,  20,  20,  30,   0,   7), /* 223 Bakewell Luckett LB-10 */
	MK( 25233,  20,  25,  30,   0,   7), /* 224 Bakewell Luckett LB-11 */
	MK( 15371,  20,  22,  25,   0,   7), /* 225 Yate Aerospace YAC 1-11 */
	MK( 15461,  20,  25,  25,   0,   7), /* 226 Darwin 100 */
	MK( 16952,  20,  22,  25,   0,   7), /* 227 Darwin 200 */
	MK( 17227,  20,  25,  30,   0,   7), /* 228 Darwin 300 */
	MK( 22371,  20,  25,  35,   0,   7), /* 229 Darwin 400 */
	MK( 22341,  20,  25,  30,   0,   7), /* 230 Darwin 500 */
	MK( 27209,  20,  25,  30,   0,   7), /* 231 Darwin 600 */
	MK( 17988,  20,  20,  30,   0,   7), /* 232 Guru Galaxy */
	MK( 18993,  20,  24,  35,   0,   7), /* 233 Airtaxi A21 */
	MK( 22401,  20,  24,  30,   0,   7), /* 234 Airtaxi A31 */
	MK( 24472,  20,  24,  30,   0,   7), /* 235 Airtaxi A32 */
	MK( 26724,  20,  24,  30,   0,   7), /* 236 Airtaxi A33 */
	MK( 22005,  20,  25,  30,   0,   7), /* 237 Yate Aerospace YAe46 */
	MK( 24107,  20,  20,  35,   0,   7), /* 238 Dinger 100 */
	MK( 29310,  20,  25,  60,   0,   7), /* 239 AirTaxi A34-1000 */
	MK( 35520,  20,  22,  30,   0,   7), /* 240 Yate Z-Shuttle */
	MK( 36981,  20,  22,  30,   0,   7), /* 241 Kelling K1 */
	MK( 38807,  20,  22,  50,   0,   7), /* 242 Kelling K6 */
	MK( 42094,  20,  25,  30,   0,   7), /* 243 Kelling K7 */
	MK( 44651,  20,  23,  30,   0,   7), /* 244 Darwin 700 */
	MK( 40268,  20,  25,  30,   0,   7), /* 245 FFP Hyperdart 2 */
	MK( 33693,  20,  25,  50,   0,   7), /* 246 Dinger 200 */
	MK( 32963,  20,  20,  60,   0,   7), /* 247 Dinger 1000 */
	MK(  9222,  20,  20,  35,   0,   8), /* 248 Ploddyphut 100 */
	MK( 12874,  20,  20,  35,   0,   8), /* 249 Ploddyphut 500 */
	MK( 16892,  20,  20,  35,   0,   8), /* 250 Flashbang X1 */
	MK( 21275,  20,  20,  99,   0,   8), /* 251 Juggerplane M1 */
	MK( 23832,  20,  20,  99,   0,   8), /* 252 Flashbang Wizzer */
	MK( 13575,  20,  20,  40,   0,   7), /* 253 Tricario Helicopter */
	MK( 28215,  20,  20,  30,   0,   7), /* 254 Guru X2 Helicopter */
	MK( 13575,  20,  20,  99,   0,   8), /* 255  */
};

RailVehicleInfo _rail_vehicle_info[NUM_TRAIN_ENGINES] = {
	// image_index  max_speed (kph)      running_cost_base                 callbackmask    shortened factor
	// |  flags     |        power (hp)  |    running_cost_class           |   powered wagons power
	// |  |    base_cost     |    weight      |    capacity                |   |   powered wagons weight
	// |  |    |    |        |    |      |    |    |    cargo_type         |   |   |   visual effects
	// |  |    |    |        |    |      |    |    |    |                  |   |   |   |   |
	{  2, 0,   7,  64,     300,  47,    50,   0,   0,   0               ,  0,  0,  0,  0,  0 }, /*   0 */
	{ 19, 0,   8,  80,     600,  65,    65,   1,   0,   0               ,  0,  0,  0,  0,  0 }, /*   1 */
	{  2, 0,  10,  72,     400,  85,    90,   0,   0,   0               ,  0,  0,  0,  0,  0 }, /*   2 */
	{  0, 0,  15,  96,     900, 130,   130,   0,   0,   0               ,  0,  0,  0,  0,  0 }, /*   3 */
	{  1, 0,  19, 112,    1000, 140,   145,   0,   0,   0               ,  0,  0,  0,  0,  0 }, /*   4 */
	{ 12, 0,  16, 120,    1400,  95,   125,   1,   0,   0               ,  0,  0,  0,  0,  0 }, /*   5 */
	{ 14, 0,  20, 152,    2000, 120,   135,   1,   0,   0               ,  0,  0,  0,  0,  0 }, /*   6 */
	{  3, 0,  14,  88,    1100, 145,   130,   0,   0,   0               ,  0,  0,  0,  0,  0 }, /*   7 */
	{  0, 0,  13, 112,    1000, 131,   120,   0,   0,   0               ,  0,  0,  0,  0,  0 }, /*   8 */
	{  1, 0,  19, 128,    1200, 162,   140,   0,   0,   0               ,  0,  0,  0,  0,  0 }, /*   9 */
	{  0, 0,  22, 144,    1600, 170,   130,   0,   0,   0               ,  0,  0,  0,  0,  0 }, /*  10 */
	{  8, 1,  11, 112,   600/2,32/2,  85/2,   1,  38,   CT_PASSENGERS   ,  0,  0,  0,  0,  0 }, /*  11 */
	{ 10, 1,  14, 120,   700/2,38/2,  70/2,   1,  40,   CT_PASSENGERS   ,  0,  0,  0,  0,  0 }, /*  12 */
	{  4, 0,  15, 128,    1250,  72,    95,   1,   0,   0               ,  0,  0,  0,  0,  0 }, /*  13 */
	{  5, 0,  17, 144,    1750, 101,   120,   1,   0,   0               ,  0,  0,  0,  0,  0 }, /*  14 */
	{  4, 0,  18, 160,    2580, 112,   140,   1,   0,   0               ,  0,  0,  0,  0,  0 }, /*  15 */
	{ 14, 0,  23,  96,    4000, 150,   135,   1,   0,   0               ,  0,  0,  0,  0,  0 }, /*  16 */
	{ 12, 0,  16, 112,    2400, 120,   105,   1,   0,   0               ,  0,  0,  0,  0,  0 }, /*  17 */
	{ 13, 0,  30, 112,    6600, 207,   155,   1,   0,   0               ,  0,  0,  0,  0,  0 }, /*  18 */
	{ 15, 0,  18, 104,    1500, 110,   105,   1,   0,   0               ,  0,  0,  0,  0,  0 }, /*  19 */
	{ 16, 1,  35, 160,  3500/2,95/2, 205/2,   1,   0,   0               ,  0,  0,  0,  0,  0 }, /*  20 */
	{ 18, 0,  21, 104,    2200, 120,   145,   1,   0,   0               ,  0,  0,  0,  0,  0 }, /*  21 */
	{  6, 1,  20, 200,  4500/2,70/2, 190/2,   1,   4,   CT_MAIL         ,  0,  0,  0,  0,  0 }, /*  22 */
	{ 20, 0,  26, 160,    3600,  84,   180,   2,   0,   0               ,  0,  0,  0,  0,  0 }, /*  23 */
	{ 20, 0,  30, 176,    5000,  82,   205,   2,   0,   0               ,  0,  0,  0,  0,  0 }, /*  24 */
	{ 21, 1,  40, 240,  7000/2,90/2, 240/2,   2,   0,   0               ,  0,  0,  0,  0,  0 }, /*  25 */
	{ 23, 1,  43, 264,  8000/2,95/2, 250/2,   2,   0,   0               ,  0,  0,  0,  0,  0 }, /*  26 */
	{ 33, 2, 247,   0,       0,  25,     0,   0,  40,   CT_PASSENGERS   ,  0,  0,  0,  0,  0 }, /*  27 */
	{ 35, 2, 228,   0,       0,  21,     0,   0,  30,   CT_MAIL         ,  0,  0,  0,  0,  0 }, /*  28 */
	{ 34, 2, 176,   0,       0,  18,     0,   0,  30,   CT_COAL         ,  0,  0,  0,  0,  0 }, /*  29 */
	{ 36, 2, 200,   0,       0,  24,     0,   0,  30,   CT_OIL          ,  0,  0,  0,  0,  0 }, /*  30 */
	{ 37, 2, 192,   0,       0,  20,     0,   0,  25,   CT_LIVESTOCK    ,  0,  0,  0,  0,  0 }, /*  31 */
	{ 38, 2, 190,   0,       0,  21,     0,   0,  25,   CT_GOODS        ,  0,  0,  0,  0,  0 }, /*  32 */
	{ 39, 2, 182,   0,       0,  19,     0,   0,  30,   CT_GRAIN        ,  0,  0,  0,  0,  0 }, /*  33 */
	{ 40, 2, 181,   0,       0,  16,     0,   0,  30,   CT_WOOD         ,  0,  0,  0,  0,  0 }, /*  34 */
	{ 41, 2, 179,   0,       0,  19,     0,   0,  30,   CT_IRON_ORE     ,  0,  0,  0,  0,  0 }, /*  35 */
	{ 42, 2, 196,   0,       0,  18,     0,   0,  20,   CT_STEEL        ,  0,  0,  0,  0,  0 }, /*  36 */
	{ 43, 2, 255,   0,       0,  30,     0,   0,  20,   CT_VALUABLES    ,  0,  0,  0,  0,  0 }, /*  37 */
	{ 44, 2, 191,   0,       0,  22,     0,   0,  25,   CT_FOOD         ,  0,  0,  0,  0,  0 }, /*  38 */
	{ 45, 2, 196,   0,       0,  18,     0,   0,  20,   CT_PAPER        ,  0,  0,  0,  0,  0 }, /*  39 */
	{ 46, 2, 179,   0,       0,  19,     0,   0,  30,   CT_COPPER_ORE   ,  0,  0,  0,  0,  0 }, /*  40 */
	{ 47, 2, 199,   0,       0,  25,     0,   0,  25,   CT_WATER        ,  0,  0,  0,  0,  0 }, /*  41 */
	{ 48, 2, 182,   0,       0,  18,     0,   0,  25,   CT_FRUIT        ,  0,  0,  0,  0,  0 }, /*  42 */
	{ 49, 2, 185,   0,       0,  19,     0,   0,  21,   CT_RUBBER       ,  0,  0,  0,  0,  0 }, /*  43 */
	{ 50, 2, 176,   0,       0,  19,     0,   0,  30,   CT_SUGAR        ,  0,  0,  0,  0,  0 }, /*  44 */
	{ 51, 2, 178,   0,       0,  20,     0,   0,  30,   CT_COTTON_CANDY ,  0,  0,  0,  0,  0 }, /*  45 */
	{ 52, 2, 192,   0,       0,  20,     0,   0,  30,   CT_TOFFEE       ,  0,  0,  0,  0,  0 }, /*  46 */
	{ 53, 2, 190,   0,       0,  21,     0,   0,  20,   CT_BUBBLES      ,  0,  0,  0,  0,  0 }, /*  47 */
	{ 54, 2, 182,   0,       0,  24,     0,   0,  25,   CT_COLA         ,  0,  0,  0,  0,  0 }, /*  48 */
	{ 55, 2, 181,   0,       0,  21,     0,   0,  25,   CT_CANDY        ,  0,  0,  0,  0,  0 }, /*  49 */
	{ 56, 2, 183,   0,       0,  21,     0,   0,  20,   CT_TOYS         ,  0,  0,  0,  0,  0 }, /*  50 */
	{ 57, 2, 196,   0,       0,  18,     0,   0,  22,   CT_BATTERIES    ,  0,  0,  0,  0,  0 }, /*  51 */
	{ 58, 2, 193,   0,       0,  18,     0,   0,  25,   CT_FIZZY_DRINKS ,  0,  0,  0,  0,  0 }, /*  52 */
	{ 59, 2, 191,   0,       0,  18,     0,   0,  30,   CT_PLASTIC      ,  0,  0,  0,  0,  0 }, /*  53 */
	{ 25, 0,  52, 304,    9000,  95,   230,   2,   0,   0               ,  0,  0,  0,  0,  0 }, /*  54 */
	{ 26, 1,  60, 336, 10000/2,85/2, 240/2,   2,  25,   CT_PASSENGERS   ,  0,  0,  0,  0,  0 }, /*  55 */
	{ 26, 0,  53, 320,    5000,  95,   230,   2,   0,   0               ,  0,  0,  0,  0,  0 }, /*  56 */
	{ 60, 2, 247,   0,       0,  25,     0,   0,  45,   CT_PASSENGERS   ,  0,  0,  0,  0,  0 }, /*  57 */
	{ 62, 2, 228,   0,       0,  21,     0,   0,  35,   CT_MAIL         ,  0,  0,  0,  0,  0 }, /*  58 */
	{ 61, 2, 176,   0,       0,  18,     0,   0,  35,   CT_COAL         ,  0,  0,  0,  0,  0 }, /*  59 */
	{ 63, 2, 200,   0,       0,  24,     0,   0,  35,   CT_OIL          ,  0,  0,  0,  0,  0 }, /*  60 */
	{ 64, 2, 192,   0,       0,  20,     0,   0,  30,   CT_LIVESTOCK    ,  0,  0,  0,  0,  0 }, /*  61 */
	{ 65, 2, 190,   0,       0,  21,     0,   0,  30,   CT_GOODS        ,  0,  0,  0,  0,  0 }, /*  62 */
	{ 66, 2, 182,   0,       0,  19,     0,   0,  35,   CT_GRAIN        ,  0,  0,  0,  0,  0 }, /*  63 */
	{ 67, 2, 181,   0,       0,  16,     0,   0,  35,   CT_WOOD         ,  0,  0,  0,  0,  0 }, /*  64 */
	{ 68, 2, 179,   0,       0,  19,     0,   0,  35,   CT_IRON_ORE     ,  0,  0,  0,  0,  0 }, /*  65 */
	{ 69, 2, 196,   0,       0,  18,     0,   0,  25,   CT_STEEL        ,  0,  0,  0,  0,  0 }, /*  66 */
	{ 70, 2, 255,   0,       0,  30,     0,   0,  25,   CT_VALUABLES    ,  0,  0,  0,  0,  0 }, /*  67 */
	{ 71, 2, 191,   0,       0,  22,     0,   0,  30,   CT_FOOD         ,  0,  0,  0,  0,  0 }, /*  68 */
	{ 72, 2, 196,   0,       0,  18,     0,   0,  25,   CT_PAPER        ,  0,  0,  0,  0,  0 }, /*  69 */
	{ 73, 2, 179,   0,       0,  19,     0,   0,  35,   CT_COPPER_ORE   ,  0,  0,  0,  0,  0 }, /*  70 */
	{ 47, 2, 199,   0,       0,  25,     0,   0,  30,   CT_WATER        ,  0,  0,  0,  0,  0 }, /*  71 */
	{ 48, 2, 182,   0,       0,  18,     0,   0,  30,   CT_FRUIT        ,  0,  0,  0,  0,  0 }, /*  72 */
	{ 49, 2, 185,   0,       0,  19,     0,   0,  26,   CT_RUBBER       ,  0,  0,  0,  0,  0 }, /*  73 */
	{ 50, 2, 176,   0,       0,  19,     0,   0,  35,   CT_SUGAR        ,  0,  0,  0,  0,  0 }, /*  74 */
	{ 51, 2, 178,   0,       0,  20,     0,   0,  35,   CT_COTTON_CANDY ,  0,  0,  0,  0,  0 }, /*  75 */
	{ 52, 2, 192,   0,       0,  20,     0,   0,  35,   CT_TOFFEE       ,  0,  0,  0,  0,  0 }, /*  76 */
	{ 53, 2, 190,   0,       0,  21,     0,   0,  25,   CT_BUBBLES      ,  0,  0,  0,  0,  0 }, /*  77 */
	{ 54, 2, 182,   0,       0,  24,     0,   0,  30,   CT_COLA         ,  0,  0,  0,  0,  0 }, /*  78 */
	{ 55, 2, 181,   0,       0,  21,     0,   0,  30,   CT_CANDY        ,  0,  0,  0,  0,  0 }, /*  79 */
	{ 56, 2, 183,   0,       0,  21,     0,   0,  25,   CT_TOYS         ,  0,  0,  0,  0,  0 }, /*  80 */
	{ 57, 2, 196,   0,       0,  18,     0,   0,  27,   CT_BATTERIES    ,  0,  0,  0,  0,  0 }, /*  81 */
	{ 58, 2, 193,   0,       0,  18,     0,   0,  30,   CT_FIZZY_DRINKS ,  0,  0,  0,  0,  0 }, /*  82 */
	{ 59, 2, 191,   0,       0,  18,     0,   0,  35,   CT_PLASTIC      ,  0,  0,  0,  0,  0 }, /*  83 */
	{ 28, 0,  70, 400,   10000, 105,   250,   2,   0,   0               ,  0,  0,  0,  0,  0 }, /*  84 */
	{ 29, 0,  74, 448,   12000, 120,   253,   2,   0,   0               ,  0,  0,  0,  0,  0 }, /*  85 */
	{ 30, 0,  82, 480,   15000, 130,   254,   2,   0,   0               ,  0,  0,  0,  0,  0 }, /*  86 */
	{ 31, 1,  95, 640, 20000/2,150/2,255/2,   2,   0,   0               ,  0,  0,  0,  0,  0 }, /*  87 */
	{ 28, 0,  70, 480,   10000, 120,   250,   2,   0,   0               ,  0,  0,  0,  0,  0 }, /*  88 */
	{ 60, 2, 247,   0,       0,  25,     0,   0,  47,   CT_PASSENGERS   ,  0,  0,  0,  0,  0 }, /*  89 */
	{ 62, 2, 228,   0,       0,  21,     0,   0,  37,   CT_MAIL         ,  0,  0,  0,  0,  0 }, /*  90 */
	{ 61, 2, 176,   0,       0,  18,     0,   0,  37,   CT_COAL         ,  0,  0,  0,  0,  0 }, /*  91 */
	{ 63, 2, 200,   0,       0,  24,     0,   0,  37,   CT_OIL          ,  0,  0,  0,  0,  0 }, /*  92 */
	{ 64, 2, 192,   0,       0,  20,     0,   0,  32,   CT_LIVESTOCK    ,  0,  0,  0,  0,  0 }, /*  93 */
	{ 65, 2, 190,   0,       0,  21,     0,   0,  32,   CT_GOODS        ,  0,  0,  0,  0,  0 }, /*  94 */
	{ 66, 2, 182,   0,       0,  19,     0,   0,  37,   CT_GRAIN        ,  0,  0,  0,  0,  0 }, /*  95 */
	{ 67, 2, 181,   0,       0,  16,     0,   0,  37,   CT_WOOD         ,  0,  0,  0,  0,  0 }, /*  96 */
	{ 68, 2, 179,   0,       0,  19,     0,   0,  37,   CT_IRON_ORE     ,  0,  0,  0,  0,  0 }, /*  97 */
	{ 69, 2, 196,   0,       0,  18,     0,   0,  27,   CT_STEEL        ,  0,  0,  0,  0,  0 }, /*  98 */
	{ 70, 2, 255,   0,       0,  30,     0,   0,  27,   CT_VALUABLES    ,  0,  0,  0,  0,  0 }, /*  99 */
	{ 71, 2, 191,   0,       0,  22,     0,   0,  32,   CT_FOOD         ,  0,  0,  0,  0,  0 }, /* 100 */
	{ 72, 2, 196,   0,       0,  18,     0,   0,  27,   CT_PAPER        ,  0,  0,  0,  0,  0 }, /* 101 */
	{ 73, 2, 179,   0,       0,  19,     0,   0,  37,   CT_COPPER_ORE   ,  0,  0,  0,  0,  0 }, /* 102 */
	{ 47, 2, 199,   0,       0,  25,     0,   0,  32,   CT_WATER        ,  0,  0,  0,  0,  0 }, /* 103 */
	{ 48, 2, 182,   0,       0,  18,     0,   0,  32,   CT_FRUIT        ,  0,  0,  0,  0,  0 }, /* 104 */
	{ 49, 2, 185,   0,       0,  19,     0,   0,  28,   CT_RUBBER       ,  0,  0,  0,  0,  0 }, /* 105 */
	{ 50, 2, 176,   0,       0,  19,     0,   0,  37,   CT_SUGAR        ,  0,  0,  0,  0,  0 }, /* 106 */
	{ 51, 2, 178,   0,       0,  20,     0,   0,  37,   CT_COTTON_CANDY ,  0,  0,  0,  0,  0 }, /* 107 */
	{ 52, 2, 192,   0,       0,  20,     0,   0,  37,   CT_TOFFEE       ,  0,  0,  0,  0,  0 }, /* 108 */
	{ 53, 2, 190,   0,       0,  21,     0,   0,  27,   CT_BUBBLES      ,  0,  0,  0,  0,  0 }, /* 109 */
	{ 54, 2, 182,   0,       0,  24,     0,   0,  32,   CT_COLA         ,  0,  0,  0,  0,  0 }, /* 110 */
	{ 55, 2, 181,   0,       0,  21,     0,   0,  32,   CT_CANDY        ,  0,  0,  0,  0,  0 }, /* 111 */
	{ 56, 2, 183,   0,       0,  21,     0,   0,  27,   CT_TOYS         ,  0,  0,  0,  0,  0 }, /* 112 */
	{ 57, 2, 196,   0,       0,  18,     0,   0,  29,   CT_BATTERIES    ,  0,  0,  0,  0,  0 }, /* 113 */
	{ 58, 2, 193,   0,       0,  18,     0,   0,  32,   CT_FIZZY_DRINKS ,  0,  0,  0,  0,  0 }, /* 114 */
	{ 59, 2, 191,   0,       0,  18,     0,   0,  37,   CT_PLASTIC      ,  0,  0,  0,  0,  0 }, /* 115 */
};

ShipVehicleInfo _ship_vehicle_info[NUM_SHIP_ENGINES] = {
	// image_index  cargo_type     cargo_amount                 refittable
	// |  base_cost |              |    running_cost            |
	// |  |    max_speed           |    |    sfx                |
	// |  |    |    |              |    |    |                  |
	{  1, 160, 48,  CT_OIL,        220, 140, SND_06_SHIP_HORN,  0 }, /*  0 */
	{  1, 176, 80,  CT_OIL,        350, 125, SND_06_SHIP_HORN,  0 }, /*  1 */
	{  2, 96,  64,  CT_PASSENGERS, 100, 90,  SND_07_FERRY_HORN, 0 }, /*  2 */
	{  2, 112, 128, CT_PASSENGERS, 130, 80,  SND_07_FERRY_HORN, 0 }, /*  3 */
	{  3, 148, 224, CT_PASSENGERS, 100, 190, SND_07_FERRY_HORN, 0 }, /*  4 */
	{  2, 96,  64,  CT_PASSENGERS, 100, 90,  SND_07_FERRY_HORN, 0 }, /*  5 */
	{  2, 112, 128, CT_PASSENGERS, 130, 80,  SND_07_FERRY_HORN, 0 }, /*  6 */
	{  0, 128, 48,  CT_GOODS,      160, 150, SND_06_SHIP_HORN,  1 }, /*  7 */
	{  0, 144, 80,  CT_GOODS,      190, 113, SND_06_SHIP_HORN,  1 }, /*  8 */
	{  0, 128, 48,  CT_GOODS,      160, 150, SND_06_SHIP_HORN,  1 }, /*  9 */
	{  0, 144, 80,  CT_GOODS,      190, 113, SND_06_SHIP_HORN,  1 }, /* 10 */
};

/* subtype: &1: regular aircraft (else chopper); &2: crashes easily on small airports */
/* sfx from somewhere around SND_45_PLANE_CRASHING are toyland plane-sounds */
AircraftVehicleInfo _aircraft_vehicle_info[NUM_AIRCRAFT_ENGINES] = {
	// image_index         sfx                         acceleration
	// |   base_cost       |                           |   max_speed
	// |   |    running_cost                           |   |    mail_capacity
	// |   |    |  subtype |                           |   |    |    passenger_capacity
	// |   |    |  |       |                           |   |    |    |
	{  1, 14,  85, 1, SND_08_PLANE_TAKE_OFF,          18,  37,  4,  25 }, /*  0 */
	{  0, 15, 100, 1, SND_08_PLANE_TAKE_OFF,          20,  37,  8,  65 }, /*  1 */
	{  2, 16, 130, 3, SND_09_JET,                     35,  74, 10,  90 }, /*  2 */
	{  8, 75, 250, 3, SND_3B_JET_OVERHEAD,            50, 181, 20, 100 }, /*  3 */
	{  5, 15,  98, 1, SND_08_PLANE_TAKE_OFF,          20,  37,  6,  30 }, /*  4 */
	{  6, 18, 240, 3, SND_09_JET,                     40,  74, 30, 200 }, /*  5 */
	{  2, 17, 150, 1, SND_09_JET,                     35,  74, 15, 100 }, /*  6 */
	{  2, 18, 245, 3, SND_09_JET,                     40,  74, 30, 150 }, /*  7 */
	{	 3, 19, 192, 3, SND_09_JET,                     40,  74, 40, 220 }, /*  8 */
	{  3, 20, 190, 3, SND_09_JET,                     40,  74, 25, 230 }, /*  9 */
	{  2, 16, 135, 3, SND_09_JET,                     35,  74, 10,  95 }, /* 10 */
	{  2, 18, 240, 3, SND_09_JET,                     40,  74, 35, 170 }, /* 11 */
	{  4, 17, 155, 3, SND_09_JET,                     40,  74, 15, 110 }, /* 12 */
	{  7, 30, 253, 3, SND_3D_ANOTHER_JET_OVERHEAD,    40,  74, 50, 300 }, /* 13 */
	{  4, 18, 210, 3, SND_09_JET,                     40,  74, 25, 200 }, /* 14 */
	{  4, 19, 220, 3, SND_09_JET,                     40,  74, 25, 240 }, /* 15 */
	{  4, 27, 230, 3, SND_09_JET,                     40,  74, 40, 260 }, /* 16 */
	{  3, 25, 225, 3, SND_09_JET,                     40,  74, 35, 240 }, /* 17 */
	{  4, 20, 235, 3, SND_09_JET,                     40,  74, 30, 260 }, /* 18 */
	{  4, 19, 220, 3, SND_09_JET,                     40,  74, 25, 210 }, /* 19 */
	{  4, 18, 170, 3, SND_09_JET,                     40,  74, 20, 160 }, /* 20 */
	{  4, 26, 210, 3, SND_09_JET,                     40,  74, 20, 220 }, /* 21 */
	{  6, 16, 125, 1, SND_09_JET,                     50,  74, 10,  80 }, /* 22 */
	{  2, 17, 145, 1, SND_09_JET,                     40,  74, 10,  85 }, /* 23 */
	{ 11, 16, 130, 3, SND_09_JET,                     40,  74, 10,  75 }, /* 24 */
	{ 10, 16, 149, 3, SND_09_JET,                     40,  74, 10,  85 }, /* 25 */
	{ 15, 17, 170, 3, SND_09_JET,                     40,  74, 18,  65 }, /* 26 */
	{ 12, 18, 210, 3, SND_09_JET,                     40,  74, 25, 110 }, /* 27 */
	{ 13, 20, 230, 3, SND_09_JET,                     40,  74, 60, 180 }, /* 28 */
	{ 14, 21, 220, 3, SND_09_JET,                     40,  74, 65, 150 }, /* 29 */
	{ 16, 19, 160, 3, SND_09_JET,                     40, 181, 45,  85 }, /* 30 */
	{ 17, 24, 248, 3, SND_3D_ANOTHER_JET_OVERHEAD,    40,  74, 80, 400 }, /* 31 */
	{ 18, 80, 251, 3, SND_3B_JET_OVERHEAD,            50, 181, 45, 130 }, /* 32 */
	{ 20, 13,  85, 1, SND_45_PLANE_CRASHING,          18,  37,  5,  25 }, /* 33 */
	{ 21, 18, 100, 1, SND_46_PLANE_ENGINE_SPUTTERING, 20,  37,  9,  60 }, /* 34 */
	{ 22, 25, 140, 1, SND_09_JET,                     40,  74, 12,  90 }, /* 35 */
	{ 23, 32, 220, 3, SND_3D_ANOTHER_JET_OVERHEAD,    40,  74, 40, 200 }, /* 36 */
	{ 24, 80, 255, 3, SND_3B_JET_OVERHEAD,            50, 181, 30, 100 }, /* 37 */
	{  9, 15,  81, 0, SND_09_JET,                     20,  25, 15,  40 }, /* 38 */
	{ 19, 17,  77, 0, SND_09_JET,                     20,  40, 20,  55 }, /* 39 */
	{ 25, 15,  80, 0, SND_09_JET,                     20,  25, 10,  40 }, /* 40 */
};

/* I hope I got the cargo types right, figuring out which is which for which
 * climate is a bitch */
RoadVehicleInfo _road_vehicle_info[NUM_ROAD_ENGINES] = {
	// image_index       sfx                                 max_speed
	// |    base_cost    |                                   |   capacity
	// |    |    running_cost                                |   |  cargo_type
	// |    |    |       |                                   |   |  |
	{  0, 120,  91, SND_19_BUS_START_PULL_AWAY,            112, 31, CT_PASSENGERS   }, /*  0 */
	{ 17, 140, 128, SND_1C_TRUCK_START_2,                  176, 35, CT_PASSENGERS   }, /*  1 */
	{ 17, 150, 178, SND_1B_TRUCK_START,                    224, 37, CT_PASSENGERS   }, /*  2 */
	{ 34, 160, 240, SND_1B_TRUCK_START,                    255, 40, CT_PASSENGERS   }, /*  3 */
	{ 51, 120,  91, SND_3C_COMEDY_CAR,                     112, 30, CT_PASSENGERS   }, /*  4 */
	{ 51, 140, 171, SND_3E_COMEDY_CAR_2,                   192, 35, CT_PASSENGERS   }, /*  5 */
	{ 51, 160, 240, SND_3C_COMEDY_CAR,                     240, 38, CT_PASSENGERS   }, /*  6 */
	{  1, 108,  90, SND_19_BUS_START_PULL_AWAY,             96, 20, CT_COAL         }, /*  7 */
	{ 18, 128, 168, SND_19_BUS_START_PULL_AWAY,            176, 25, CT_COAL         }, /*  8 */
	{ 35, 138, 240, SND_19_BUS_START_PULL_AWAY,            224, 28, CT_COAL         }, /*  9 */
	{  2, 115,  90, SND_19_BUS_START_PULL_AWAY,             96, 22, CT_MAIL         }, /* 10 */
	{ 19, 135, 168, SND_19_BUS_START_PULL_AWAY,            176, 28, CT_MAIL         }, /* 11 */
	{ 36, 145, 240, SND_19_BUS_START_PULL_AWAY,            224, 30, CT_MAIL         }, /* 12 */
	{ 57, 115,  90, SND_3E_COMEDY_CAR_2,                    96, 22, CT_MAIL         }, /* 13 */
	{ 57, 135, 168, SND_3C_COMEDY_CAR,                     176, 28, CT_MAIL         }, /* 14 */
	{ 57, 145, 240, SND_3E_COMEDY_CAR_2,                   224, 30, CT_MAIL         }, /* 15 */
	{  3, 110,  90, SND_19_BUS_START_PULL_AWAY,             96, 21, CT_OIL          }, /* 16 */
	{ 20, 140, 168, SND_19_BUS_START_PULL_AWAY,            176, 25, CT_OIL          }, /* 17 */
	{ 37, 150, 240, SND_19_BUS_START_PULL_AWAY,            224, 27, CT_OIL          }, /* 18 */
	{  4, 105,  90, SND_19_BUS_START_PULL_AWAY,             96, 14, CT_LIVESTOCK    }, /* 19 */
	{ 21, 130, 168, SND_19_BUS_START_PULL_AWAY,            176, 16, CT_LIVESTOCK    }, /* 20 */
	{ 38, 140, 240, SND_19_BUS_START_PULL_AWAY,            224, 18, CT_LIVESTOCK    }, /* 21 */
	{  5, 107,  90, SND_19_BUS_START_PULL_AWAY,             96, 14, CT_GOODS        }, /* 22 */
	{ 22, 130, 168, SND_19_BUS_START_PULL_AWAY,            176, 16, CT_GOODS        }, /* 23 */
	{ 39, 140, 240, SND_19_BUS_START_PULL_AWAY,            224, 18, CT_GOODS        }, /* 24 */
	{  6, 114,  90, SND_19_BUS_START_PULL_AWAY,             96, 20, CT_GRAIN        }, /* 25 */
	{ 23, 133, 168, SND_19_BUS_START_PULL_AWAY,            176, 25, CT_GRAIN        }, /* 26 */
	{ 40, 143, 240, SND_19_BUS_START_PULL_AWAY,            224, 30, CT_GRAIN        }, /* 27 */
	{  7, 118,  90, SND_19_BUS_START_PULL_AWAY,             96, 20, CT_WOOD         }, /* 28 */
	{ 24, 137, 168, SND_19_BUS_START_PULL_AWAY,            176, 22, CT_WOOD         }, /* 29 */
	{ 41, 147, 240, SND_19_BUS_START_PULL_AWAY,            224, 24, CT_WOOD         }, /* 30 */
	{  8, 121,  90, SND_19_BUS_START_PULL_AWAY,             96, 22, CT_IRON_ORE     }, /* 31 */
	{ 25, 140, 168, SND_19_BUS_START_PULL_AWAY,            176, 25, CT_IRON_ORE     }, /* 32 */
	{ 42, 150, 240, SND_19_BUS_START_PULL_AWAY,            224, 27, CT_IRON_ORE     }, /* 33 */
	{  9, 112,  90, SND_19_BUS_START_PULL_AWAY,             96, 15, CT_STEEL        }, /* 34 */
	{ 26, 135, 168, SND_19_BUS_START_PULL_AWAY,            176, 18, CT_STEEL        }, /* 35 */
	{ 43, 145, 240, SND_19_BUS_START_PULL_AWAY,            224, 20, CT_STEEL        }, /* 36 */
	{ 10, 145,  90, SND_19_BUS_START_PULL_AWAY,             96, 12, CT_VALUABLES    }, /* 37 */
	{ 27, 170, 168, SND_19_BUS_START_PULL_AWAY,            176, 15, CT_VALUABLES    }, /* 38 */
	{ 44, 180, 240, SND_19_BUS_START_PULL_AWAY,            224, 16, CT_VALUABLES    }, /* 39 */
	{ 11, 112,  90, SND_19_BUS_START_PULL_AWAY,             96, 17, CT_FOOD         }, /* 40 */
	{ 28, 134, 168, SND_19_BUS_START_PULL_AWAY,            176, 20, CT_FOOD         }, /* 41 */
	{ 45, 144, 240, SND_19_BUS_START_PULL_AWAY,            224, 22, CT_FOOD         }, /* 42 */
	{ 12, 112,  90, SND_19_BUS_START_PULL_AWAY,             96, 15, CT_PAPER        }, /* 43 */
	{ 29, 135, 168, SND_19_BUS_START_PULL_AWAY,            176, 18, CT_PAPER        }, /* 44 */
	{ 46, 145, 240, SND_19_BUS_START_PULL_AWAY,            224, 20, CT_PAPER        }, /* 45 */
	{ 13, 121,  90, SND_19_BUS_START_PULL_AWAY,             96, 22, CT_COPPER_ORE   }, /* 46 */
	{ 30, 140, 168, SND_19_BUS_START_PULL_AWAY,            176, 25, CT_COPPER_ORE   }, /* 47 */
	{ 47, 150, 240, SND_19_BUS_START_PULL_AWAY,            224, 27, CT_COPPER_ORE   }, /* 48 */
	{ 14, 111,  90, SND_19_BUS_START_PULL_AWAY,             96, 21, CT_WATER        }, /* 49 */
	{ 31, 141, 168, SND_19_BUS_START_PULL_AWAY,            176, 25, CT_WATER        }, /* 50 */
	{ 48, 151, 240, SND_19_BUS_START_PULL_AWAY,            224, 27, CT_WATER        }, /* 51 */
	{ 15, 118,  90, SND_19_BUS_START_PULL_AWAY,             96, 18, CT_FRUIT        }, /* 52 */
	{ 32, 148, 168, SND_19_BUS_START_PULL_AWAY,            176, 20, CT_FRUIT        }, /* 53 */
	{ 49, 158, 240, SND_19_BUS_START_PULL_AWAY,            224, 23, CT_FRUIT        }, /* 54 */
	{ 16, 117,  90, SND_19_BUS_START_PULL_AWAY,             96, 17, CT_RUBBER       }, /* 55 */
	{ 33, 147, 168, SND_19_BUS_START_PULL_AWAY,            176, 19, CT_RUBBER       }, /* 56 */
	{ 50, 157, 240, SND_19_BUS_START_PULL_AWAY,            224, 22, CT_RUBBER       }, /* 57 */
	{ 52, 117,  90, SND_3F_COMEDY_CAR_3,                    96, 17, CT_SUGAR        }, /* 58 */
	{ 52, 147, 168, SND_40_COMEDY_CAR_START_AND_PULL_AWAY, 176, 19, CT_SUGAR        }, /* 59 */
	{ 52, 157, 240, SND_3F_COMEDY_CAR_3,                   224, 22, CT_SUGAR        }, /* 60 */
	{ 53, 117,  90, SND_40_COMEDY_CAR_START_AND_PULL_AWAY,  96, 17, CT_COLA         }, /* 61 */
	{ 53, 147, 168, SND_3F_COMEDY_CAR_3,                   176, 19, CT_COLA         }, /* 62 */
	{ 53, 157, 240, SND_40_COMEDY_CAR_START_AND_PULL_AWAY, 224, 22, CT_COLA         }, /* 63 */
	{ 54, 117,  90, SND_3F_COMEDY_CAR_3,                    96, 17, CT_COTTON_CANDY }, /* 64 */
	{ 54, 147, 168, SND_40_COMEDY_CAR_START_AND_PULL_AWAY, 176, 19, CT_COTTON_CANDY }, /* 65 */
	{ 54, 157, 240, SND_3F_COMEDY_CAR_3,                   224, 22, CT_COTTON_CANDY }, /* 66 */
	{ 55, 117,  90, SND_40_COMEDY_CAR_START_AND_PULL_AWAY,  96, 17, CT_TOFFEE       }, /* 67 */
	{ 55, 147, 168, SND_3F_COMEDY_CAR_3,                   176, 19, CT_TOFFEE       }, /* 68 */
	{ 55, 157, 240, SND_40_COMEDY_CAR_START_AND_PULL_AWAY, 224, 22, CT_TOFFEE       }, /* 69 */
	{ 56, 117,  90, SND_3F_COMEDY_CAR_3,                    96, 17, CT_TOYS         }, /* 70 */
	{ 56, 147, 168, SND_40_COMEDY_CAR_START_AND_PULL_AWAY, 176, 19, CT_TOYS         }, /* 71 */
	{ 56, 157, 240, SND_3F_COMEDY_CAR_3,                   224, 22, CT_TOYS         }, /* 72 */
	{ 58, 117,  90, SND_40_COMEDY_CAR_START_AND_PULL_AWAY,  96, 17, CT_CANDY        }, /* 73 */
	{ 58, 147, 168, SND_3F_COMEDY_CAR_3,                   176, 19, CT_CANDY        }, /* 74 */
	{ 58, 157, 240, SND_40_COMEDY_CAR_START_AND_PULL_AWAY, 224, 22, CT_CANDY        }, /* 75 */
	{ 59, 117,  90, SND_3F_COMEDY_CAR_3,                    96, 17, CT_BATTERIES    }, /* 76 */
	{ 59, 147, 168, SND_40_COMEDY_CAR_START_AND_PULL_AWAY, 176, 19, CT_BATTERIES    }, /* 77 */
	{ 59, 157, 240, SND_3F_COMEDY_CAR_3,                   224, 22, CT_BATTERIES    }, /* 78 */
	{ 60, 117,  90, SND_40_COMEDY_CAR_START_AND_PULL_AWAY,  96, 17, CT_FIZZY_DRINKS }, /* 79 */
	{ 60, 147, 168, SND_3F_COMEDY_CAR_3,                   176, 19, CT_FIZZY_DRINKS }, /* 80 */
	{ 60, 157, 240, SND_40_COMEDY_CAR_START_AND_PULL_AWAY, 224, 22, CT_FIZZY_DRINKS }, /* 81 */
	{ 61, 117,  90, SND_3F_COMEDY_CAR_3,                    96, 17, CT_PLASTIC      }, /* 82 */
	{ 61, 147, 168, SND_40_COMEDY_CAR_START_AND_PULL_AWAY, 176, 19, CT_PLASTIC      }, /* 83 */
	{ 61, 157, 240, SND_3F_COMEDY_CAR_3,                   224, 22, CT_PLASTIC      }, /* 84 */
	{ 62, 117,  90, SND_40_COMEDY_CAR_START_AND_PULL_AWAY,  96, 17, CT_BUBBLES      }, /* 85 */
	{ 62, 147, 168, SND_3F_COMEDY_CAR_3,                   176, 19, CT_BUBBLES      }, /* 86 */
	{ 62, 157, 240, SND_40_COMEDY_CAR_START_AND_PULL_AWAY, 224, 22, CT_BUBBLES      }, /* 87 */
};

#endif /* ENGINES_H */
