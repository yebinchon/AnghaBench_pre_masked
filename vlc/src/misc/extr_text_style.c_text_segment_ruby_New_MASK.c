
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* psz_rt; void* psz_base; int * p_next; } ;
typedef TYPE_1__ text_segment_ruby_t ;


 TYPE_1__* FUNC_0 (int) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*) ;

text_segment_ruby_t *FUNC_3( const char *VAR_0,
                                            const char *VAR_1 )
{
    text_segment_ruby_t *VAR_2 = FUNC_0(sizeof(*VAR_2));
    if( VAR_2 )
    {
        VAR_2->p_next = ((void*)0);
        VAR_2->psz_base = FUNC_1( VAR_0 );
        VAR_2->psz_rt = FUNC_1( VAR_1 );
        if( !VAR_2->psz_base || !VAR_2->psz_rt )
        {
            FUNC_2( VAR_2 );
            return ((void*)0);
        }
    }
    return VAR_2;
}
