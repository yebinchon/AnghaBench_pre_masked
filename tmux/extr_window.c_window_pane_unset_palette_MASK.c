
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {int flags; scalar_t__* palette; } ;


 int VAR_0 ;

void
FUNC_0(struct window_pane *VAR_1, u_int VAR_2)
{
 if (VAR_2 > 0xff || VAR_1->palette == ((void*)0))
  return;

 VAR_1->palette[VAR_2] = 0;
 VAR_1->flags |= VAR_0;
}
