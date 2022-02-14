
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int i_size; int * p_elems; } ;
struct TYPE_5__ {TYPE_4__ eit; scalar_t__ handle; int p_eas_es; scalar_t__ p_ctx; } ;
typedef TYPE_1__ ts_psip_t ;
typedef int demux_t ;


 int FUNC_0 (TYPE_4__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7( demux_t *VAR_0, ts_psip_t *VAR_1 )
{
    if( VAR_1->p_ctx )
        FUNC_6( VAR_1->p_ctx );

    FUNC_5( VAR_0, VAR_1->p_eas_es );

    if( VAR_1->handle )
    {
        FUNC_1( VAR_1->handle );
        FUNC_3( VAR_1->handle );
    }

    for( int VAR_2=0; VAR_2<VAR_1->eit.i_size; VAR_2++ )
        FUNC_2( VAR_0, VAR_1->eit.p_elems[VAR_2] );
    FUNC_0( VAR_1->eit );

    FUNC_4( VAR_1 );
}
