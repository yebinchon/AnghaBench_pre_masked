
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ uchar_t ;
typedef int boolean_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 scalar_t__ FUNC_1 (int,int*,int*) ;
 int* VAR_18 ;
 size_t* VAR_19 ;
 size_t* VAR_20 ;
 size_t* VAR_21 ;

int
FUNC_2(const uchar_t *VAR_22, size_t *VAR_23,
    uint16_t *VAR_24, size_t *VAR_25, int VAR_26)
{
 int VAR_27;
 int VAR_28;
 size_t VAR_29;
 size_t VAR_30;
 uint32_t VAR_31;
 uint32_t VAR_32;
 int VAR_33;
 int VAR_34;
 boolean_t VAR_35;

 if (VAR_22 == ((void*)0) || VAR_23 == ((void*)0))
  return (VAR_2);

 if (VAR_24 == ((void*)0) || VAR_25 == ((void*)0))
  return (VAR_0);

 if (FUNC_1(VAR_26, &VAR_27, &VAR_28) != 0)
  return (VAR_1);

 VAR_29 = VAR_30 = 0;
 VAR_35 = ((VAR_26 & VAR_7) == 0);

 VAR_28 &= VAR_9;

 if (*VAR_23 > 0 && *VAR_25 > 0 && (VAR_26 & VAR_8))
  VAR_24[VAR_29++] = (VAR_28) ? VAR_5 :
      VAR_6;

 for (; VAR_30 < *VAR_23; ) {
  if (VAR_22[VAR_30] == 0 && VAR_35)
   break;
  VAR_31 = (uint32_t)VAR_22[VAR_30++];

  if (VAR_31 > VAR_4) {
   if ((VAR_33 = VAR_18[VAR_31]) == 0)
    return (VAR_2);

   VAR_34 = VAR_31;
   VAR_31 = VAR_31 & VAR_19[VAR_33];

   for (; VAR_33 > 0; VAR_33--) {




    if (VAR_30 >= *VAR_23)
     return (VAR_3);

    VAR_32 = (uint32_t)VAR_22[VAR_30++];

    if (VAR_34) {
     if (VAR_32 < VAR_21[VAR_34] ||
         VAR_32 > VAR_20[VAR_34])
      return (VAR_2);
     VAR_34 = 0;
    } else if (VAR_32 < VAR_17 ||
        VAR_32 > VAR_16) {
     return (VAR_2);
    }
    VAR_31 = (VAR_31 << VAR_15) |
        (VAR_32 & VAR_14);
   }
  }

  if (VAR_31 >= VAR_13) {
   VAR_32 = ((VAR_31 - VAR_13) % VAR_10) +
       VAR_12;
   VAR_31 = ((VAR_31 - VAR_13) / VAR_10) +
       VAR_11;

   if ((VAR_29 + 1) >= *VAR_25)
    return (VAR_0);

   if (VAR_28) {
    VAR_24[VAR_29++] = (uint16_t)VAR_31;
    VAR_24[VAR_29++] = (uint16_t)VAR_32;
   } else {
    VAR_24[VAR_29++] = FUNC_0(((uint16_t)VAR_31));
    VAR_24[VAR_29++] = FUNC_0(((uint16_t)VAR_32));
   }
  } else {
   if (VAR_29 >= *VAR_25)
    return (VAR_0);

   VAR_24[VAR_29++] = (VAR_28) ? (uint16_t)VAR_31 :
       FUNC_0(((uint16_t)VAR_31));
  }
 }

 *VAR_25 = VAR_29;
 *VAR_23 = VAR_30;

 return (0);
}
