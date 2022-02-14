
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct grid {int flags; int sy; } ;


 int VAR_0 ;
 int FUNC_0 (struct grid*) ;
 int FUNC_1 (struct grid*,int,int,int,int) ;
 int FUNC_2 (struct grid*,int) ;
 int FUNC_3 (struct grid*,int,int,int) ;
 int FUNC_4 (struct grid*,int) ;

void
FUNC_5(struct grid *VAR_1, u_int VAR_2, u_int VAR_3,
    u_int VAR_4)
{
 if (VAR_1->flags & VAR_0) {
  FUNC_0(VAR_1);
  if (VAR_2 == 0 && VAR_3 == VAR_1->sy - 1)
   FUNC_2(VAR_1, VAR_4);
  else {
   VAR_2 = FUNC_4(VAR_1, VAR_2);
   VAR_3 = FUNC_4(VAR_1, VAR_3);
   FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
  }
 } else {
  VAR_2 = FUNC_4(VAR_1, VAR_2);
  VAR_3 = FUNC_4(VAR_1, VAR_3);
  FUNC_1(VAR_1, VAR_2, VAR_2 + 1, VAR_3 - VAR_2, VAR_4);
 }
}
