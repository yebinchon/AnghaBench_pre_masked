
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct screen_write_ctx {struct screen* s; } ;
struct screen {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct screen*) ;
 scalar_t__ FUNC_1 (struct screen*) ;
 int FUNC_2 (struct screen_write_ctx*,int) ;
 int FUNC_3 (struct screen_write_ctx*,int ,scalar_t__) ;
 int FUNC_4 (struct screen_write_ctx*,int ,int ) ;

void
FUNC_5(struct screen_write_ctx *VAR_2)
{
 struct screen *VAR_3 = VAR_2->s;

 FUNC_0(VAR_3);
 FUNC_3(VAR_2, 0, FUNC_1(VAR_3) - 1);

 VAR_3->mode = VAR_0 | VAR_1;

 FUNC_2(VAR_2, 8);
 FUNC_4(VAR_2, 0, 0);
}
