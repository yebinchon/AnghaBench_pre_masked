
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct screen {int * sel; int * tabs; void* ccolour; scalar_t__ cstyle; int * titles; void* title; int grid; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct screen*) ;
 void* FUNC_2 (char*) ;

void
FUNC_3(struct screen *VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3)
{
 VAR_0->grid = FUNC_0(VAR_1, VAR_2, VAR_3);
 VAR_0->title = FUNC_2("");
 VAR_0->titles = ((void*)0);

 VAR_0->cstyle = 0;
 VAR_0->ccolour = FUNC_2("");
 VAR_0->tabs = ((void*)0);
 VAR_0->sel = ((void*)0);

 FUNC_1(VAR_0);
}
