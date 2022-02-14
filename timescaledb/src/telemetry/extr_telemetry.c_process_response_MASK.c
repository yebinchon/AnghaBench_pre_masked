
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int versionstr; int errhint; } ;
typedef TYPE_1__ VersionResult ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char const*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_8)
{
 VersionResult VAR_9;
 bool VAR_10 =
  FUNC_1(FUNC_2(VAR_7,
           FUNC_2(VAR_6,
                FUNC_0(VAR_8),
                FUNC_3(FUNC_4(
                 VAR_4))),
           FUNC_3(FUNC_4("true"))));

 if (VAR_10)
  FUNC_5(VAR_2, "the \"%s\" extension is up-to-date", VAR_0);
 else
 {
  if (!FUNC_9(VAR_8, &VAR_9))
  {
   FUNC_5(VAR_5, "server did not return a valid TimescaleDB version: %s", VAR_9.errhint);
   return;
  }

  FUNC_6(VAR_1,
    (FUNC_8("the \"%s\" extension is not up-to-date", VAR_0),
     FUNC_7("The most up-to-date version is %s, the installed version is %s",
       VAR_9.versionstr,
       VAR_3)));
 }
}
