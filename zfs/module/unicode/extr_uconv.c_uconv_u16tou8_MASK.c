
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ uchar_t ;
typedef int boolean_t ;


 scalar_t__ const FUNC_0 (scalar_t__ const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (scalar_t__ const*,size_t,int*) ;
 scalar_t__ FUNC_2 (int,int*,int*) ;

int
FUNC_3(const uint16_t *VAR_18, size_t *VAR_19,
    uchar_t *VAR_20, size_t *VAR_21, int VAR_22)
{
 int VAR_23;
 int VAR_24;
 size_t VAR_25;
 size_t VAR_26;
 uint32_t VAR_27;
 uint32_t VAR_28;
 boolean_t VAR_29;

 if (VAR_18 == ((void*)0) || VAR_19 == ((void*)0))
  return (VAR_2);

 if (VAR_20 == ((void*)0) || VAR_21 == ((void*)0))
  return (VAR_0);

 if (FUNC_2(VAR_22, &VAR_23, &VAR_24) != 0)
  return (VAR_1);

 VAR_25 = VAR_26 = 0;
 VAR_27 = 0;
 VAR_29 = ((VAR_22 & VAR_4) == 0);

 if ((VAR_22 & VAR_5) &&
     FUNC_1(VAR_18, *VAR_19, &VAR_23))
  VAR_25++;

 VAR_23 &= VAR_6;

 for (; VAR_25 < *VAR_19; VAR_25++) {
  if (VAR_18[VAR_25] == 0 && VAR_29)
   break;

  VAR_28 = (uint32_t)((VAR_23) ? VAR_18[VAR_25] : FUNC_0(VAR_18[VAR_25]));

  if (VAR_28 >= VAR_10 && VAR_28 <= VAR_9) {
   if (VAR_27)
    return (VAR_2);
   VAR_27 = VAR_28;
   continue;
  } else if (VAR_28 >= VAR_12 && VAR_28 <= VAR_11) {
   if (! VAR_27)
    return (VAR_2);
   VAR_28 = (((VAR_27 - VAR_10) * VAR_8 +
       VAR_28 - VAR_12) & VAR_7)
       + VAR_13;
   VAR_27 = 0;
  } else if (VAR_27) {
   return (VAR_2);
  }






  if (VAR_28 <= VAR_15) {
   if (VAR_26 >= *VAR_21)
    return (VAR_0);
   VAR_20[VAR_26++] = (uchar_t)VAR_28;
  } else if (VAR_28 <= VAR_17) {
   if ((VAR_26 + 1) >= *VAR_21)
    return (VAR_0);
   VAR_20[VAR_26++] = (uchar_t)(0xc0 | ((VAR_28 & 0x07c0) >> 6));
   VAR_20[VAR_26++] = (uchar_t)(0x80 | (VAR_28 & 0x003f));
  } else if (VAR_28 <= VAR_16) {
   if ((VAR_26 + 2) >= *VAR_21)
    return (VAR_0);
   VAR_20[VAR_26++] = (uchar_t)(0xe0 | ((VAR_28 & 0x0f000) >> 12));
   VAR_20[VAR_26++] = (uchar_t)(0x80 | ((VAR_28 & 0x00fc0) >> 6));
   VAR_20[VAR_26++] = (uchar_t)(0x80 | (VAR_28 & 0x0003f));
  } else if (VAR_28 <= VAR_14) {
   if ((VAR_26 + 3) >= *VAR_21)
    return (VAR_0);
   VAR_20[VAR_26++] = (uchar_t)(0xf0 | ((VAR_28 & 0x01c0000) >> 18));
   VAR_20[VAR_26++] = (uchar_t)(0x80 | ((VAR_28 & 0x003f000) >> 12));
   VAR_20[VAR_26++] = (uchar_t)(0x80 | ((VAR_28 & 0x0000fc0) >> 6));
   VAR_20[VAR_26++] = (uchar_t)(0x80 | (VAR_28 & 0x000003f));
  } else {
   return (VAR_2);
  }
 }

 if (VAR_27)
  return (VAR_3);

 *VAR_19 = VAR_25;
 *VAR_21 = VAR_26;

 return (0);
}
