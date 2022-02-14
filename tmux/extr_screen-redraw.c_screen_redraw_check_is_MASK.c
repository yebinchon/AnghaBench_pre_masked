
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {scalar_t__ xoff; int sx; scalar_t__ yoff; int sy; } ;
struct window {int sx; int sy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct window_pane*,int,int) ;
 int FUNC_1 (struct window*) ;

__attribute__((used)) static int
FUNC_2(u_int VAR_5, u_int VAR_6, int VAR_7, int VAR_8,
    struct window *VAR_9, struct window_pane *VAR_10, struct window_pane *VAR_11)
{
 int VAR_12;


 VAR_12 = FUNC_0(VAR_10, VAR_5, VAR_6);
 if (VAR_12 == 0 || VAR_12 == -1)
  return (0);
 if (VAR_8 == VAR_4 && VAR_12 == 4)
  return (0);
 if (VAR_8 == VAR_2 && VAR_12 == 3)
  return (0);


 if (FUNC_1(VAR_9) != 2)
  return (1);


 if (VAR_11 == ((void*)0) || (VAR_7 == VAR_1 || VAR_7 == VAR_0))
  return (1);


 if (VAR_8 != VAR_3)
  return (1);


 if (VAR_11->xoff == 0 && VAR_11->sx == VAR_9->sx) {

  if (VAR_11->yoff == 0) {
   if (VAR_11 == VAR_10)
    return (VAR_5 <= VAR_11->sx / 2);
   return (VAR_5 > VAR_11->sx / 2);
  }
  return (0);
 }


 if (VAR_11->yoff == 0 && VAR_11->sy == VAR_9->sy) {

  if (VAR_11->xoff == 0) {
   if (VAR_11 == VAR_10)
    return (VAR_6 <= VAR_11->sy / 2);
   return (VAR_6 > VAR_11->sy / 2);
  }
  return (0);
 }

 return (1);
}
