
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct screen_sel {scalar_t__ sy; scalar_t__ ey; scalar_t__ ex; scalar_t__ sx; scalar_t__ modekeys; scalar_t__ rectangle; scalar_t__ hidden; } ;
struct screen {struct screen_sel* sel; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(struct screen *VAR_1, u_int VAR_2, u_int VAR_3)
{
 struct screen_sel *VAR_4 = VAR_1->sel;
 u_int VAR_5;

 if (VAR_4 == ((void*)0) || VAR_4->hidden)
  return (0);

 if (VAR_4->rectangle) {
  if (VAR_4->sy < VAR_4->ey) {

   if (VAR_3 < VAR_4->sy || VAR_3 > VAR_4->ey)
    return (0);
  } else if (VAR_4->sy > VAR_4->ey) {

   if (VAR_3 > VAR_4->sy || VAR_3 < VAR_4->ey)
    return (0);
  } else {

   if (VAR_3 != VAR_4->sy)
    return (0);
  }






  if (VAR_4->ex < VAR_4->sx) {

   if (VAR_2 < VAR_4->ex)
    return (0);

   if (VAR_2 > VAR_4->sx)
    return (0);
  } else {

   if (VAR_2 < VAR_4->sx)
    return (0);

   if (VAR_2 > VAR_4->ex)
    return (0);
  }
 } else {




  if (VAR_4->sy < VAR_4->ey) {

   if (VAR_3 < VAR_4->sy || VAR_3 > VAR_4->ey)
    return (0);

   if (VAR_3 == VAR_4->sy && VAR_2 < VAR_4->sx)
    return (0);

   if (VAR_4->modekeys == VAR_0)
    VAR_5 = (VAR_4->ex == 0 ? 0 : VAR_4->ex - 1);
   else
    VAR_5 = VAR_4->ex;
   if (VAR_3 == VAR_4->ey && VAR_2 > VAR_5)
    return (0);
  } else if (VAR_4->sy > VAR_4->ey) {

   if (VAR_3 > VAR_4->sy || VAR_3 < VAR_4->ey)
    return (0);

   if (VAR_3 == VAR_4->ey && VAR_2 < VAR_4->ex)
    return (0);

   if (VAR_4->modekeys == VAR_0)
    VAR_5 = VAR_4->sx - 1;
   else
    VAR_5 = VAR_4->sx;
   if (VAR_3 == VAR_4->sy && (VAR_4->sx == 0 || VAR_2 > VAR_5))
    return (0);
  } else {

   if (VAR_3 != VAR_4->sy)
    return (0);

   if (VAR_4->ex < VAR_4->sx) {

    if (VAR_4->modekeys == VAR_0)
     VAR_5 = VAR_4->sx - 1;
    else
     VAR_5 = VAR_4->sx;
    if (VAR_2 > VAR_5 || VAR_2 < VAR_4->ex)
     return (0);
   } else {

    if (VAR_4->modekeys == VAR_0)
     VAR_5 = (VAR_4->ex == 0 ? 0 : VAR_4->ex - 1);
    else
     VAR_5 = VAR_4->ex;
    if (VAR_2 < VAR_4->sx || VAR_2 > VAR_5)
     return (0);
   }
  }
 }

 return (1);
}
