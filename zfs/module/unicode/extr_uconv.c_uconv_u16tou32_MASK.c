
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int boolean_t ;


 scalar_t__ const FUNC_0 (scalar_t__ const) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_2 (scalar_t__ const*,size_t,int*) ;
 scalar_t__ FUNC_3 (int,int*,int*) ;

int
FUNC_4(const uint16_t *VAR_18, size_t *VAR_19,
    uint32_t *VAR_20, size_t *VAR_21, int VAR_22)
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

 if (FUNC_3(VAR_22, &VAR_23, &VAR_24) != 0)
  return (VAR_1);





 VAR_25 = VAR_26 = 0;
 VAR_27 = 0;
 VAR_29 = ((VAR_22 & VAR_6) == 0);





 if ((VAR_22 & VAR_7) &&
     FUNC_2(VAR_18, *VAR_19, &VAR_23))
  VAR_25++;





 VAR_23 &= VAR_8;
 VAR_24 &= VAR_10;





 if (*VAR_19 > 0 && *VAR_21 > 0 && (VAR_22 & VAR_9))
  VAR_20[VAR_26++] = (VAR_24) ? VAR_4 :
      VAR_5;







 for (; VAR_25 < *VAR_19; VAR_25++) {
  if (VAR_18[VAR_25] == 0 && VAR_29)
   break;

  VAR_28 = (uint32_t)((VAR_23) ? VAR_18[VAR_25] : FUNC_0(VAR_18[VAR_25]));

  if (VAR_28 >= VAR_14 && VAR_28 <= VAR_13) {
   if (VAR_27)
    return (VAR_2);
   VAR_27 = VAR_28;
   continue;
  } else if (VAR_28 >= VAR_16 && VAR_28 <= VAR_15) {
   if (! VAR_27)
    return (VAR_2);
   VAR_28 = (((VAR_27 - VAR_14) * VAR_12 +
       VAR_28 - VAR_16) & VAR_11)
       + VAR_17;
   VAR_27 = 0;
  } else if (VAR_27) {
   return (VAR_2);
  }

  if (VAR_26 >= *VAR_21)
   return (VAR_0);

  VAR_20[VAR_26++] = (VAR_24) ? VAR_28 : FUNC_1(VAR_28);
 }





 if (VAR_27)
  return (VAR_3);
 *VAR_19 = VAR_25;
 *VAR_21 = VAR_26;

 return (0);
}
