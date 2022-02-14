
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int lock; int opaque; int (* drain ) (int ) ;} ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3 (audio_output_t *VAR_0)
{
    aout_sys_t *VAR_1 = VAR_0->sys;

    FUNC_1(&VAR_1->lock);
    VAR_1->drain (VAR_1->opaque);
    FUNC_2(&VAR_1->lock);
}
