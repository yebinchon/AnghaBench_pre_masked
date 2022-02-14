
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef scalar_t__ uchar_t ;
typedef int boolean_t ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ FUNC_1 (int,int*,int*) ;
 int* VAR_14 ;
 size_t* VAR_15 ;
 size_t* VAR_16 ;
 size_t* VAR_17 ;

int
FUNC_2(const uchar_t *VAR_18, size_t *VAR_19,
    uint32_t *VAR_20, size_t *VAR_21, int VAR_22)
{
 int VAR_23;
 int VAR_24;
 size_t VAR_25;
 size_t VAR_26;
 uint32_t VAR_27;
 uint32_t VAR_28;
 int VAR_29;
 int VAR_30;
 boolean_t VAR_31;

 if (VAR_18 == ((void*)0) || VAR_19 == ((void*)0))
  return (VAR_2);

 if (VAR_20 == ((void*)0) || VAR_21 == ((void*)0))
  return (VAR_0);

 if (FUNC_1(VAR_22, &VAR_23, &VAR_24) != 0)
  return (VAR_1);

 VAR_25 = VAR_26 = 0;
 VAR_31 = ((VAR_22 & VAR_7) == 0);

 VAR_24 &= VAR_9;

 if (*VAR_19 > 0 && *VAR_21 > 0 && (VAR_22 & VAR_8))
  VAR_20[VAR_25++] = (VAR_24) ? VAR_5 :
      VAR_6;

 for (; VAR_26 < *VAR_19; ) {
  if (VAR_18[VAR_26] == 0 && VAR_31)
   break;

  VAR_27 = (uint32_t)VAR_18[VAR_26++];

  if (VAR_27 > VAR_4) {
   if ((VAR_29 = VAR_14[VAR_27]) == 0)
    return (VAR_2);

   VAR_30 = VAR_27;
   VAR_27 = VAR_27 & VAR_15[VAR_29];

   for (; VAR_29 > 0; VAR_29--) {
    if (VAR_26 >= *VAR_19)
     return (VAR_3);

    VAR_28 = (uint32_t)VAR_18[VAR_26++];

    if (VAR_30) {
     if (VAR_28 < VAR_17[VAR_30] ||
         VAR_28 > VAR_16[VAR_30])
      return (VAR_2);
     VAR_30 = 0;
    } else if (VAR_28 < VAR_13 ||
        VAR_28 > VAR_12) {
     return (VAR_2);
    }
    VAR_27 = (VAR_27 << VAR_11) |
        (VAR_28 & VAR_10);
   }
  }

  if (VAR_25 >= *VAR_21)
   return (VAR_0);

  VAR_20[VAR_25++] = (VAR_24) ? VAR_27 : FUNC_0(VAR_27);
 }

 *VAR_21 = VAR_25;
 *VAR_19 = VAR_26;

 return (0);
}
