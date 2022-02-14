
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct screen {int * tabs; } ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct screen*) ;

void
FUNC_5(struct screen *VAR_0)
{
 u_int VAR_1;

 FUNC_3(VAR_0->tabs);

 if ((VAR_0->tabs = FUNC_0(FUNC_4(VAR_0))) == ((void*)0))
  FUNC_2("bit_alloc failed");
 for (VAR_1 = 8; VAR_1 < FUNC_4(VAR_0); VAR_1 += 8)
  FUNC_1(VAR_0->tabs, VAR_1);
}
