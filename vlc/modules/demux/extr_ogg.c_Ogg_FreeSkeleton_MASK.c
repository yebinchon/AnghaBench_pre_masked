
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_messages; struct TYPE_5__* p_index; struct TYPE_5__** ppsz_messages; } ;
typedef TYPE_1__ ogg_skeleton_t ;


 int FUNC_0 (int,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2( ogg_skeleton_t *VAR_0 )
{
    if ( !VAR_0 ) return;
    for ( int VAR_1=0; VAR_1< VAR_0->i_messages; VAR_1++ )
        FUNC_1( VAR_0->ppsz_messages[VAR_1] );
    FUNC_0( VAR_0->i_messages, VAR_0->ppsz_messages );
    FUNC_1( VAR_0->p_index );
    FUNC_1( VAR_0 );
}
