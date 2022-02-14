
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; int unfair; } ;
struct aout_sys_common {TYPE_1__ lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct aout_sys_common *VAR_2)
{
    if (FUNC_0(VAR_1))
        VAR_2->lock.unfair = VAR_0;
    else
        FUNC_1(&VAR_2->lock.mutex);
}
