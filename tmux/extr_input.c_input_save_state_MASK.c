
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct screen_write_ctx {struct screen* s; } ;
struct screen {int mode; int cy; int cx; } ;
struct input_ctx {int old_mode; int old_cy; int old_cx; int cell; int old_cell; struct screen_write_ctx ctx; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct input_ctx *VAR_0)
{
 struct screen_write_ctx *VAR_1 = &VAR_0->ctx;
 struct screen *VAR_2 = VAR_1->s;

 FUNC_0(&VAR_0->old_cell, &VAR_0->cell, sizeof VAR_0->old_cell);
 VAR_0->old_cx = VAR_2->cx;
 VAR_0->old_cy = VAR_2->cy;
 VAR_0->old_mode = VAR_2->mode;
}
