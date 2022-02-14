
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {int* palette; int flags; } ;


 int VAR_0 ;
 int* FUNC_0 (int,int) ;

void
FUNC_1(struct window_pane *VAR_1, u_int VAR_2, int VAR_3)
{
 if (VAR_2 > 0xff)
  return;

 if (VAR_1->palette == ((void*)0))
  VAR_1->palette = FUNC_0(0x100, sizeof *VAR_1->palette);

 VAR_1->palette[VAR_2] = VAR_3;
 VAR_1->flags |= VAR_0;
}
