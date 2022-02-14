
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {int size; char* data; } ;
struct grid_cell {TYPE_1__ data; } ;
struct grid {scalar_t__ sx; } ;
struct TYPE_4__ {scalar_t__ cellsize; } ;


 int FUNC_0 (struct grid*,scalar_t__,scalar_t__,struct grid_cell*) ;
 TYPE_2__* FUNC_1 (struct grid*,scalar_t__) ;

u_int
FUNC_2(struct grid *VAR_0, u_int VAR_1)
{
 struct grid_cell VAR_2;
 u_int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1)->cellsize;
 if (VAR_3 > VAR_0->sx)
  VAR_3 = VAR_0->sx;
 while (VAR_3 > 0) {
  FUNC_0(VAR_0, VAR_3 - 1, VAR_1, &VAR_2);
  if (VAR_2.data.size != 1 || *VAR_2.data.data != ' ')
   break;
  VAR_3--;
 }
 return (VAR_3);
}
