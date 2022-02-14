
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct grid_cell {int attr; int fg; int bg; int us; } ;
struct TYPE_3__ {struct grid_cell cell; } ;
struct input_ctx {scalar_t__ param_list_len; TYPE_2__* param_list; TYPE_1__ cell; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct input_ctx*,int,size_t*) ;
 int FUNC_1 (struct input_ctx*,size_t) ;
 int FUNC_2 (struct input_ctx*,int,size_t*) ;
 int FUNC_3 (struct input_ctx*,size_t,int ,int) ;
 int FUNC_4 (struct grid_cell*,int *,int) ;

__attribute__((used)) static void
FUNC_5(struct input_ctx *VAR_12)
{
 struct grid_cell *VAR_13 = &VAR_12->cell.cell;
 u_int VAR_14;
 int VAR_15;

 if (VAR_12->param_list_len == 0) {
  FUNC_4(VAR_13, &VAR_11, sizeof *VAR_13);
  return;
 }

 for (VAR_14 = 0; VAR_14 < VAR_12->param_list_len; VAR_14++) {
  if (VAR_12->param_list[VAR_14].type == VAR_10) {
   FUNC_1(VAR_12, VAR_14);
   continue;
  }
  VAR_15 = FUNC_3(VAR_12, VAR_14, 0, 0);
  if (VAR_15 == -1)
   continue;

  if (VAR_15 == 38 || VAR_15 == 48 || VAR_15 == 58) {
   VAR_14++;
   switch (FUNC_3(VAR_12, VAR_14, 0, -1)) {
   case 2:
    FUNC_2(VAR_12, VAR_15, &VAR_14);
    break;
   case 5:
    FUNC_0(VAR_12, VAR_15, &VAR_14);
    break;
   }
   continue;
  }

  switch (VAR_15) {
  case 0:
   FUNC_4(VAR_13, &VAR_11, sizeof *VAR_13);
   break;
  case 1:
   VAR_13->attr |= VAR_2;
   break;
  case 2:
   VAR_13->attr |= VAR_3;
   break;
  case 3:
   VAR_13->attr |= VAR_5;
   break;
  case 4:
   VAR_13->attr &= ~VAR_0;
   VAR_13->attr |= VAR_9;
   break;
  case 5:
   VAR_13->attr |= VAR_1;
   break;
  case 7:
   VAR_13->attr |= VAR_7;
   break;
  case 8:
   VAR_13->attr |= VAR_4;
   break;
  case 9:
   VAR_13->attr |= VAR_8;
   break;
  case 22:
   VAR_13->attr &= ~(VAR_2|VAR_3);
   break;
  case 23:
   VAR_13->attr &= ~VAR_5;
   break;
  case 24:
   VAR_13->attr &= ~VAR_0;
   break;
  case 25:
   VAR_13->attr &= ~VAR_1;
   break;
  case 27:
   VAR_13->attr &= ~VAR_7;
   break;
  case 28:
   VAR_13->attr &= ~VAR_4;
   break;
  case 29:
   VAR_13->attr &= ~VAR_8;
   break;
  case 30:
  case 31:
  case 32:
  case 33:
  case 34:
  case 35:
  case 36:
  case 37:
   VAR_13->fg = VAR_15 - 30;
   break;
  case 39:
   VAR_13->fg = 8;
   break;
  case 40:
  case 41:
  case 42:
  case 43:
  case 44:
  case 45:
  case 46:
  case 47:
   VAR_13->bg = VAR_15 - 40;
   break;
  case 49:
   VAR_13->bg = 8;
   break;
  case 53:
   VAR_13->attr |= VAR_6;
   break;
  case 55:
   VAR_13->attr &= ~VAR_6;
   break;
  case 59:
   VAR_13->us = 0;
   break;
  case 90:
  case 91:
  case 92:
  case 93:
  case 94:
  case 95:
  case 96:
  case 97:
   VAR_13->fg = VAR_15;
   break;
  case 100:
  case 101:
  case 102:
  case 103:
  case 104:
  case 105:
  case 106:
  case 107:
   VAR_13->bg = VAR_15 - 10;
   break;
  }
 }
}
