
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct screen_write_ctx {int dummy; } ;
struct input_ctx {int old_mode; int old_cy; int old_cx; int old_cell; int cell; struct screen_write_ctx ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct screen_write_ctx*,int ,int ,int ) ;
 int FUNC_2 (struct screen_write_ctx*,int) ;
 int FUNC_3 (struct screen_write_ctx*,int) ;

__attribute__((used)) static void
FUNC_4(struct input_ctx *VAR_1)
{
 struct screen_write_ctx *VAR_2 = &VAR_1->ctx;

 FUNC_0(&VAR_1->cell, &VAR_1->old_cell, sizeof VAR_1->cell);
 if (VAR_1->old_mode & VAR_0)
  FUNC_3(VAR_2, VAR_0);
 else
  FUNC_2(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_1->old_cx, VAR_1->old_cy, 0);
}
