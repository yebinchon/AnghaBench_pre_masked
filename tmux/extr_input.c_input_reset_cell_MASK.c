
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ g1set; scalar_t__ g0set; scalar_t__ set; int cell; } ;
struct input_ctx {scalar_t__ old_cy; scalar_t__ old_cx; TYPE_1__ cell; int old_cell; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(struct input_ctx *VAR_1)
{
 FUNC_0(&VAR_1->cell.cell, &VAR_0, sizeof VAR_1->cell.cell);
 VAR_1->cell.set = 0;
 VAR_1->cell.g0set = VAR_1->cell.g1set = 0;

 FUNC_0(&VAR_1->old_cell, &VAR_1->cell, sizeof VAR_1->old_cell);
 VAR_1->old_cx = 0;
 VAR_1->old_cy = 0;
}
