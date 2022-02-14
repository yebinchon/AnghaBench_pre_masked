
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {struct layout_cell* layout_root; } ;
struct layout_cell {scalar_t__ yoff; scalar_t__ xoff; } ;


 int FUNC_0 (struct layout_cell*) ;

void
FUNC_1(struct window *VAR_0)
{
 struct layout_cell *VAR_1 = VAR_0->layout_root;

 VAR_1->xoff = 0;
 VAR_1->yoff = 0;

 FUNC_0(VAR_1);
}
