
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {int name_time; } ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct timeval*,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_1(struct window *VAR_1, struct timeval *VAR_2)
{
 struct timeval VAR_3;

 FUNC_0(VAR_2, &VAR_1->name_time, &VAR_3);
 if (VAR_3.tv_sec != 0 || VAR_3.tv_usec > VAR_0)
  return (0);
 return (VAR_0 - VAR_3.tv_usec);
}
