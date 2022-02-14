
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; } ;
struct input_ctx {int timer; } ;


 int FUNC_0 (int *,struct timeval*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct input_ctx *VAR_0)
{
 struct timeval VAR_1 = { .tv_usec = 100000 };

 FUNC_1(&VAR_0->timer);
 FUNC_0(&VAR_0->timer, &VAR_1);
}
