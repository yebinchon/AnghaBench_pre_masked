
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct window_pane {scalar_t__ active_point; } ;



__attribute__((used)) static struct window_pane *
FUNC_0(struct window_pane **VAR_0, u_int VAR_1)
{
 struct window_pane *VAR_2, *VAR_3;
 u_int VAR_4;

 if (VAR_1 == 0)
  return (((void*)0));

 VAR_3 = VAR_0[0];
 for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++) {
  VAR_2 = VAR_0[VAR_4];
  if (VAR_2->active_point > VAR_3->active_point)
   VAR_3 = VAR_2;
 }
 return (VAR_3);
}
