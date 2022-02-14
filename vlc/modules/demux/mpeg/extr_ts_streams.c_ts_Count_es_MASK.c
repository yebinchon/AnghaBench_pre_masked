
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ts_pmt_t ;
struct TYPE_3__ {struct TYPE_3__* p_extraes; int const* p_program; int id; struct TYPE_3__* p_next; } ;
typedef TYPE_1__ ts_es_t ;



size_t FUNC_0( const ts_es_t *VAR_0, bool VAR_1, const ts_pmt_t *VAR_2 )
{
    size_t VAR_3=0;
    for( ; VAR_0; VAR_0 = VAR_0->p_next )
    {
        VAR_3 += ( VAR_1 ) ? !!VAR_0->id : ( ( !VAR_2 || VAR_2 == VAR_0->p_program ) ? 1 : 0 );
        VAR_3 += FUNC_0( VAR_0->p_extraes, VAR_1, VAR_2 );
    }
    return VAR_3;
}
