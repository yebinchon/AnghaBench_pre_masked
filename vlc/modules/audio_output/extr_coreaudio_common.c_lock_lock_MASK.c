
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; int unfair; } ;
struct aout_sys_common {TYPE_1__ lock; } ;


 scalar_t__ FUNC_0 (int (*) (int *)) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct aout_sys_common *VAR_0)
{
    if (FUNC_0(FUNC_1))
        FUNC_1(&VAR_0->lock.unfair);
    else
        FUNC_2(&VAR_0->lock.mutex);
}
