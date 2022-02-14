
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t i_services; int * psz_network_name; int * pp_services; } ;
typedef TYPE_1__ scan_multiplex_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2( scan_multiplex_t *VAR_0 )
{
    for( size_t VAR_1=0; VAR_1<VAR_0->i_services; VAR_1++ )
        FUNC_1( VAR_0->pp_services[VAR_1] );
    FUNC_0( VAR_0->pp_services );
    FUNC_0( VAR_0->psz_network_name );
}
