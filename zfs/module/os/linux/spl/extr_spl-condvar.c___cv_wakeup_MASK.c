
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct spl_task_timer {int task; } ;
typedef scalar_t__ spl_timer_list_t ;


 struct spl_task_timer* FUNC_0 (int ,struct timer_list*,int ) ;
 struct spl_task_timer* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(spl_timer_list_t VAR_2)
{
 struct timer_list *VAR_3 = (struct timer_list *)VAR_2;
 struct spl_task_timer *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_1);

 FUNC_1(VAR_4->task);
}
