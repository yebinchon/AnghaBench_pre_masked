
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U64 ;
typedef int U32 ;


 size_t FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (size_t const) ;
 unsigned int FUNC_2 (size_t,unsigned int) ;
 size_t FUNC_3 (short*,unsigned int,unsigned int const*,size_t,unsigned int) ;
 int VAR_3 ;
 int FUNC_4 (int,int) ;
 int VAR_4 ;

size_t FUNC_5(short *VAR_5, unsigned VAR_6, const unsigned *VAR_7, size_t VAR_8, unsigned VAR_9)
{

 if (VAR_6 == 0)
  VAR_6 = VAR_0;
 if (VAR_6 < VAR_2)
  return FUNC_0(VAR_3);
 if (VAR_6 > VAR_1)
  return FUNC_0(VAR_4);
 if (VAR_6 < FUNC_2(VAR_8, VAR_9))
  return FUNC_0(VAR_3);

 {
  U32 const VAR_10[] = {0, 473195, 504333, 520860, 550000, 700000, 750000, 830000};
  U64 const VAR_11 = 62 - VAR_6;
  U64 const VAR_12 = FUNC_4((U64)1 << 62, (U32)VAR_8);
  U64 const VAR_13 = 1ULL << (VAR_11 - 20);
  int VAR_14 = 1 << VAR_6;
  unsigned VAR_15;
  unsigned VAR_16 = 0;
  short VAR_17 = 0;
  U32 VAR_18 = (U32)(VAR_8 >> VAR_6);

  for (VAR_15 = 0; VAR_15 <= VAR_9; VAR_15++) {
   if (VAR_7[VAR_15] == VAR_8)
    return 0;
   if (VAR_7[VAR_15] == 0) {
    VAR_5[VAR_15] = 0;
    continue;
   }
   if (VAR_7[VAR_15] <= VAR_18) {
    VAR_5[VAR_15] = -1;
    VAR_14--;
   } else {
    short VAR_19 = (short)((VAR_7[VAR_15] * VAR_12) >> VAR_11);
    if (VAR_19 < 8) {
     U64 VAR_20 = VAR_13 * VAR_10[VAR_19];
     VAR_19 += (VAR_7[VAR_15] * VAR_12) - ((U64)VAR_19 << VAR_11) > VAR_20;
    }
    if (VAR_19 > VAR_17)
     VAR_17 = VAR_19, VAR_16 = VAR_15;
    VAR_5[VAR_15] = VAR_19;
    VAR_14 -= VAR_19;
   }
  }
  if (-VAR_14 >= (VAR_5[VAR_16] >> 1)) {

   size_t const VAR_21 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
   if (FUNC_1(VAR_21))
    return VAR_21;
  } else
   VAR_5[VAR_16] += (short)VAR_14;
 }

 return VAR_6;
}
