
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_pane {int dummy; } ;
struct window {int panes; } ;


 struct window_pane* FUNC_0 (int *) ;
 struct window_pane* FUNC_1 (struct window_pane*,int ) ;
 int VAR_0 ;

struct window_pane *
FUNC_2(struct window *VAR_1, struct window_pane *VAR_2, u_int VAR_3)
{
 for (; VAR_3 > 0; VAR_3--) {
  if ((VAR_2 = FUNC_1(VAR_2, VAR_0)) == ((void*)0))
   VAR_2 = FUNC_0(&VAR_1->panes);
 }

 return (VAR_2);
}
