
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {scalar_t__ i_codec; int i_cat; } ;
struct TYPE_5__ {TYPE_4__ fmt_in; int fmt_out; int * pf_get_cc; int pf_flush; int pf_packetize; TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_6__ {scalar_t__ i_offset; int * p_codec_ctx; int * p_parser_ctx; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int AVCodecParserContext ;
typedef int AVCodecContext ;
typedef int AVCodec ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,unsigned int*,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (unsigned int) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (unsigned int) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,TYPE_4__*) ;
 TYPE_2__* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;

int FUNC_10( vlc_object_t *VAR_6 )
{
    decoder_t *VAR_7 = (decoder_t*)VAR_6;
    decoder_sys_t *VAR_8;


    if( VAR_7->fmt_in.i_codec != VAR_2 )
        return VAR_3;

    unsigned VAR_9;

    if( !FUNC_0( VAR_7->fmt_in.i_cat, VAR_7->fmt_in.i_codec,
                         &VAR_9, ((void*)0) ) )
        return VAR_3;


    FUNC_9(VAR_6);


    AVCodecParserContext * VAR_10 = FUNC_2( VAR_9 );
    if( !VAR_10 )
        return VAR_3;

    AVCodec * VAR_11 = FUNC_4( VAR_9 );
    if( FUNC_8( !VAR_11 ) )
    {
        FUNC_1( VAR_10 );
        return VAR_3;
    }

    AVCodecContext * VAR_12 = FUNC_3( VAR_11 );
    if( FUNC_8( !VAR_12 ) )
    {
        FUNC_1( VAR_10 );
        return VAR_4;
    }

    VAR_7->p_sys = VAR_8 = FUNC_7( sizeof(*VAR_8) );

    if( FUNC_8( !VAR_8 ) )
    {
        FUNC_5( &VAR_12 );
        FUNC_1( VAR_10 );
        return VAR_4;
    }
    VAR_7->pf_packetize = VAR_1;
    VAR_7->pf_flush = VAR_0;
    VAR_7->pf_get_cc = ((void*)0);
    VAR_8->p_parser_ctx = VAR_10;
    VAR_8->p_codec_ctx = VAR_12;
    VAR_8->i_offset = 0;
    FUNC_6( &VAR_7->fmt_out, &VAR_7->fmt_in );

    return VAR_5;
}
