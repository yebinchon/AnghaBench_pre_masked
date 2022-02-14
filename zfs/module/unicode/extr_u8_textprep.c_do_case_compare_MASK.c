
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uchar_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int VAR_2 ;
 int FUNC_2 (size_t,size_t*,size_t*,int,int ) ;
 int FUNC_3 (char const*,char const*) ;
 int* VAR_3 ;

__attribute__((used)) static int
FUNC_4(size_t VAR_4, uchar_t *VAR_5, uchar_t *VAR_6, size_t VAR_7,
    size_t VAR_8, boolean_t VAR_9, int *VAR_10)
{
 int VAR_11;
 int VAR_12;
 int VAR_13;
 size_t VAR_14;
 size_t VAR_15;
 size_t VAR_16;
 uchar_t VAR_17[VAR_2 + 1];
 uchar_t VAR_18[VAR_2 + 1];

 VAR_15 = VAR_16 = 0;
 while (VAR_15 < VAR_7 && VAR_16 < VAR_8) {






  VAR_12 = VAR_3[*VAR_5];
  if (VAR_12 < 0) {
   *VAR_10 = VAR_0;
   VAR_12 = 1;
  }
  if (VAR_12 == 1) {
   if (VAR_9)
    VAR_17[0] = FUNC_1(*VAR_5);
   else
    VAR_17[0] = FUNC_0(*VAR_5);
   VAR_5++;
   VAR_17[1] = '\0';
  } else if ((VAR_15 + VAR_12) > VAR_7) {
   *VAR_10 = VAR_1;
   for (VAR_14 = 0; (VAR_15 + VAR_14) < VAR_7; )
    VAR_17[VAR_14++] = *VAR_5++;
   VAR_17[VAR_14] = '\0';
  } else {
   (void) FUNC_2(VAR_4, VAR_17, VAR_5, VAR_12, VAR_9);
   VAR_5 += VAR_12;
  }


  VAR_13 = VAR_3[*VAR_6];
  if (VAR_13 < 0) {
   *VAR_10 = VAR_0;
   VAR_13 = 1;
  }

  if (VAR_13 == 1) {
   if (VAR_9)
    VAR_18[0] = FUNC_1(*VAR_6);
   else
    VAR_18[0] = FUNC_0(*VAR_6);
   VAR_6++;
   VAR_18[1] = '\0';
  } else if ((VAR_16 + VAR_13) > VAR_8) {
   *VAR_10 = VAR_1;
   for (VAR_14 = 0; (VAR_16 + VAR_14) < VAR_8; )
    VAR_18[VAR_14++] = *VAR_6++;
   VAR_18[VAR_14] = '\0';
  } else {
   (void) FUNC_2(VAR_4, VAR_18, VAR_6, VAR_13, VAR_9);
   VAR_6 += VAR_13;
  }


  if (VAR_12 == 1 && VAR_13 == 1) {
   if (*VAR_17 > *VAR_18)
    return (1);
   if (*VAR_17 < *VAR_18)
    return (-1);
  } else {
   VAR_11 = FUNC_3((const char *)VAR_17, (const char *)VAR_18);
   if (VAR_11 != 0)
    return (VAR_11);
  }





  VAR_15 += VAR_12;
  VAR_16 += VAR_13;
 }
 if (VAR_15 >= VAR_7) {
  if (VAR_16 >= VAR_8)
   return (0);
  return (-1);
 }
 return (1);
}
