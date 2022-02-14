
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct grid {int hsize; int sy; TYPE_1__* linedata; } ;
struct TYPE_2__ {int flags; int cellused; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct grid *VAR_2, u_int *VAR_3, u_int *VAR_4, u_int VAR_5, u_int VAR_6)
{
 u_int VAR_7, VAR_8 = 0, VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_2->hsize + VAR_2->sy - 1; VAR_7++) {
  if (VAR_9 == VAR_6)
   break;
  if (VAR_2->linedata[VAR_7].flags & VAR_0)
   VAR_8 += VAR_2->linedata[VAR_7].cellused;
  else {
   VAR_8 = 0;
   VAR_9++;
  }
 }





 if (VAR_5 == VAR_1) {
  while (VAR_2->linedata[VAR_7].flags & VAR_0)
   VAR_7++;
  VAR_5 = VAR_2->linedata[VAR_7].cellused;
 } else {
  while (VAR_2->linedata[VAR_7].flags & VAR_0) {
   if (VAR_5 < VAR_2->linedata[VAR_7].cellused)
    break;
   VAR_5 -= VAR_2->linedata[VAR_7].cellused;
   VAR_7++;
  }
 }
 *VAR_3 = VAR_5;
 *VAR_4 = VAR_7;
}
