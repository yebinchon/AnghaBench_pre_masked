
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_state {int view_io; int highlight; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool
FUNC_2(struct diff_state *VAR_0)
{
 if (!VAR_0->highlight)
  return 1;
 FUNC_1(&VAR_0->view_io);
 return FUNC_0(&VAR_0->view_io);
}
