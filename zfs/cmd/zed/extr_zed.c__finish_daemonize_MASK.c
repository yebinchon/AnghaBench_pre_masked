
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_4 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(void)
{
 int VAR_5;


 VAR_5 = FUNC_2("/dev/null", VAR_0);
 if (VAR_5 < 0)
  FUNC_4("Failed to open /dev/null: %s", FUNC_3(VAR_4));

 if (FUNC_1(VAR_5, VAR_2) < 0)
  FUNC_4("Failed to dup /dev/null onto stdin: %s",
      FUNC_3(VAR_4));

 if (FUNC_1(VAR_5, VAR_3) < 0)
  FUNC_4("Failed to dup /dev/null onto stdout: %s",
      FUNC_3(VAR_4));

 if (FUNC_1(VAR_5, VAR_1) < 0)
  FUNC_4("Failed to dup /dev/null onto stderr: %s",
      FUNC_3(VAR_4));

 if ((VAR_5 > VAR_1) && (FUNC_0(VAR_5) < 0))
  FUNC_4("Failed to close /dev/null: %s", FUNC_3(VAR_4));


 FUNC_5();
}
