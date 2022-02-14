
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (char const*,char**) ;
 int FUNC_6 (char const*,char**,char**) ;
 int FUNC_7 (char const*,char**) ;
 int FUNC_8 (char const*,char**,char**) ;
 int FUNC_9 (int,char***) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (scalar_t__,int*,int ) ;

__attribute__((used)) static int
FUNC_14(const char *VAR_9, char *VAR_10[], char *VAR_11[], int VAR_12,
    char **VAR_13[], int *VAR_14)
{
 pid_t VAR_15;
 int VAR_16, VAR_17;
 int VAR_18[2];





 if ((VAR_13 != ((void*)0)) && FUNC_11(VAR_18) == -1)
  return (-VAR_1);

 VAR_15 = FUNC_12();
 if (VAR_15 == 0) {

  VAR_17 = FUNC_10("/dev/null", VAR_3);

  if (VAR_17 < 0)
   FUNC_2(-1);

  if (!(VAR_12 & VAR_7) && (VAR_13 == ((void*)0)))
   (void) FUNC_4(VAR_17, VAR_6);
  else if (VAR_13 != ((void*)0)) {

   FUNC_4(VAR_18[1], VAR_6);
   FUNC_3(VAR_18[0]);
   FUNC_3(VAR_18[1]);
  }

  if (!(VAR_12 & VAR_5))
   (void) FUNC_4(VAR_17, VAR_4);

  FUNC_3(VAR_17);

  if (VAR_12 & VAR_2) {
   if (VAR_11 == ((void*)0))
    FUNC_5(VAR_9, VAR_10);
   else
    FUNC_6(VAR_9, VAR_10, VAR_11);
  } else {
   if (VAR_11 == ((void*)0))
    FUNC_7(VAR_9, VAR_10);
   else
    FUNC_8(VAR_9, VAR_10, VAR_11);
  }

  FUNC_2(-1);
 } else if (VAR_15 > 0) {

  int VAR_19;

  while ((VAR_16 = FUNC_13(VAR_15, &VAR_19, 0)) == -1 &&
      VAR_8 == VAR_0) { }
  if (VAR_16 < 0 || !FUNC_1(VAR_19))
   return (-1);

  if (VAR_13 != ((void*)0)) {
   FUNC_3(VAR_18[1]);
   *VAR_14 = FUNC_9(VAR_18[0], VAR_13);
  }
  return (FUNC_0(VAR_19));
 }

 return (-1);
}
