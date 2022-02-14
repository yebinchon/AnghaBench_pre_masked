
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uchar_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;
 size_t* VAR_13 ;
 size_t* VAR_14 ;

int
FUNC_1(char *VAR_15, size_t VAR_16, char **VAR_17, int VAR_18, int *VAR_19)
{
 uchar_t *VAR_20;
 uchar_t *VAR_21;
 uchar_t **VAR_22;
 uchar_t *VAR_23;
 uchar_t *VAR_24;
 uchar_t VAR_25;
 int VAR_26;
 size_t VAR_27;
 int VAR_28;
 boolean_t VAR_29;
 boolean_t VAR_30;
 boolean_t VAR_31;
 boolean_t VAR_32;

 if (! VAR_15)
  return (0);

 VAR_20 = (uchar_t *)VAR_15;
 VAR_21 = VAR_20 + VAR_16;

 VAR_28 = 0;

 VAR_30 = ! (VAR_18 & VAR_10);
 VAR_31 = VAR_18 & VAR_9;
 VAR_32 = VAR_18 & VAR_11;

 while (VAR_20 < VAR_21) {






  VAR_26 = VAR_12[*VAR_20];
  if (VAR_26 == VAR_6) {
   *VAR_19 = VAR_3;
   return (-1);
  }

  if (VAR_26 == VAR_8 ||
      (VAR_32 && VAR_26 > VAR_7)) {
   *VAR_19 = VAR_5;
   return (-1);
  }






  if ((VAR_21 - VAR_20) < VAR_26) {
   *VAR_19 = VAR_4;
   return (-1);
  }

  if (VAR_26 == 1) {
   VAR_20++;
   VAR_28++;
  } else {





   VAR_25 = *VAR_20++;
   VAR_28++;
   VAR_29 = VAR_1;
   for (VAR_27 = 1; VAR_27 < VAR_26; VAR_27++) {
    if (VAR_29) {
     if (*VAR_20 < VAR_14[VAR_25] ||
         *VAR_20 > VAR_13[VAR_25]) {
      *VAR_19 = VAR_3;
      return (-1);
     }
     VAR_29 = VAR_0;
    } else if (FUNC_0(*VAR_20)) {
     *VAR_19 = VAR_3;
     return (-1);
    }
    VAR_20++;
    VAR_28++;
   }
  }

  if (VAR_31) {
   for (VAR_22 = (uchar_t **)VAR_17, VAR_27 = 0; VAR_22[VAR_27]; VAR_27++) {
    VAR_23 = VAR_20 - VAR_26;
    VAR_24 = VAR_22[VAR_27];
    while (VAR_23 < VAR_20) {
     if (*VAR_23 != *VAR_24 || *VAR_24 == '\0')
      break;
     VAR_23++;
     VAR_24++;
    }

    if (VAR_23 >= VAR_20 && *VAR_24 == '\0') {
     *VAR_19 = VAR_2;
     return (-1);
    }
   }
  }

  if (VAR_30)
   break;
 }

 return (VAR_28);
}
