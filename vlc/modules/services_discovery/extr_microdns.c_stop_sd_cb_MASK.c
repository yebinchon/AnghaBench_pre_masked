
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct discovery_sys {int stop; } ;
struct TYPE_3__ {struct discovery_sys* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct discovery_sys*,TYPE_1__*,int *) ;

__attribute__((used)) static bool
FUNC_2( void *VAR_0 )
{
    services_discovery_t *VAR_1 = ( services_discovery_t* )VAR_0;
    struct discovery_sys *VAR_2 = VAR_1->p_sys;

    if( FUNC_0( &VAR_2->stop ) )
        return 1;
    else
    {
        FUNC_1( VAR_2, VAR_1, ((void*)0) );
        return 0;
    }
}
