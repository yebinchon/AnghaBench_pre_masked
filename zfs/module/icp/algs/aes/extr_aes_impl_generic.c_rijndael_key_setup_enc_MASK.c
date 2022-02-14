
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int
FUNC_0(uint32_t VAR_2[], const uint32_t VAR_3[],
    int VAR_4)
{
 int VAR_5 = 0;
 uint32_t VAR_6;

 VAR_2[0] = VAR_3[0];
 VAR_2[1] = VAR_3[1];
 VAR_2[2] = VAR_3[2];
 VAR_2[3] = VAR_3[3];

 if (VAR_4 == 128) {
  for (;;) {
   VAR_6 = VAR_2[3];
   VAR_2[4] = VAR_2[0] ^
       (VAR_0[(VAR_6 >> 16) & 0xff] & 0xff000000) ^
       (VAR_0[(VAR_6 >> 8) & 0xff] & 0x00ff0000) ^
       (VAR_0[VAR_6 & 0xff] & 0x0000ff00) ^
       (VAR_0[VAR_6 >> 24] & 0x000000ff) ^
       VAR_1[VAR_5];
   VAR_2[5] = VAR_2[1] ^ VAR_2[4];
   VAR_2[6] = VAR_2[2] ^ VAR_2[5];
   VAR_2[7] = VAR_2[3] ^ VAR_2[6];

   if (++VAR_5 == 10) {
    return (10);
   }
   VAR_2 += 4;
  }
 }

 VAR_2[4] = VAR_3[4];
 VAR_2[5] = VAR_3[5];

 if (VAR_4 == 192) {
  for (;;) {
   VAR_6 = VAR_2[5];
   VAR_2[6] = VAR_2[0] ^
       (VAR_0[(VAR_6 >> 16) & 0xff] & 0xff000000) ^
       (VAR_0[(VAR_6 >> 8) & 0xff] & 0x00ff0000) ^
       (VAR_0[VAR_6 & 0xff] & 0x0000ff00) ^
       (VAR_0[VAR_6 >> 24] & 0x000000ff) ^
       VAR_1[VAR_5];
   VAR_2[7] = VAR_2[1] ^ VAR_2[6];
   VAR_2[8] = VAR_2[2] ^ VAR_2[7];
   VAR_2[9] = VAR_2[3] ^ VAR_2[8];

   if (++VAR_5 == 8) {
    return (12);
   }

   VAR_2[10] = VAR_2[4] ^ VAR_2[9];
   VAR_2[11] = VAR_2[5] ^ VAR_2[10];
   VAR_2 += 6;
  }
 }

 VAR_2[6] = VAR_3[6];
 VAR_2[7] = VAR_3[7];

 if (VAR_4 == 256) {
  for (;;) {
   VAR_6 = VAR_2[7];
   VAR_2[8] = VAR_2[0] ^
       (VAR_0[(VAR_6 >> 16) & 0xff] & 0xff000000) ^
       (VAR_0[(VAR_6 >> 8) & 0xff] & 0x00ff0000) ^
       (VAR_0[VAR_6 & 0xff] & 0x0000ff00) ^
       (VAR_0[VAR_6 >> 24] & 0x000000ff) ^
       VAR_1[VAR_5];
   VAR_2[9] = VAR_2[1] ^ VAR_2[8];
   VAR_2[10] = VAR_2[2] ^ VAR_2[9];
   VAR_2[11] = VAR_2[3] ^ VAR_2[10];

   if (++VAR_5 == 7) {
    return (14);
   }
   VAR_6 = VAR_2[11];
   VAR_2[12] = VAR_2[4] ^
       (VAR_0[VAR_6 >> 24] & 0xff000000) ^
       (VAR_0[(VAR_6 >> 16) & 0xff] & 0x00ff0000) ^
       (VAR_0[(VAR_6 >> 8) & 0xff] & 0x0000ff00) ^
       (VAR_0[VAR_6 & 0xff] & 0x000000ff);
   VAR_2[13] = VAR_2[5] ^ VAR_2[12];
   VAR_2[14] = VAR_2[6] ^ VAR_2[13];
   VAR_2[15] = VAR_2[7] ^ VAR_2[14];

   VAR_2 += 8;
  }
 }

 return (0);
}
