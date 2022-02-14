
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_7__ {scalar_t__ swapCb; int outside_opaque; int d3d_dev; } ;
typedef TYPE_2__ vout_display_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_4(vout_display_t *VAR_1)
{
    vout_display_sys_t *VAR_2 = VAR_1->sys;

    FUNC_1(VAR_1);

    FUNC_0( &VAR_2->d3d_dev );

    if ( VAR_2->swapCb == VAR_0 )
        FUNC_2( VAR_2->outside_opaque );

    FUNC_3(VAR_1, "Direct3D11 display adapter closed");
}
