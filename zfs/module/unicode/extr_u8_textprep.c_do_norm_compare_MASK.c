
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uchar_t ;
typedef int u8_normalization_states_t ;
typedef int boolean_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_3 (size_t,scalar_t__*,scalar_t__**,scalar_t__*,int,int,int,int,int,int*,int *) ;
 int FUNC_4 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_5(size_t VAR_7, uchar_t *VAR_8, uchar_t *VAR_9, size_t VAR_10, size_t VAR_11,
    int VAR_12, int *VAR_13)
{
 int VAR_14;
 size_t VAR_15;
 size_t VAR_16;
 uchar_t VAR_17[VAR_4 + 1];
 uchar_t VAR_18[VAR_4 + 1];
 uchar_t *VAR_19;
 uchar_t *VAR_20;
 boolean_t VAR_21;
 boolean_t VAR_22;
 boolean_t VAR_23;
 boolean_t VAR_24;
 boolean_t VAR_25;
 u8_normalization_states_t VAR_26;

 VAR_19 = VAR_8 + VAR_10;
 VAR_20 = VAR_9 + VAR_11;

 VAR_21 = VAR_12 & VAR_6;
 VAR_22 = VAR_12 & VAR_5;
 VAR_23 = VAR_12 & VAR_1;
 VAR_24 = VAR_12 & VAR_2;
 VAR_25 = VAR_12 & VAR_0;

 while (VAR_8 < VAR_19 && VAR_9 < VAR_20) {
  if (FUNC_2(*VAR_8) && ((VAR_8 + 1) >= VAR_19 ||
      ((VAR_8 + 1) < VAR_19 && FUNC_2(*(VAR_8 + 1))))) {
   if (VAR_21)
    VAR_17[0] = FUNC_1(*VAR_8);
   else if (VAR_22)
    VAR_17[0] = FUNC_0(*VAR_8);
   else
    VAR_17[0] = *VAR_8;
   VAR_17[1] = '\0';
   VAR_15 = 1;
   VAR_8++;
  } else {
   VAR_26 = VAR_3;
   VAR_15 = FUNC_3(VAR_7, VAR_17, &VAR_8, VAR_19,
       VAR_21, VAR_22,
       VAR_23,
       VAR_24,
       VAR_25, VAR_13, &VAR_26);
  }

  if (FUNC_2(*VAR_9) && ((VAR_9 + 1) >= VAR_20 ||
      ((VAR_9 + 1) < VAR_20 && FUNC_2(*(VAR_9 + 1))))) {
   if (VAR_21)
    VAR_18[0] = FUNC_1(*VAR_9);
   else if (VAR_22)
    VAR_18[0] = FUNC_0(*VAR_9);
   else
    VAR_18[0] = *VAR_9;
   VAR_18[1] = '\0';
   VAR_16 = 1;
   VAR_9++;
  } else {
   VAR_26 = VAR_3;
   VAR_16 = FUNC_3(VAR_7, VAR_18, &VAR_9, VAR_20,
       VAR_21, VAR_22,
       VAR_23,
       VAR_24,
       VAR_25, VAR_13, &VAR_26);
  }





  if (VAR_15 == 1 && VAR_16 == 1) {
   if (*VAR_17 > *VAR_18)
    return (1);
   if (*VAR_17 < *VAR_18)
    return (-1);
  } else {
   VAR_14 = FUNC_4((const char *)VAR_17, (const char *)VAR_18);
   if (VAR_14 != 0)
    return (VAR_14);
  }
 }
 if (VAR_8 >= VAR_19) {
  if (VAR_9 >= VAR_20)
   return (0);
  return (-1);
 }
 return (1);
}
