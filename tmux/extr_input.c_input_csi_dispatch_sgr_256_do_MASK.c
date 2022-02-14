
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grid_cell {int fg; int bg; int us; } ;
struct TYPE_2__ {struct grid_cell cell; } ;
struct input_ctx {TYPE_1__ cell; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct input_ctx *VAR_1, int VAR_2, int VAR_3)
{
 struct grid_cell *VAR_4 = &VAR_1->cell.cell;

 if (VAR_3 == -1 || VAR_3 > 255) {
  if (VAR_2 == 38)
   VAR_4->fg = 8;
  else if (VAR_2 == 48)
   VAR_4->bg = 8;
 } else {
  if (VAR_2 == 38)
   VAR_4->fg = VAR_3 | VAR_0;
  else if (VAR_2 == 48)
   VAR_4->bg = VAR_3 | VAR_0;
  else if (VAR_2 == 58)
   VAR_4->us = VAR_3 | VAR_0;
 }
 return (1);
}
