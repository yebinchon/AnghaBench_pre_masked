
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_ctx {int xoff; int ox; TYPE_1__* wp; } ;
struct tty {int dummy; } ;
struct TYPE_2__ {int sx; } ;


 int FUNC_0 (struct tty*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct tty *VAR_0, const struct tty_ctx *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->xoff - VAR_1->ox,
     VAR_1->xoff + VAR_1->wp->sx - 1 - VAR_1->ox);
}
