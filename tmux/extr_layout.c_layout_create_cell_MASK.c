
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layout_cell {int * wp; void* yoff; void* xoff; void* sy; void* sx; int cells; struct layout_cell* parent; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* VAR_1 ;
 struct layout_cell* FUNC_1 (int) ;

struct layout_cell *
FUNC_2(struct layout_cell *VAR_2)
{
 struct layout_cell *VAR_3;

 VAR_3 = FUNC_1(sizeof *VAR_3);
 VAR_3->type = VAR_0;
 VAR_3->parent = VAR_2;

 FUNC_0(&VAR_3->cells);

 VAR_3->sx = VAR_1;
 VAR_3->sy = VAR_1;

 VAR_3->xoff = VAR_1;
 VAR_3->yoff = VAR_1;

 VAR_3->wp = ((void*)0);

 return (VAR_3);
}
