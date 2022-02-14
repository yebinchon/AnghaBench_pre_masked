
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct screen {int grid; int ccolour; int title; int tabs; int sel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct screen*) ;

void
FUNC_3(struct screen *VAR_0)
{
 FUNC_0(VAR_0->sel);
 FUNC_0(VAR_0->tabs);
 FUNC_0(VAR_0->title);
 FUNC_0(VAR_0->ccolour);

 FUNC_1(VAR_0->grid);

 FUNC_2(VAR_0);
}
