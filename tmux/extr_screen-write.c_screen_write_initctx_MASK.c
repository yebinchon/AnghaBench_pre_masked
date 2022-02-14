
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_ctx {int orupper; int orlower; int ocy; int ocx; int wp; } ;
struct screen_write_ctx {int wp; struct screen* s; } ;
struct screen {int rupper; int rlower; int cy; int cx; } ;


 int FUNC_0 (struct tty_ctx*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct screen_write_ctx *VAR_0, struct tty_ctx *VAR_1)
{
 struct screen *VAR_2 = VAR_0->s;

 FUNC_0(VAR_1, 0, sizeof *VAR_1);

 VAR_1->wp = VAR_0->wp;

 VAR_1->ocx = VAR_2->cx;
 VAR_1->ocy = VAR_2->cy;

 VAR_1->orlower = VAR_2->rlower;
 VAR_1->orupper = VAR_2->rupper;
}
