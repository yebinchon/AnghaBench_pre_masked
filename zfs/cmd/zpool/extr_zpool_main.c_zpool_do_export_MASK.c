
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* hardforce; void* force; } ;
typedef TYPE_1__ export_cbdata_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int,char**,void*,int *,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (void*) ;
 int VAR_5 ;

int
FUNC_5(int VAR_6, char **VAR_7)
{
 export_cbdata_t VAR_8;
 boolean_t VAR_9 = VAR_0;
 boolean_t VAR_10 = VAR_0;
 boolean_t VAR_11 = VAR_0;
 int VAR_12, VAR_13;


 while ((VAR_12 = FUNC_2(VAR_6, VAR_7, "afF")) != -1) {
  switch (VAR_12) {
  case 'a':
   VAR_9 = VAR_1;
   break;
  case 'f':
   VAR_10 = VAR_1;
   break;
  case 'F':
   VAR_11 = VAR_1;
   break;
  case '?':
   (void) FUNC_1(VAR_4, FUNC_3("invalid option '%c'\n"),
       VAR_3);
   FUNC_4(VAR_0);
  }
 }

 VAR_8.force = VAR_10;
 VAR_8.hardforce = VAR_11;
 VAR_6 -= VAR_2;
 VAR_7 += VAR_2;

 if (VAR_9) {
  if (VAR_6 != 0) {
   (void) FUNC_1(VAR_4, "%s", FUNC_3("too many arguments\n"));
   FUNC_4(VAR_0);
  }

  return (FUNC_0(VAR_6, VAR_7, VAR_1, ((void*)0),
      VAR_5, &VAR_8));
 }


 if (VAR_6 < 1) {
  (void) FUNC_1(VAR_4, "%s", FUNC_3("missing pool argument\n"));
  FUNC_4(VAR_0);
 }

 VAR_13 = FUNC_0(VAR_6, VAR_7, VAR_1, ((void*)0), VAR_5, &VAR_8);

 return (VAR_13);
}
