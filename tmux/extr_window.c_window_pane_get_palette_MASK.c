
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int* palette; } ;


 int VAR_0 ;

int
FUNC_0(struct window_pane *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1 == ((void*)0) || VAR_1->palette == ((void*)0))
  return (-1);

 VAR_3 = -1;
 if (VAR_2 < 8)
  VAR_3 = VAR_1->palette[VAR_2];
 else if (VAR_2 >= 90 && VAR_2 <= 97)
  VAR_3 = VAR_1->palette[8 + VAR_2 - 90];
 else if (VAR_2 & VAR_0)
  VAR_3 = VAR_1->palette[VAR_2 & ~VAR_0];
 if (VAR_3 == 0)
  return (-1);
 return (VAR_3);
}
