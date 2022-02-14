
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct tty_ctx {scalar_t__ oy; scalar_t__ yoff; } ;
struct tty {int dummy; } ;


 int FUNC_0 (struct tty*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct tty *VAR_0, const struct tty_ctx *VAR_1, u_int VAR_2,
    u_int VAR_3)
{
 FUNC_0(VAR_0, VAR_1->yoff + VAR_2 - VAR_1->oy,
     VAR_1->yoff + VAR_3 - VAR_1->oy);
}
