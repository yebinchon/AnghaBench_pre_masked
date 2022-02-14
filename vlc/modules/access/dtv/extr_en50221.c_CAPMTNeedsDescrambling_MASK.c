
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t i_es_count; TYPE_1__* p_es; scalar_t__ p_program_descriptors; } ;
typedef TYPE_2__ en50221_capmt_info_t ;
struct TYPE_4__ {scalar_t__ p_descriptors; } ;



__attribute__((used)) static bool FUNC_0( const en50221_capmt_info_t *VAR_0 )
{
    if( VAR_0->p_program_descriptors )
        return 1;

    for( size_t VAR_1=0; VAR_1<VAR_0->i_es_count; VAR_1++ )
    {
        if( VAR_0->p_es[VAR_1].p_descriptors )
            return 1;
    }

    return 0;
}
