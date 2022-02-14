
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* p_next; scalar_t__* psz_text; } ;
typedef TYPE_1__ text_segment_t ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 size_t FUNC_1 (scalar_t__*,char*) ;

__attribute__((used)) static bool FUNC_2( const text_segment_t *VAR_0 )
{
    while ( VAR_0 )
    {
        if ( FUNC_0( VAR_0->psz_text ) > 0 )
        {
            size_t VAR_1 = FUNC_1( VAR_0->psz_text, " " );
            if ( VAR_0->psz_text[VAR_1] )
                return 0;
        }
        VAR_0 = VAR_0->p_next;
    }

    return 1;
}
