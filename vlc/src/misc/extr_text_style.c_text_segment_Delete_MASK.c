
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_ruby; int style; struct TYPE_4__* psz_text; } ;
typedef TYPE_1__ text_segment_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3( text_segment_t* VAR_0 )
{
    if ( VAR_0 != ((void*)0) )
    {
        FUNC_0( VAR_0->psz_text );
        FUNC_2( VAR_0->style );
        FUNC_1( VAR_0->p_ruby );
        FUNC_0( VAR_0 );
    }
}
