
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ first; scalar_t__ internal; scalar_t__ longfmt; int member_0; } ;
typedef TYPE_1__ hist_cbdata_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char**,int ,int *,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (int,char**,char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;

int
FUNC_5(int VAR_6, char **VAR_7)
{
 hist_cbdata_t VAR_8 = { 0 };
 int VAR_9;
 int VAR_10;

 VAR_8.first = VAR_1;

 while ((VAR_10 = FUNC_2(VAR_6, VAR_7, "li")) != -1) {
  switch (VAR_10) {
  case 'l':
   VAR_8.longfmt = VAR_1;
   break;
  case 'i':
   VAR_8.internal = VAR_1;
   break;
  case '?':
   (void) FUNC_1(VAR_5, FUNC_3("invalid option '%c'\n"),
       VAR_4);
   FUNC_4(VAR_0);
  }
 }
 VAR_6 -= VAR_3;
 VAR_7 += VAR_3;

 VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_0, ((void*)0), VAR_2,
     &VAR_8);

 if (VAR_6 == 0 && VAR_8.first == VAR_1) {
  (void) FUNC_1(VAR_5, "%s", FUNC_3("no pools available\n"));
  return (0);
 }

 return (VAR_9);
}
