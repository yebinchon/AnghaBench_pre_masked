
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t U32 ;
typedef int BYTE ;


 int FUNC_0 (size_t const) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int*,size_t,int const*,size_t,int,void*,size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (size_t*,int ,int) ;
 int VAR_2 ;

size_t FUNC_5(BYTE *VAR_3, size_t VAR_4, U32 *VAR_5, U32 *VAR_6, U32 *VAR_7, const void *VAR_8, size_t VAR_9, void *VAR_10, size_t VAR_11)
{
 U32 VAR_12;
 const BYTE *VAR_13 = (const BYTE *)VAR_8;
 size_t VAR_14;
 size_t VAR_15;

 if (!VAR_9)
  return FUNC_1(VAR_2);
 VAR_14 = VAR_13[0];


 if (VAR_14 >= 128) {
  VAR_15 = VAR_14 - 127;
  VAR_14 = ((VAR_15 + 1) / 2);
  if (VAR_14 + 1 > VAR_9)
   return FUNC_1(VAR_2);
  if (VAR_15 >= VAR_4)
   return FUNC_1(VAR_1);
  VAR_13 += 1;
  {
   U32 VAR_16;
   for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16 += 2) {
    VAR_3[VAR_16] = VAR_13[VAR_16 / 2] >> 4;
    VAR_3[VAR_16 + 1] = VAR_13[VAR_16 / 2] & 15;
   }
  }
 } else {
  if (VAR_14 + 1 > VAR_9)
   return FUNC_1(VAR_2);
  VAR_15 = FUNC_2(VAR_3, VAR_4 - 1, VAR_13 + 1, VAR_14, 6, VAR_10, VAR_11);
  if (FUNC_3(VAR_15))
   return VAR_15;
 }


 FUNC_4(VAR_5, 0, (VAR_0 + 1) * sizeof(U32));
 VAR_12 = 0;
 {
  U32 VAR_17;
  for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
   if (VAR_3[VAR_17] >= VAR_0)
    return FUNC_1(VAR_1);
   VAR_5[VAR_3[VAR_17]]++;
   VAR_12 += (1 << VAR_3[VAR_17]) >> 1;
  }
 }
 if (VAR_12 == 0)
  return FUNC_1(VAR_1);


 {
  U32 const VAR_18 = FUNC_0(VAR_12) + 1;
  if (VAR_18 > VAR_0)
   return FUNC_1(VAR_1);
  *VAR_7 = VAR_18;

  {
   U32 const VAR_19 = 1 << VAR_18;
   U32 const VAR_20 = VAR_19 - VAR_12;
   U32 const VAR_21 = 1 << FUNC_0(VAR_20);
   U32 const VAR_22 = FUNC_0(VAR_20) + 1;
   if (VAR_21 != VAR_20)
    return FUNC_1(VAR_1);
   VAR_3[VAR_15] = (BYTE)VAR_22;
   VAR_5[VAR_22]++;
  }
 }


 if ((VAR_5[1] < 2) || (VAR_5[1] & 1))
  return FUNC_1(VAR_1);


 *VAR_6 = (U32)(VAR_15 + 1);
 return VAR_14 + 1;
}
