
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s; int * p_next3g; scalar_t__ i_size; } ;
typedef TYPE_1__ tx3g_segment_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static tx3g_segment_t * FUNC_3( const char *VAR_0 )
{
    tx3g_segment_t *VAR_1 = FUNC_1( sizeof(tx3g_segment_t) );
    if( VAR_1 )
    {
        VAR_1->i_size = 0;
        VAR_1->p_next3g = ((void*)0);
        VAR_1->s = FUNC_2( VAR_0 );
        if( !VAR_1->s )
        {
            FUNC_0( VAR_1 );
            VAR_1 = ((void*)0);
        }
    }
    return VAR_1;
}
