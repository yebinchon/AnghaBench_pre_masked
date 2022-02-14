
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,char const*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 char* FUNC_8 () ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (char*,char const*) ;

void
FUNC_10(const char *VAR_4)
{
 char *VAR_5;

 if (!FUNC_0() || !FUNC_1() || !FUNC_5())
  return;
 VAR_5 = FUNC_8();

 if (FUNC_9(VAR_5, VAR_4) != 0)
 {




  FUNC_2(VAR_2,
    (FUNC_3(VAR_0),
     FUNC_4("extension \"%s\" version mismatch: shared library version %s; SQL version "
      "%s",
      VAR_1,
      VAR_4,
      VAR_5)));
 }

 if (!VAR_3 && !FUNC_7())
 {
  FUNC_6();
 }
}
