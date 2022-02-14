
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_ctx {int num; int wp; int ocy; int ocx; int bg; scalar_t__ bigger; } ;
struct tty {int term; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty*,struct tty_ctx const*,int ,int ) ;
 int FUNC_1 (struct tty*,int ,int ) ;
 int FUNC_2 (struct tty*,struct tty_ctx const*,int ) ;
 int FUNC_3 (struct tty*,int ,int) ;
 int FUNC_4 (struct tty*,int ,int ) ;
 int FUNC_5 (struct tty*,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

void
FUNC_7(struct tty *VAR_1, const struct tty_ctx *VAR_2)
{
 if (VAR_2->bigger) {
  FUNC_2(VAR_1, VAR_2, VAR_2->ocy);
  return;
 }

 FUNC_1(VAR_1, VAR_2->wp, VAR_2->bg);

 FUNC_0(VAR_1, VAR_2, VAR_2->ocx, VAR_2->ocy);

 if (FUNC_6(VAR_1->term, VAR_0) &&
     !FUNC_3(VAR_1, VAR_2->wp, 8))
  FUNC_4(VAR_1, VAR_0, VAR_2->num);
 else
  FUNC_5(VAR_1, VAR_2->num);
}
