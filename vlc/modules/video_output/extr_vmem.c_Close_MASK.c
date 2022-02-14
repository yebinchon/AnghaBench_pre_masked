
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_6__ {int opaque; int (* cleanup ) (int ) ;} ;
typedef TYPE_2__ vout_display_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;

    if (VAR_1->cleanup)
        VAR_1->cleanup(VAR_1->opaque);
    FUNC_0(VAR_1);
}
