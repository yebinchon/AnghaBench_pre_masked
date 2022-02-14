
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_data {int lock; int wait; int timer; int count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (void *VAR_0)
{
    struct timer_data *VAR_1 = VAR_0;

    FUNC_1 (&VAR_1->lock);
    VAR_1->count += 1 + FUNC_3 (VAR_1->timer);
    FUNC_0 (&VAR_1->wait);
    FUNC_2 (&VAR_1->lock);
}
