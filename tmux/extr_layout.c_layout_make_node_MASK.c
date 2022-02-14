
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct layout_cell {int type; TYPE_1__* wp; int cells; } ;
typedef enum layout_type { ____Placeholder_layout_type } layout_type ;
struct TYPE_2__ {int * layout_cell; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

void
FUNC_2(struct layout_cell *VAR_1, enum layout_type VAR_2)
{
 if (VAR_2 == VAR_0)
  FUNC_1("bad layout type");
 VAR_1->type = VAR_2;

 FUNC_0(&VAR_1->cells);

 if (VAR_1->wp != ((void*)0))
  VAR_1->wp->layout_cell = ((void*)0);
 VAR_1->wp = ((void*)0);
}
