
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct screen {int mode; TYPE_1__* grid; scalar_t__ rlower; scalar_t__ rupper; scalar_t__ cy; scalar_t__ cx; } ;
struct TYPE_2__ {int sy; int hsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int) ;
 int FUNC_1 (struct screen*) ;
 int FUNC_2 (struct screen*) ;
 int FUNC_3 (struct screen*) ;
 scalar_t__ FUNC_4 (struct screen*) ;

void
FUNC_5(struct screen *VAR_2)
{
 VAR_2->cx = 0;
 VAR_2->cy = 0;

 VAR_2->rupper = 0;
 VAR_2->rlower = FUNC_4(VAR_2) - 1;

 VAR_2->mode = VAR_0 | VAR_1;

 FUNC_3(VAR_2);

 FUNC_0(VAR_2->grid, VAR_2->grid->hsize, VAR_2->grid->sy, 8);

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
}
