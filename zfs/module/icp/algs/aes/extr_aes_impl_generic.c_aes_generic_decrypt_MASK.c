
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int const* VAR_0 ;
 int const* VAR_1 ;
 int const* VAR_2 ;
 int const* VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static void
FUNC_0(const uint32_t VAR_5[], int VAR_6, const uint32_t VAR_7[4],
    uint32_t VAR_8[4])
{
 uint32_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;





 VAR_9 = VAR_7[0] ^ VAR_5[0];
 VAR_10 = VAR_7[1] ^ VAR_5[1];
 VAR_11 = VAR_7[2] ^ VAR_5[2];
 VAR_12 = VAR_7[3] ^ VAR_5[3];





 VAR_17 = VAR_6 >> 1;

 for (;;) {
  VAR_13 = VAR_0[VAR_9 >> 24] ^
      VAR_1[(VAR_12 >> 16) & 0xff] ^
      VAR_2[(VAR_11 >> 8) & 0xff] ^
      VAR_3[VAR_10 & 0xff] ^
      VAR_5[4];

  VAR_14 = VAR_0[VAR_10 >> 24] ^
      VAR_1[(VAR_9 >> 16) & 0xff] ^
      VAR_2[(VAR_12 >> 8) & 0xff] ^
      VAR_3[VAR_11 & 0xff] ^
      VAR_5[5];

  VAR_15 = VAR_0[VAR_11 >> 24] ^
      VAR_1[(VAR_10 >> 16) & 0xff] ^
      VAR_2[(VAR_9 >> 8) & 0xff] ^
      VAR_3[VAR_12 & 0xff] ^
      VAR_5[6];

  VAR_16 = VAR_0[VAR_12 >> 24] ^
      VAR_1[(VAR_11 >> 16) & 0xff] ^
      VAR_2[(VAR_10 >> 8) & 0xff] ^
      VAR_3[VAR_9 & 0xff] ^
      VAR_5[7];

  VAR_5 += 8;

  if (--VAR_17 == 0) {
   break;
  }

  VAR_9 = VAR_0[VAR_13 >> 24] ^
      VAR_1[(VAR_16 >> 16) & 0xff] ^
      VAR_2[(VAR_15 >> 8) & 0xff] ^
      VAR_3[VAR_14 & 0xff] ^
      VAR_5[0];

  VAR_10 = VAR_0[VAR_14 >> 24] ^
      VAR_1[(VAR_13 >> 16) & 0xff] ^
      VAR_2[(VAR_16 >> 8) & 0xff] ^
      VAR_3[VAR_15 & 0xff] ^
      VAR_5[1];

  VAR_11 = VAR_0[VAR_15 >> 24] ^
      VAR_1[(VAR_14 >> 16) & 0xff] ^
      VAR_2[(VAR_13 >> 8) & 0xff] ^
      VAR_3[VAR_16 & 0xff] ^
      VAR_5[2];

  VAR_12 = VAR_0[VAR_16 >> 24] ^
      VAR_1[(VAR_15 >> 16) & 0xff] ^
      VAR_2[(VAR_14 >> 8) & 0xff] ^
      VAR_3[VAR_13 & 0xff] ^
      VAR_5[3];
 }






 VAR_9 = (VAR_4[VAR_13 >> 24] & 0xff000000) ^
     (VAR_4[(VAR_16 >> 16) & 0xff] & 0x00ff0000) ^
     (VAR_4[(VAR_15 >> 8) & 0xff] & 0x0000ff00) ^
     (VAR_4[VAR_14 & 0xff] & 0x000000ff) ^
     VAR_5[0];
 VAR_8[0] = VAR_9;

 VAR_10 = (VAR_4[VAR_14 >> 24] & 0xff000000) ^
     (VAR_4[(VAR_13 >> 16) & 0xff] & 0x00ff0000) ^
     (VAR_4[(VAR_16 >> 8) & 0xff] & 0x0000ff00) ^
     (VAR_4[VAR_15 & 0xff] & 0x000000ff) ^
     VAR_5[1];
 VAR_8[1] = VAR_10;

 VAR_11 = (VAR_4[VAR_15 >> 24] & 0xff000000) ^
     (VAR_4[(VAR_14 >> 16) & 0xff] & 0x00ff0000) ^
     (VAR_4[(VAR_13 >> 8) & 0xff] & 0x0000ff00) ^
     (VAR_4[VAR_16 & 0xff] & 0x000000ff) ^
     VAR_5[2];
 VAR_8[2] = VAR_11;

 VAR_12 = (VAR_4[VAR_16 >> 24] & 0xff000000) ^
     (VAR_4[(VAR_15 >> 16) & 0xff] & 0x00ff0000) ^
     (VAR_4[(VAR_14 >> 8) & 0xff] & 0x0000ff00) ^
     (VAR_4[VAR_13 & 0xff] & 0x000000ff) ^
     VAR_5[3];
 VAR_8[3] = VAR_12;
}
