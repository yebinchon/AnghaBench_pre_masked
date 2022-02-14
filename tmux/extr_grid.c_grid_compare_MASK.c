
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct grid_line {scalar_t__ cellsize; } ;
struct grid_cell {int dummy; } ;
struct grid {scalar_t__ sx; scalar_t__ sy; struct grid_line* linedata; } ;


 int FUNC_0 (struct grid_cell*,struct grid_cell*) ;
 int FUNC_1 (struct grid*,size_t,size_t,struct grid_cell*) ;

int
FUNC_2(struct grid *VAR_0, struct grid *VAR_1)
{
 struct grid_line *VAR_2, *VAR_3;
 struct grid_cell VAR_4, VAR_5;
 u_int VAR_6, VAR_7;

 if (VAR_0->sx != VAR_1->sx || VAR_0->sy != VAR_1->sy)
  return (1);

 for (VAR_7 = 0; VAR_7 < VAR_0->sy; VAR_7++) {
  VAR_2 = &VAR_0->linedata[VAR_7];
  VAR_3 = &VAR_1->linedata[VAR_7];
  if (VAR_2->cellsize != VAR_3->cellsize)
   return (1);
  for (VAR_6 = 0; VAR_6 < VAR_2->cellsize; VAR_6++) {
   FUNC_1(VAR_0, VAR_6, VAR_7, &VAR_4);
   FUNC_1(VAR_1, VAR_6, VAR_7, &VAR_5);
   if (!FUNC_0(&VAR_4, &VAR_5))
    return (1);
  }
 }

 return (0);
}
