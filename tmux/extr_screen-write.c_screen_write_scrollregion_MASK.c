
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {int rupper; int rlower; } ;


 int FUNC_0 (struct screen*) ;
 int FUNC_1 (struct screen_write_ctx*,int ) ;
 int FUNC_2 (struct screen_write_ctx*,int ,int ) ;

void
FUNC_3(struct screen_write_ctx *VAR_0, u_int VAR_1,
    u_int VAR_2)
{
 struct screen *VAR_3 = VAR_0->s;

 if (VAR_1 > FUNC_0(VAR_3) - 1)
  VAR_1 = FUNC_0(VAR_3) - 1;
 if (VAR_2 > FUNC_0(VAR_3) - 1)
  VAR_2 = FUNC_0(VAR_3) - 1;
 if (VAR_1 >= VAR_2)
  return;

 FUNC_1(VAR_0, 0);


 FUNC_2(VAR_0, 0, 0);

 VAR_3->rupper = VAR_1;
 VAR_3->rlower = VAR_2;
}
