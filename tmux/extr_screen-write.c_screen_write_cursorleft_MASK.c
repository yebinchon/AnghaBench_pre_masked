
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {scalar_t__ cx; scalar_t__ cy; } ;


 int FUNC_0 (struct screen_write_ctx*,scalar_t__,scalar_t__) ;

void
FUNC_1(struct screen_write_ctx *VAR_0, u_int VAR_1)
{
 struct screen *VAR_2 = VAR_0->s;
 u_int VAR_3 = VAR_2->cx, VAR_4 = VAR_2->cy;

 if (VAR_1 == 0)
  VAR_1 = 1;

 if (VAR_1 > VAR_3)
  VAR_1 = VAR_3;
 if (VAR_1 == 0)
  return;

 VAR_3 -= VAR_1;

 FUNC_0(VAR_0, VAR_3, VAR_4);
}
