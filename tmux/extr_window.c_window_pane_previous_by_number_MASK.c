
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_pane {int dummy; } ;
struct window {int panes; } ;


 struct window_pane* FUNC_0 (int *,int ) ;
 struct window_pane* FUNC_1 (struct window_pane*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

struct window_pane *
FUNC_2(struct window *VAR_2, struct window_pane *VAR_3,
    u_int VAR_4)
{
 for (; VAR_4 > 0; VAR_4--) {
  if ((VAR_3 = FUNC_1(VAR_3, VAR_1, VAR_0)) == ((void*)0))
   VAR_3 = FUNC_0(&VAR_2->panes, VAR_1);
 }

 return (VAR_3);
}
