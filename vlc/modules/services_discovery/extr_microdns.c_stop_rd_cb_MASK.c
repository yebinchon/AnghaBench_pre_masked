
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct discovery_sys* p_sys; } ;
typedef TYPE_1__ vlc_renderer_discovery_t ;
struct discovery_sys {int stop; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct discovery_sys*,int *,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_2( void *VAR_0 )
{
    vlc_renderer_discovery_t *VAR_1 = VAR_0;
    struct discovery_sys *VAR_2 = VAR_1->p_sys;

    if( FUNC_0( &VAR_2->stop ) )
        return 1;
    else
    {
        FUNC_1( VAR_2, ((void*)0), VAR_1 );
        return 0;
    }
}
