
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct screen_write_ctx {struct screen* s; } ;
struct screen {int mode; } ;



void
FUNC_0(struct screen_write_ctx *VAR_0, int VAR_1)
{
 struct screen *VAR_2 = VAR_0->s;

 VAR_2->mode &= ~VAR_1;
}
