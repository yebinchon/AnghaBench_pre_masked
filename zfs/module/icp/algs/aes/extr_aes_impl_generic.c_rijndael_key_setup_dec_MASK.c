
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int*,int const*,int) ;

__attribute__((used)) static int
FUNC_1(uint32_t VAR_5[], const uint32_t VAR_6[], int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11;


 VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7);


 for (VAR_9 = 0, VAR_10 = 4 * VAR_8; VAR_9 < VAR_10; VAR_9 += 4, VAR_10 -= 4) {
  VAR_11 = VAR_5[VAR_9];
  VAR_5[VAR_9] = VAR_5[VAR_10];
  VAR_5[VAR_10] = VAR_11;
  VAR_11 = VAR_5[VAR_9 + 1];
  VAR_5[VAR_9 + 1] = VAR_5[VAR_10 + 1];
  VAR_5[VAR_10 + 1] = VAR_11;
  VAR_11 = VAR_5[VAR_9 + 2];
  VAR_5[VAR_9 + 2] = VAR_5[VAR_10 + 2];
  VAR_5[VAR_10 + 2] = VAR_11;
  VAR_11 = VAR_5[VAR_9 + 3];
  VAR_5[VAR_9 + 3] = VAR_5[VAR_10 + 3];
  VAR_5[VAR_10 + 3] = VAR_11;
 }





 for (VAR_9 = 1; VAR_9 < VAR_8; VAR_9++) {
  VAR_5 += 4;
  VAR_5[0] = VAR_0[VAR_4[VAR_5[0] >> 24] & 0xff] ^
      VAR_1[VAR_4[(VAR_5[0] >> 16) & 0xff] & 0xff] ^
      VAR_2[VAR_4[(VAR_5[0] >> 8) & 0xff] & 0xff] ^
      VAR_3[VAR_4[VAR_5[0] & 0xff] & 0xff];
  VAR_5[1] = VAR_0[VAR_4[VAR_5[1] >> 24] & 0xff] ^
      VAR_1[VAR_4[(VAR_5[1] >> 16) & 0xff] & 0xff] ^
      VAR_2[VAR_4[(VAR_5[1] >> 8) & 0xff] & 0xff] ^
      VAR_3[VAR_4[VAR_5[1] & 0xff] & 0xff];
  VAR_5[2] = VAR_0[VAR_4[VAR_5[2] >> 24] & 0xff] ^
      VAR_1[VAR_4[(VAR_5[2] >> 16) & 0xff] & 0xff] ^
      VAR_2[VAR_4[(VAR_5[2] >> 8) & 0xff] & 0xff] ^
      VAR_3[VAR_4[VAR_5[2] & 0xff] & 0xff];
  VAR_5[3] = VAR_0[VAR_4[VAR_5[3] >> 24] & 0xff] ^
      VAR_1[VAR_4[(VAR_5[3] >> 16) & 0xff] & 0xff] ^
      VAR_2[VAR_4[(VAR_5[3] >> 8) & 0xff] & 0xff] ^
      VAR_3[VAR_4[VAR_5[3] & 0xff] & 0xff];
 }

 return (VAR_8);
}
