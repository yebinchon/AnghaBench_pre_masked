
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct tty_ctx {int bg; } ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {scalar_t__ cy; TYPE_1__* grid; } ;
struct grid_line {scalar_t__ cellsize; } ;
struct TYPE_3__ {scalar_t__ hsize; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct grid_line* FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__,int ,int,int ) ;
 int FUNC_3 (struct screen*) ;
 int FUNC_4 (struct screen_write_ctx*,scalar_t__,int) ;
 int FUNC_5 (struct screen_write_ctx*,int ) ;
 int FUNC_6 (struct screen_write_ctx*,struct tty_ctx*) ;
 int VAR_0 ;
 int FUNC_7 (int ,struct tty_ctx*) ;

void
FUNC_8(struct screen_write_ctx *VAR_1, u_int VAR_2)
{
 struct screen *VAR_3 = VAR_1->s;
 struct grid_line *VAR_4;
 struct tty_ctx VAR_5;
 u_int VAR_6 = FUNC_3(VAR_3);

 VAR_4 = FUNC_1(VAR_3->grid, VAR_3->grid->hsize + VAR_3->cy);
 if (VAR_4->cellsize == 0 && FUNC_0(VAR_2))
  return;

 FUNC_6(VAR_1, &VAR_5);
 VAR_5.bg = VAR_2;

 FUNC_2(VAR_3->grid, 0, VAR_3->cy, VAR_6, 1, VAR_2);

 FUNC_4(VAR_1, VAR_3->cy, 1);
 FUNC_5(VAR_1, 0);
 FUNC_7(VAR_0, &VAR_5);
}
