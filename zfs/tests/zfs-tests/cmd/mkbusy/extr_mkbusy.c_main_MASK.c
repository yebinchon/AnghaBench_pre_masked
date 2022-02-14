
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;
typedef scalar_t__ boolean_t ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char**,char*,char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (char*,int,int) ;
 int * FUNC_6 (char*) ;
 scalar_t__ VAR_13 ;
 int FUNC_7 () ;
 int FUNC_8 (char*,struct stat*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*) ;

int
FUNC_13(int VAR_14, char *VAR_15[])
{
 int VAR_16, VAR_17;
 boolean_t VAR_18 = VAR_0;
 boolean_t VAR_19 = VAR_0;
 boolean_t VAR_20 = VAR_0;
 struct stat VAR_21;
 char *VAR_22 = ((void*)0);
 char *VAR_23 = VAR_15[0];

 while ((VAR_17 = FUNC_4(VAR_14, VAR_15, "fr")) != -1) {
  switch (VAR_17) {

  case 'r':
   VAR_20 = VAR_1;
   break;

  case 'f':
   VAR_19 = VAR_1;
   break;
  default:
   FUNC_12(VAR_23);
  }
 }

 VAR_14 -= VAR_13;
 VAR_15 += VAR_13;

 if (VAR_14 != 1)
  FUNC_12(VAR_23);

 if ((VAR_16 = FUNC_8(VAR_15[0], &VAR_21)) != 0) {
  char *VAR_24, *VAR_25, *VAR_26;
  int VAR_27;
  char *VAR_28;
  int VAR_29;





  if ((VAR_24 = FUNC_9(VAR_15[0])) == ((void*)0))
   FUNC_2("strdup", 1);
  VAR_27 = FUNC_10(VAR_24);
  if (VAR_24[VAR_27 - 1] == '/')
   VAR_24[VAR_27 - 1] = '\0';





  if ((VAR_28 = FUNC_11(VAR_24, '/')) == ((void*)0)) {
   VAR_25 = FUNC_9(".");
   VAR_26 = FUNC_9(VAR_24);
  } else {
   *VAR_28 = '\0';
   VAR_25 = FUNC_9(VAR_24);
   VAR_26 = FUNC_9(VAR_28 + 1);
  }
  FUNC_3(VAR_24);
  if (VAR_25 == ((void*)0) || VAR_26 == ((void*)0))
   FUNC_2("strdup", 1);


  if ((VAR_16 = FUNC_8(VAR_25, &VAR_21)) != 0 || !(VAR_21.st_mode &
      VAR_7))
   FUNC_12(VAR_23);

  VAR_29 = FUNC_0(&VAR_22, "%s/%s", VAR_25, VAR_26);
  FUNC_3(VAR_25);
  FUNC_3(VAR_26);
  if (VAR_29 == -1 || VAR_22 == ((void*)0))
   FUNC_2("asprintf", 1);

 } else if ((VAR_21.st_mode & VAR_9) == VAR_10 ||
     (VAR_21.st_mode & VAR_9) == VAR_8 ||
     (VAR_21.st_mode & VAR_9) == VAR_6 ||
     (VAR_21.st_mode & VAR_9) == VAR_5) {
  VAR_22 = FUNC_9(VAR_15[0]);
 } else if ((VAR_21.st_mode & VAR_9) == VAR_7) {
  VAR_22 = FUNC_9(VAR_15[0]);
  VAR_18 = VAR_1;
 } else {
  FUNC_12(VAR_23);
 }

 if (VAR_22 == ((void*)0))
  FUNC_2("strdup", 1);

 if (VAR_18 == VAR_0) {
  int VAR_30, VAR_31;
  mode_t VAR_32 = VAR_11 | VAR_12;

  VAR_31 = VAR_20 == VAR_0 ? VAR_2 | VAR_4 : VAR_3;

  if ((VAR_30 = FUNC_5(VAR_22, VAR_31, VAR_32)) < 0)
   FUNC_2("open", 1);
 } else {
  DIR *VAR_33;

  if ((VAR_33 = FUNC_6(VAR_22)) == ((void*)0))
   FUNC_2("opendir", 1);
 }
 FUNC_3(VAR_22);

 if (VAR_19 == VAR_0)
  FUNC_1();
 (void) FUNC_7();


 return (0);
}
