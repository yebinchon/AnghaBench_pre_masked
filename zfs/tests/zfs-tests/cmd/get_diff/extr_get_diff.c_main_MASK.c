
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,long long,long long) ;
 scalar_t__ FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int,char*,int,scalar_t__) ;
 int VAR_5 ;
 int FUNC_8 (char*,int) ;

int
FUNC_9(int VAR_6, char *VAR_7[])
{
 off_t VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 int VAR_11, VAR_12;
 char *VAR_13, *VAR_14;
 char VAR_15[VAR_0], VAR_16[VAR_0];
 ssize_t VAR_17;

 if (VAR_6 != 3)
  FUNC_8("Incorrect number of arguments.", 1);

 if ((VAR_13 = VAR_7[1]) == ((void*)0))
  FUNC_8("Filename missing.", 1);
 if ((VAR_11 = FUNC_5(VAR_13, VAR_2 | VAR_3)) < 0) {
  FUNC_6("open1 failed");
  FUNC_2(1);
 }

 if ((VAR_14 = VAR_7[2]) == ((void*)0))
  FUNC_8("Redacted filename missing.", 1);
 if ((VAR_12 = FUNC_5(VAR_14, VAR_2 | VAR_3)) < 0) {
  FUNC_6("open2 failed");
  FUNC_2(1);
 }

 while ((VAR_17 = FUNC_7(VAR_11, VAR_15, VAR_0, VAR_10)) > 0) {
  if (FUNC_7(VAR_12, VAR_16, VAR_0, VAR_10) < 0) {
   if (VAR_4 == VAR_1) {






    VAR_16[0] = ~VAR_15[0];
   } else {
    FUNC_6("pread failed");
    FUNC_2(1);
   }
  }
  if (FUNC_4(VAR_15, VAR_16, VAR_17) == 0) {
   if (VAR_9 != 0) {
    (void) FUNC_3(VAR_5, "%lld,%lld\n",
        (long long)VAR_8, (long long)VAR_9);
    FUNC_0(VAR_10 == VAR_8 + VAR_9);
    VAR_9 = 0;
   }
   VAR_8 = 0;
  } else {
   if (VAR_9 == 0)
    VAR_8 = VAR_10;
   FUNC_0(VAR_10 == VAR_8 + VAR_9);
   VAR_9 += VAR_17;
  }
  VAR_10 += VAR_17;
 }

 if (VAR_9 != 0 && VAR_9 != 0) {
  (void) FUNC_3(VAR_5, "%lld,%lld\n", (long long)VAR_8,
      (long long)VAR_9);
 }

 (void) FUNC_1(VAR_11);
 (void) FUNC_1(VAR_12);

 return (0);
}
