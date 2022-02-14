
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct grid {TYPE_1__* linedata; } ;
struct TYPE_2__ {int flags; size_t cellused; } ;


 int VAR_0 ;
 size_t VAR_1 ;

void
FUNC_0(struct grid *VAR_2, u_int VAR_3, u_int VAR_4, u_int *VAR_5, u_int *VAR_6)
{
 u_int VAR_7 = 0, VAR_8 = 0, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (VAR_2->linedata[VAR_9].flags & VAR_0)
   VAR_7 += VAR_2->linedata[VAR_9].cellused;
  else {
   VAR_7 = 0;
   VAR_8++;
  }
 }
 if (VAR_3 >= VAR_2->linedata[VAR_9].cellused)
  VAR_7 = VAR_1;
 else
  VAR_7 += VAR_3;
 *VAR_5 = VAR_7;
 *VAR_6 = VAR_8;
}
