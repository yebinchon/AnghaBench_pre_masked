
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* p_next; int psz_rt; int psz_base; } ;
typedef TYPE_1__ text_segment_ruby_t ;


 TYPE_1__* FUNC_0 (int ,int ) ;

__attribute__((used)) static text_segment_ruby_t *FUNC_1( const text_segment_ruby_t *VAR_0 )
{
    text_segment_ruby_t *VAR_1 = ((void*)0);
    text_segment_ruby_t **VAR_2 = &VAR_1;
    for ( ; VAR_0 ; VAR_0 = VAR_0->p_next )
    {
        *VAR_2 = FUNC_0( VAR_0->psz_base, VAR_0->psz_rt );
        if( *VAR_2 )
            VAR_2 = &((*VAR_2)->p_next);
    }
    return VAR_1;
}
