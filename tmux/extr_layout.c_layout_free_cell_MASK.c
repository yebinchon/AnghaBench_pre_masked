
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct layout_cell {int type; TYPE_1__* wp; int cells; } ;
struct TYPE_2__ {int * layout_cell; } ;





 int FUNC_0 (int *) ;
 struct layout_cell* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct layout_cell*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct layout_cell*) ;

void
FUNC_4(struct layout_cell *VAR_1)
{
 struct layout_cell *VAR_2;

 switch (VAR_1->type) {
 case 130:
 case 129:
  while (!FUNC_0(&VAR_1->cells)) {
   VAR_2 = FUNC_1(&VAR_1->cells);
   FUNC_2(&VAR_1->cells, VAR_2, VAR_0);
   FUNC_4(VAR_2);
  }
  break;
 case 128:
  if (VAR_1->wp != ((void*)0))
   VAR_1->wp->layout_cell = ((void*)0);
  break;
 }

 FUNC_3(VAR_1);
}
