
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct screen {TYPE_1__* grid; } ;
struct TYPE_2__ {int sx; } ;


 int FUNC_0 (struct screen*,int) ;
 int FUNC_1 (struct screen*) ;
 int FUNC_2 (struct screen*,int) ;
 int FUNC_3 (struct screen*) ;
 int FUNC_4 (struct screen*) ;

void
FUNC_5(struct screen *VAR_0, u_int VAR_1, u_int VAR_2, int VAR_3)
{
 if (VAR_1 < 1)
  VAR_1 = 1;
 if (VAR_2 < 1)
  VAR_2 = 1;

 if (VAR_1 != FUNC_3(VAR_0)) {
  VAR_0->grid->sx = VAR_1;
  FUNC_1(VAR_0);
 } else
  VAR_3 = 0;

 if (VAR_2 != FUNC_4(VAR_0))
  FUNC_2(VAR_0, VAR_2);

 if (VAR_3)
  FUNC_0(VAR_0, VAR_1);
}
