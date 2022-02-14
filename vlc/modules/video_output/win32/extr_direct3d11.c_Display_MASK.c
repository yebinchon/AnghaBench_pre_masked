
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_5__ {int d3d_dev; int outside_opaque; int (* swapCb ) (int ) ;} ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int picture_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(vout_display_t *VAR_0, picture_t *VAR_1)
{
    vout_display_sys_t *VAR_2 = VAR_0->sys;
    FUNC_0(VAR_1);

    FUNC_1( &VAR_2->d3d_dev );
    VAR_2->swapCb(VAR_2->outside_opaque);
    FUNC_2( &VAR_2->d3d_dev );
}
