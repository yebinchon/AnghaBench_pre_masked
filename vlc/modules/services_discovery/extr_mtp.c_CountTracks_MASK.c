
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_4__ {int i_tracks_num; } ;
typedef TYPE_2__ services_discovery_sys_t ;


 int FUNC_0 (int const) ;

__attribute__((used)) static int FUNC_1( uint64_t const VAR_0, uint64_t const VAR_1,
                        void const * const VAR_2 )
{
    FUNC_0( VAR_0 );
    services_discovery_t *VAR_3 = (services_discovery_t *)VAR_2;
    services_discovery_sys_t *VAR_4 = VAR_3->p_sys;
    VAR_4->i_tracks_num = VAR_1;
    return 0;
}
