
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct tty_ctx {int dummy; } ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {scalar_t__ rlower; scalar_t__ rupper; int grid; } ;
struct grid_cell {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,struct grid_cell*) ;
 int FUNC_1 (struct grid_cell*,int *,int) ;
 scalar_t__ FUNC_2 (struct screen*) ;
 scalar_t__ FUNC_3 (struct screen*) ;
 int FUNC_4 (struct screen_write_ctx*,int ,scalar_t__) ;
 int FUNC_5 (struct screen_write_ctx*,struct tty_ctx*) ;
 int FUNC_6 (struct screen_write_ctx*,int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (int ,struct tty_ctx*) ;
 int FUNC_8 (int *,char) ;

void
FUNC_9(struct screen_write_ctx *VAR_2)
{
 struct screen *VAR_3 = VAR_2->s;
 struct tty_ctx VAR_4;
 struct grid_cell VAR_5;
 u_int VAR_6, VAR_7;

 FUNC_1(&VAR_5, &VAR_0, sizeof VAR_5);
 FUNC_8(&VAR_5.data, 'E');

 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_3); VAR_7++) {
  for (VAR_6 = 0; VAR_6 < FUNC_2(VAR_3); VAR_6++)
   FUNC_0(VAR_3->grid, VAR_6, VAR_7, &VAR_5);
 }

 FUNC_6(VAR_2, 0, 0);

 VAR_3->rupper = 0;
 VAR_3->rlower = FUNC_3(VAR_3) - 1;

 FUNC_5(VAR_2, &VAR_4);

 FUNC_4(VAR_2, 0, FUNC_3(VAR_3) - 1);
 FUNC_7(VAR_1, &VAR_4);
}
