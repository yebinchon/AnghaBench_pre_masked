
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ i_program; } ;
typedef TYPE_1__ scan_service_t ;
struct TYPE_6__ {size_t i_services; TYPE_1__** pp_services; } ;
typedef TYPE_2__ scan_multiplex_t ;



__attribute__((used)) static scan_service_t * FUNC_0( const scan_multiplex_t *VAR_0, uint16_t VAR_1 )
{
    for( size_t VAR_2 = 0; VAR_2 < VAR_0->i_services; VAR_2++ )
    {
        if( VAR_0->pp_services[VAR_2]->i_program == VAR_1 )
            return VAR_0->pp_services[VAR_2];
    }
    return ((void*)0);
}
