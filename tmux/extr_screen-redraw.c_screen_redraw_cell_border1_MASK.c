
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_pane {scalar_t__ xoff; scalar_t__ sx; scalar_t__ yoff; scalar_t__ sy; } ;



__attribute__((used)) static int
FUNC_0(struct window_pane *VAR_0, u_int VAR_1, u_int VAR_2)
{

 if (VAR_1 >= VAR_0->xoff && VAR_1 < VAR_0->xoff + VAR_0->sx &&
     VAR_2 >= VAR_0->yoff && VAR_2 < VAR_0->yoff + VAR_0->sy)
  return (0);


 if ((VAR_0->yoff == 0 || VAR_2 >= VAR_0->yoff - 1) && VAR_2 <= VAR_0->yoff + VAR_0->sy) {
  if (VAR_0->xoff != 0 && VAR_1 == VAR_0->xoff - 1)
   return (1);
  if (VAR_1 == VAR_0->xoff + VAR_0->sx)
   return (2);
 }


 if ((VAR_0->xoff == 0 || VAR_1 >= VAR_0->xoff - 1) && VAR_1 <= VAR_0->xoff + VAR_0->sx) {
  if (VAR_0->yoff != 0 && VAR_2 == VAR_0->yoff - 1)
   return (3);
  if (VAR_2 == VAR_0->yoff + VAR_0->sy)
   return (4);
 }


 return (-1);
}
