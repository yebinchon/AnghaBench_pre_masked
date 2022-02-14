
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct tty_ctx {int bg; } ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {TYPE_1__* grid; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct screen*) ;
 int FUNC_3 (struct screen*) ;
 int FUNC_4 (struct screen_write_ctx*,int ,int ) ;
 int FUNC_5 (struct screen_write_ctx*,struct tty_ctx*) ;
 int VAR_1 ;
 int FUNC_6 (int ,struct tty_ctx*) ;

void
FUNC_7(struct screen_write_ctx *VAR_2, u_int VAR_3)
{
 struct screen *VAR_4 = VAR_2->s;
 struct tty_ctx VAR_5;
 u_int VAR_6 = FUNC_2(VAR_4), VAR_7 = FUNC_3(VAR_4);

 FUNC_5(VAR_2, &VAR_5);
 VAR_5.bg = VAR_3;


 if (VAR_4->grid->flags & VAR_0)
  FUNC_1(VAR_4->grid, VAR_3);
 else
  FUNC_0(VAR_4->grid, 0, 0, VAR_6, VAR_7, VAR_3);

 FUNC_4(VAR_2, 0, VAR_7);
 FUNC_6(VAR_1, &VAR_5);
}
