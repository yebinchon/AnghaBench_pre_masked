
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uchar_t ;
typedef int boolean_t ;


 scalar_t__ const FUNC_0 (scalar_t__ const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__ const*,size_t,int*) ;
 scalar_t__ FUNC_2 (int,int*,int*) ;

int
FUNC_3(const uint32_t *VAR_10, size_t *VAR_11,
    uchar_t *VAR_12, size_t *VAR_13, int VAR_14)
{
 int VAR_15;
 int VAR_16;
 size_t VAR_17;
 size_t VAR_18;
 uint32_t VAR_19;
 boolean_t VAR_20;

 if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0))
  return (VAR_2);

 if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0))
  return (VAR_0);

 if (FUNC_2(VAR_14, &VAR_15, &VAR_16) != 0)
  return (VAR_1);

 VAR_17 = VAR_18 = 0;
 VAR_20 = ((VAR_14 & VAR_3) == 0);

 if ((VAR_14 & VAR_4) &&
     FUNC_1(VAR_10, *VAR_11, &VAR_15))
  VAR_17++;

 VAR_15 &= VAR_5;

 for (; VAR_17 < *VAR_11; VAR_17++) {
  if (VAR_10[VAR_17] == 0 && VAR_20)
   break;

  VAR_19 = (VAR_15) ? VAR_10[VAR_17] : FUNC_0(VAR_10[VAR_17]);

  if (VAR_19 <= VAR_7) {
   if (VAR_18 >= *VAR_13)
    return (VAR_0);
   VAR_12[VAR_18++] = (uchar_t)VAR_19;
  } else if (VAR_19 <= VAR_9) {
   if ((VAR_18 + 1) >= *VAR_13)
    return (VAR_0);
   VAR_12[VAR_18++] = (uchar_t)(0xc0 | ((VAR_19 & 0x07c0) >> 6));
   VAR_12[VAR_18++] = (uchar_t)(0x80 | (VAR_19 & 0x003f));
  } else if (VAR_19 <= VAR_8) {
   if ((VAR_18 + 2) >= *VAR_13)
    return (VAR_0);
   VAR_12[VAR_18++] = (uchar_t)(0xe0 | ((VAR_19 & 0x0f000) >> 12));
   VAR_12[VAR_18++] = (uchar_t)(0x80 | ((VAR_19 & 0x00fc0) >> 6));
   VAR_12[VAR_18++] = (uchar_t)(0x80 | (VAR_19 & 0x0003f));
  } else if (VAR_19 <= VAR_6) {
   if ((VAR_18 + 3) >= *VAR_13)
    return (VAR_0);
   VAR_12[VAR_18++] = (uchar_t)(0xf0 | ((VAR_19 & 0x01c0000) >> 18));
   VAR_12[VAR_18++] = (uchar_t)(0x80 | ((VAR_19 & 0x003f000) >> 12));
   VAR_12[VAR_18++] = (uchar_t)(0x80 | ((VAR_19 & 0x0000fc0) >> 6));
   VAR_12[VAR_18++] = (uchar_t)(0x80 | (VAR_19 & 0x000003f));
  } else {
   return (VAR_2);
  }
 }

 *VAR_11 = VAR_17;
 *VAR_13 = VAR_18;

 return (0);
}
