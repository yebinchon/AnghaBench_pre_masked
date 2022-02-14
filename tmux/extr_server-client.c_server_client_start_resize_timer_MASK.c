
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int resize_timer; } ;
struct timeval {int tv_usec; } ;


 int FUNC_0 (int *,struct timeval*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct window_pane *VAR_0)
{
 struct timeval VAR_1 = { .tv_usec = 250000 };

 if (!FUNC_1(&VAR_0->resize_timer, ((void*)0)))
  FUNC_0(&VAR_0->resize_timer, &VAR_1);
}
