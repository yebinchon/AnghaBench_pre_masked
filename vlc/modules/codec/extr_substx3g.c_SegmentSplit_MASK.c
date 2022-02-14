
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int i_size; TYPE_2__* s; struct TYPE_10__* p_next3g; } ;
typedef TYPE_1__ tx3g_segment_t ;
typedef int text_style_t ;
struct TYPE_11__ {scalar_t__ style; } ;


 int FUNC_0 (TYPE_1__*,int const,int const,TYPE_1__**,TYPE_1__**,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (scalar_t__,int const*,int) ;

__attribute__((used)) static bool FUNC_5( tx3g_segment_t *VAR_0, tx3g_segment_t **VAR_1,
                          const uint16_t VAR_2, const uint16_t VAR_3,
                          const text_style_t *VAR_4 )
{
    tx3g_segment_t *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);

    if ( (*VAR_1)->i_size == 0 ) return 0;
    if ( VAR_2 > VAR_3 ) return 0;
    if ( (size_t)(VAR_3 - VAR_2) > (*VAR_1)->i_size - 1 ) return 0;
    if ( VAR_3 > (*VAR_1)->i_size - 1 ) return 0;

    FUNC_0( *VAR_1, VAR_2, VAR_3, &VAR_5, &VAR_6, &VAR_7 );
    if ( !VAR_6 )
    {

        FUNC_2( VAR_5->s );
        FUNC_1( VAR_5 );
        FUNC_2( VAR_7->s );
        FUNC_1( VAR_7 );
        return 0;
    }

    tx3g_segment_t *VAR_8 = (*VAR_1)->p_next3g;
    FUNC_2( (*VAR_1)->s );
    FUNC_1( *VAR_1 );
    *VAR_1 = ( VAR_5 ) ? VAR_5 : VAR_6 ;
    if ( VAR_0 ) VAR_0->p_next3g = *VAR_1;

    if ( VAR_7 )
        VAR_7->p_next3g = VAR_8;
    else
        VAR_6->p_next3g = VAR_8;

    if( VAR_6->s->style )
        FUNC_4( VAR_6->s->style, VAR_4, 1 );
    else
        VAR_6->s->style = FUNC_3( VAR_4 );

    return 1;
}
