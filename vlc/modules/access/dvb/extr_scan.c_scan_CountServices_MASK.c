
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t i_multiplex; TYPE_1__** pp_multiplex; } ;
typedef TYPE_2__ scan_t ;
struct TYPE_4__ {scalar_t__ i_services; } ;



__attribute__((used)) static size_t FUNC_0( const scan_t *VAR_0 )
{
    size_t VAR_1 = 0;
    for( size_t VAR_2 = 0; VAR_2 < VAR_0->i_multiplex; VAR_2++ )
        VAR_1 += VAR_0->pp_multiplex[VAR_2]->i_services;
    return VAR_1;
}
