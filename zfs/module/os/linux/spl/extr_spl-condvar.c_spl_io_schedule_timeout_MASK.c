
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {long expires; } ;
struct spl_task_timer {int task; struct timer_list timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct timer_list*) ;
 int VAR_1 ;
 int FUNC_1 (struct timer_list*) ;
 int FUNC_2 () ;
 long VAR_2 ;
 int FUNC_3 (struct timer_list*,int ,int ) ;

__attribute__((used)) static long
FUNC_4(long VAR_3)
{
 long VAR_4 = VAR_2 + VAR_3;
 struct spl_task_timer VAR_5;
 struct timer_list *VAR_6 = &VAR_5.timer;

 VAR_5.task = VAR_1;

 FUNC_3(VAR_6, VAR_0, 0);

 VAR_6->expires = VAR_4;
 FUNC_0(VAR_6);

 FUNC_2();

 FUNC_1(VAR_6);

 VAR_3 = VAR_4 - VAR_2;

 return (VAR_3 < 0 ? 0 : VAR_3);
}
