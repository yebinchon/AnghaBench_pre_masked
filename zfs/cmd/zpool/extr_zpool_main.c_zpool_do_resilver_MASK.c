
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cb_scrub_cmd; int cb_type; } ;
typedef TYPE_1__ scrub_cbdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char**,int ,int *,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;

int
FUNC_5(int VAR_8, char **VAR_9)
{
 int VAR_10;
 scrub_cbdata_t VAR_11;

 VAR_11.cb_type = VAR_2;
 VAR_11.cb_scrub_cmd = VAR_3;


 while ((VAR_10 = FUNC_2(VAR_8, VAR_9, "")) != -1) {
  switch (VAR_10) {
  case '?':
   (void) FUNC_1(VAR_7, FUNC_3("invalid option '%c'\n"),
       VAR_5);
   FUNC_4(VAR_0);
  }
 }

 VAR_8 -= VAR_4;
 VAR_9 += VAR_4;

 if (VAR_8 < 1) {
  (void) FUNC_1(VAR_7, "%s", FUNC_3("missing pool name argument\n"));
  FUNC_4(VAR_0);
 }

 return (FUNC_0(VAR_8, VAR_9, VAR_1, ((void*)0), VAR_6, &VAR_11));
}
