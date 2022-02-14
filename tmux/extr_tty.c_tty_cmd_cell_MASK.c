
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_ctx {int ocx; scalar_t__ ocy; int xoff; int ox; scalar_t__ orlower; int wp; int cell; int orupper; } ;
struct tty {int sx; } ;


 int FUNC_0 (struct tty*,int ,int ) ;
 int FUNC_1 (struct tty*,struct tty_ctx const*,int,scalar_t__) ;
 int FUNC_2 (struct tty*,struct tty_ctx const*,int,scalar_t__,int,int) ;
 int FUNC_3 (struct tty*) ;
 scalar_t__ FUNC_4 (struct tty*,struct tty_ctx const*) ;
 int FUNC_5 (struct tty*,struct tty_ctx const*,int ,scalar_t__) ;

void
FUNC_6(struct tty *VAR_0, const struct tty_ctx *VAR_1)
{
 if (!FUNC_2(VAR_0, VAR_1, VAR_1->ocx, VAR_1->ocy, 1, 1))
  return;

 if (VAR_1->xoff + VAR_1->ocx - VAR_1->ox > VAR_0->sx - 1 &&
     VAR_1->ocy == VAR_1->orlower &&
     FUNC_4(VAR_0, VAR_1))
  FUNC_5(VAR_0, VAR_1, VAR_1->orupper, VAR_1->orlower);

 FUNC_3(VAR_0);
 FUNC_1(VAR_0, VAR_1, VAR_1->ocx, VAR_1->ocy);

 FUNC_0(VAR_0, VAR_1->cell, VAR_1->wp);
}
