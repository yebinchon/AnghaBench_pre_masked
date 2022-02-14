
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_ctx {int num; int ocy; int ocx; int orlower; int orupper; int bg; TYPE_1__* wp; scalar_t__ bigger; } ;
struct tty {int cy; int cx; int term; } ;
struct TYPE_3__ {int sx; int sy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tty*,struct tty_ctx const*,int ,int ) ;
 int FUNC_1 (struct tty*,TYPE_1__*,int ) ;
 int FUNC_2 (struct tty*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct tty*,TYPE_1__*,int ) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*,struct tty_ctx const*) ;
 int FUNC_6 (struct tty*,struct tty_ctx const*) ;
 int FUNC_7 (struct tty*,struct tty_ctx const*,int ,int ) ;
 int FUNC_8 (int ,int ) ;

void
FUNC_9(struct tty *VAR_4, const struct tty_ctx *VAR_5)
{
 if (VAR_5->bigger ||
     !FUNC_5(VAR_4, VAR_5) ||
     FUNC_3(VAR_4, VAR_5->wp, VAR_5->bg) ||
     !FUNC_8(VAR_4->term, VAR_0) ||
     !FUNC_8(VAR_4->term, VAR_2) ||
     VAR_5->wp->sx == 1 ||
     VAR_5->wp->sy == 1) {
  FUNC_6(VAR_4, VAR_5);
  return;
 }

 FUNC_1(VAR_4, VAR_5->wp, VAR_5->bg);

 FUNC_7(VAR_4, VAR_5, VAR_5->orupper, VAR_5->orlower);
 FUNC_4(VAR_4);
 FUNC_0(VAR_4, VAR_5, VAR_5->ocx, VAR_5->ocy);

 FUNC_2(VAR_4, VAR_1, VAR_2, VAR_5->num);
 VAR_4->cx = VAR_4->cy = VAR_3;
}
