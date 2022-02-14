
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int boolean_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ const FUNC_1 (scalar_t__ const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_2 (scalar_t__ const*,size_t,int*) ;
 scalar_t__ FUNC_3 (int,int*,int*) ;

int
FUNC_4(const uint32_t *VAR_15, size_t *VAR_16,
    uint16_t *VAR_17, size_t *VAR_18, int VAR_19)
{
 int VAR_20;
 int VAR_21;
 size_t VAR_22;
 size_t VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 boolean_t VAR_26;

 if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0))
  return (VAR_2);

 if (VAR_17 == ((void*)0) || VAR_18 == ((void*)0))
  return (VAR_0);

 if (FUNC_3(VAR_19, &VAR_20, &VAR_21) != 0)
  return (VAR_1);

 VAR_22 = VAR_23 = 0;
 VAR_26 = ((VAR_19 & VAR_5) == 0);

 if ((VAR_19 & VAR_6) &&
     FUNC_2(VAR_15, *VAR_16, &VAR_20))
  VAR_23++;

 VAR_20 &= VAR_7;
 VAR_21 &= VAR_9;

 if (*VAR_16 > 0 && *VAR_18 > 0 && (VAR_19 & VAR_8))
  VAR_17[VAR_22++] = (VAR_21) ? VAR_3 :
      VAR_4;

 for (; VAR_23 < *VAR_16; VAR_23++) {
  if (VAR_15[VAR_23] == 0 && VAR_26)
   break;

  VAR_24 = (VAR_20) ? VAR_15[VAR_23] : FUNC_1(VAR_15[VAR_23]);






  if (VAR_24 > VAR_14)
   return (VAR_2);





  if (VAR_24 >= VAR_13) {
   VAR_25 = ((VAR_24 - VAR_13) % VAR_10) +
       VAR_12;
   VAR_24 = ((VAR_24 - VAR_13) / VAR_10) +
       VAR_11;

   if ((VAR_22 + 1) >= *VAR_18)
    return (VAR_0);

   if (VAR_21) {
    VAR_17[VAR_22++] = (uint16_t)VAR_24;
    VAR_17[VAR_22++] = (uint16_t)VAR_25;
   } else {
    VAR_17[VAR_22++] = FUNC_0(((uint16_t)VAR_24));
    VAR_17[VAR_22++] = FUNC_0(((uint16_t)VAR_25));
   }
  } else {
   if (VAR_22 >= *VAR_18)
    return (VAR_0);
   VAR_17[VAR_22++] = (VAR_21) ? (uint16_t)VAR_24 :
       FUNC_0(((uint16_t)VAR_24));
  }
 }

 *VAR_18 = VAR_22;
 *VAR_16 = VAR_23;

 return (0);
}
