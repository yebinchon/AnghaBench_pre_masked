
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; int unfair; } ;
struct aout_sys_common {TYPE_1__ lock; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct aout_sys_common *VAR_1)
{
    if (FUNC_0(VAR_0))
        FUNC_1(&VAR_1->lock.unfair);
    else
        FUNC_2(&VAR_1->lock.mutex);
}
