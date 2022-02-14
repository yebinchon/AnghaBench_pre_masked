
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {int mode; int rlower; scalar_t__ rupper; } ;


 int VAR_0 ;
 int FUNC_0 (struct screen*) ;
 int FUNC_1 (struct screen*) ;
 int FUNC_2 (struct screen_write_ctx*,int,int) ;

void
FUNC_3(struct screen_write_ctx *VAR_1, int VAR_2, int VAR_3,
    int VAR_4)
{
 struct screen *VAR_5 = VAR_1->s;

 if (VAR_4 && VAR_3 != -1 && (VAR_5->mode & VAR_0)) {
  if ((u_int)VAR_3 > VAR_5->rlower - VAR_5->rupper)
   VAR_3 = VAR_5->rlower;
  else
   VAR_3 += VAR_5->rupper;
 }

 if (VAR_2 != -1 && (u_int)VAR_2 > FUNC_0(VAR_5) - 1)
  VAR_2 = FUNC_0(VAR_5) - 1;
 if (VAR_3 != -1 && (u_int)VAR_3 > FUNC_1(VAR_5) - 1)
  VAR_3 = FUNC_1(VAR_5) - 1;

 FUNC_2(VAR_1, VAR_2, VAR_3);
}
