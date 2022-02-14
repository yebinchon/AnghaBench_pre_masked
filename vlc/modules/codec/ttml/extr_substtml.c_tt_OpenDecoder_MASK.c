
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {scalar_t__ i_codec; } ;
struct TYPE_8__ {int pf_flush; int pf_decode; TYPE_3__* p_sys; TYPE_1__ fmt_in; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_9__ {int pes; int i_align; } ;
typedef TYPE_3__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;

int FUNC_5( vlc_object_t *VAR_7 )
{
    decoder_t *VAR_8 = (decoder_t*)VAR_7;
    decoder_sys_t *VAR_9;

    if( VAR_8->fmt_in.i_codec != VAR_3 &&
        !FUNC_0(VAR_8) )
        return VAR_4;


    VAR_8->p_sys = VAR_9 = FUNC_1( 1, sizeof( *VAR_9 ) );
    if( FUNC_3( VAR_9 == ((void*)0) ) )
        return VAR_5;

    if( !FUNC_0( VAR_8 ) )
        VAR_8->pf_decode = VAR_0;
    else
        VAR_8->pf_decode = VAR_1;
    VAR_8->pf_flush = VAR_2;
    VAR_9->i_align = FUNC_4( VAR_8, "ttml-align" );
    FUNC_2( &VAR_9->pes );

    return VAR_6;
}
