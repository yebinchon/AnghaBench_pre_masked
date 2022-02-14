
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grid_cell {void* us; void* bg; void* fg; } ;
struct TYPE_2__ {struct grid_cell cell; } ;
struct input_ctx {TYPE_1__ cell; } ;


 void* FUNC_0 (int,int,int) ;

__attribute__((used)) static int
FUNC_1(struct input_ctx *VAR_0, int VAR_1, int VAR_2, int VAR_3,
    int VAR_4)
{
 struct grid_cell *VAR_5 = &VAR_0->cell.cell;

 if (VAR_2 == -1 || VAR_2 > 255)
  return (0);
 if (VAR_3 == -1 || VAR_3 > 255)
  return (0);
 if (VAR_4 == -1 || VAR_4 > 255)
  return (0);

 if (VAR_1 == 38)
  VAR_5->fg = FUNC_0(VAR_2, VAR_3, VAR_4);
 else if (VAR_1 == 48)
  VAR_5->bg = FUNC_0(VAR_2, VAR_3, VAR_4);
 else if (VAR_1 == 58)
  VAR_5->us = FUNC_0(VAR_2, VAR_3, VAR_4);
 return (1);
}
