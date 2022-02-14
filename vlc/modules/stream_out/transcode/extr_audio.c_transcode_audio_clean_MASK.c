
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sout_stream_t ;
struct TYPE_3__ {int * p_af_chain; int decoder_out; int encoder; } ;
typedef TYPE_1__ sout_stream_id_sys_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4( sout_stream_t *VAR_0, sout_stream_id_sys_t *VAR_1 )
{

    FUNC_2( VAR_1->encoder );
    FUNC_3( VAR_1->encoder );

    FUNC_1( &VAR_1->decoder_out );


    if( VAR_1->p_af_chain != ((void*)0) )
        FUNC_0( VAR_0, VAR_1->p_af_chain );
}
