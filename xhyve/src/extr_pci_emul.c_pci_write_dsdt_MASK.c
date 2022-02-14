
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

void
FUNC_4(void)
{
 int VAR_1;

 FUNC_0(1);
 FUNC_1("Name (PICM, 0x00)");
 FUNC_1("Method (_PIC, 1, NotSerialized)");
 FUNC_1("{");
 FUNC_1("  Store (Arg0, PICM)");
 FUNC_1("}");
 FUNC_1("");
 FUNC_1("Scope (_SB)");
 FUNC_1("{");
 for (VAR_1 = 0; VAR_1 < VAR_0; VAR_1++)
  FUNC_3(VAR_1);
 FUNC_1("}");
 FUNC_2(1);
}
