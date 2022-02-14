
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_1 (int,char**,char const*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char const*,char const*,scalar_t__,int) ;
 int * FUNC_8 (int ,char*,int) ;
 scalar_t__ FUNC_9 (int *,char const*,char const*,scalar_t__) ;

__attribute__((used)) static int
FUNC_10(int VAR_9, char **VAR_10, boolean_t VAR_11)
{
 int VAR_12 = 0;
 int VAR_13;
 const char *VAR_14;
 boolean_t VAR_15 = VAR_0;
 const char *VAR_16 = VAR_11 ? "rt" : "r";
 int VAR_17;


 while ((VAR_17 = FUNC_1(VAR_9, VAR_10, VAR_16)) != -1) {
  switch (VAR_17) {
  case 'r':
   VAR_15 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_8, FUNC_2("invalid option '%c'\n"),
       VAR_7);
   FUNC_5(VAR_0);
  }
 }

 VAR_9 -= VAR_6;
 VAR_10 += VAR_6;


 if (VAR_9 < 2)
  FUNC_5(VAR_0);

 VAR_14 = VAR_10[0];
 --VAR_9;
 ++VAR_10;

 if (VAR_11 && VAR_14[0] == '.') {

  (void) FUNC_0(VAR_8, "%s", FUNC_2("tag may not start with '.'\n"));
  FUNC_5(VAR_0);
 }

 for (VAR_13 = 0; VAR_13 < VAR_9; ++VAR_13) {
  zfs_handle_t *VAR_18;
  char VAR_19[VAR_2];
  const char *VAR_20;
  char *VAR_21 = VAR_10[VAR_13];

  VAR_20 = FUNC_3(VAR_21, '@');
  if (VAR_20 == ((void*)0)) {
   (void) FUNC_0(VAR_8,
       FUNC_2("'%s' is not a snapshot\n"), VAR_21);
   ++VAR_12;
   continue;
  }
  (void) FUNC_4(VAR_19, VAR_21, VAR_20 - VAR_21);
  VAR_19[VAR_20 - VAR_21] = '\0';

  VAR_18 = FUNC_8(VAR_5, VAR_19,
      VAR_3 | VAR_4);
  if (VAR_18 == ((void*)0)) {
   ++VAR_12;
   continue;
  }
  if (VAR_11) {
   if (FUNC_7(VAR_18, VAR_20+1, VAR_14, VAR_15, -1) != 0)
    ++VAR_12;
  } else {
   if (FUNC_9(VAR_18, VAR_20+1, VAR_14, VAR_15) != 0)
    ++VAR_12;
  }
  FUNC_6(VAR_18);
 }

 return (VAR_12 != 0);
}
