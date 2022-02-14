
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;

int
FUNC_7(int VAR_5, char **VAR_6)
{
 int VAR_7;
 char *VAR_8;
 zpool_handle_t *VAR_9;
 int VAR_10 = 0;


 while ((VAR_7 = FUNC_1(VAR_5, VAR_6, "")) != -1) {
  switch (VAR_7) {
  case '?':
   (void) FUNC_0(VAR_4, FUNC_2("invalid option '%c'\n"),
       VAR_3);
   FUNC_3(VAR_0);
  }
 }

 VAR_5 -= VAR_2;
 VAR_6 += VAR_2;


 if (VAR_5 < 1) {
  (void) FUNC_0(VAR_4, "%s", FUNC_2("missing pool name\n"));
  FUNC_3(VAR_0);
 }

 if (VAR_5 > 1) {
  (void) FUNC_0(VAR_4, "%s", FUNC_2("too many arguments\n"));
  FUNC_3(VAR_0);
 }

 VAR_8 = VAR_6[0];
 if ((VAR_9 = FUNC_5(VAR_1, VAR_8)) == ((void*)0))
  return (1);

 VAR_10 = FUNC_6(VAR_9);

 FUNC_4(VAR_9);
 return (VAR_10);
}
