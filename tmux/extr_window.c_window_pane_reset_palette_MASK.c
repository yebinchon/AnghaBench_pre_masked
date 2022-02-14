
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int flags; int * palette; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(struct window_pane *VAR_1)
{
 if (VAR_1->palette == ((void*)0))
  return;

 FUNC_0(VAR_1->palette);
 VAR_1->palette = ((void*)0);
 VAR_1->flags |= VAR_0;
}
