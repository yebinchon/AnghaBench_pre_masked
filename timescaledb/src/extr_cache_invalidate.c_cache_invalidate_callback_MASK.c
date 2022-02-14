
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int Datum ;
typedef int Catalog ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(Datum VAR_2, Oid VAR_3)
{
 Catalog *VAR_4;

 if (FUNC_4(VAR_3))
 {
  FUNC_0();
  return;
 }

 if (!FUNC_5())
  return;

 VAR_4 = FUNC_2();

 if (VAR_3 == FUNC_3(VAR_4, VAR_1))
  FUNC_6();

 if (VAR_3 == FUNC_3(VAR_4, VAR_0))
  FUNC_1();
}
