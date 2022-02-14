
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int i_size; int * p_elems; } ;
struct TYPE_5__ {TYPE_4__ eits; TYPE_4__ etts; scalar_t__ p_a65; scalar_t__ p_vct; scalar_t__ p_stt; scalar_t__ p_mgt; } ;
typedef TYPE_1__ ts_psip_context_t ;


 int FUNC_0 (TYPE_4__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9( ts_psip_context_t *VAR_0 )
{
    FUNC_1( !VAR_0->p_mgt || !VAR_0->etts.i_size );
    FUNC_1( !VAR_0->p_vct || !VAR_0->eits.i_size );

    if( VAR_0->p_mgt )
        FUNC_5( VAR_0->p_mgt );
    if( VAR_0->p_stt )
        FUNC_6( VAR_0->p_stt );
    if ( VAR_0->p_vct )
        FUNC_7( VAR_0->p_vct );
    if( VAR_0->p_a65 )
        FUNC_2( VAR_0->p_a65 );

    for( int VAR_1=0; VAR_1<VAR_0->etts.i_size; VAR_1++ )
        FUNC_4( VAR_0->etts.p_elems[VAR_1] );
    for( int VAR_2=0; VAR_2<VAR_0->eits.i_size; VAR_2++ )
        FUNC_3( VAR_0->eits.p_elems[VAR_2] );
    FUNC_0( VAR_0->etts );
    FUNC_0( VAR_0->eits );
    FUNC_8( VAR_0 );
}
