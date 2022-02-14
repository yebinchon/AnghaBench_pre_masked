
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* errhint; int * versionstr; } ;
typedef TYPE_1__ VersionResult ;
typedef int Datum ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;

bool
FUNC_11(const char *VAR_3, VersionResult *VAR_4)
{
 int VAR_5;
 Datum VAR_6 = FUNC_2(VAR_2,
          FUNC_0(VAR_3),
          FUNC_3(FUNC_5(VAR_1)));

 FUNC_8(VAR_4, 0, sizeof(VersionResult));

 VAR_4->versionstr = FUNC_10(FUNC_1(VAR_6));

 if (VAR_4->versionstr == ((void*)0))
 {
  VAR_4->errhint = "no version string in response";
  return 0;
 }

 if (FUNC_9(VAR_4->versionstr) > VAR_0)
 {
  VAR_4->errhint = "version string is too long";
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_9(VAR_4->versionstr); VAR_5++)
 {
  if (!FUNC_6(VAR_4->versionstr[VAR_5]) && !FUNC_7(VAR_4->versionstr[VAR_5]) &&
   !FUNC_4(VAR_4->versionstr[VAR_5]))
  {
   VAR_4->errhint = "version string has invalid characters";
   return 0;
  }
 }

 return 1;
}
