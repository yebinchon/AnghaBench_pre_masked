
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_fourcc_t ;
struct TYPE_9__ {int i_bitspersample; } ;
struct TYPE_13__ {scalar_t__ i_cat; int i_codec; TYPE_1__ audio; } ;
struct TYPE_12__ {int i_codec; } ;
struct TYPE_10__ {int * pf_get_cc; int pf_flush; int pf_packetize; TYPE_8__ fmt_in; TYPE_7__ fmt_out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_11__ {int * pf_parse; int * p_block; } ;
typedef TYPE_3__ decoder_sys_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_7__*,TYPE_8__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6( vlc_object_t *VAR_10 )
{
    decoder_t *VAR_11 = (decoder_t*)VAR_10;
    decoder_sys_t *VAR_12;

    if( VAR_11->fmt_in.i_cat != VAR_0 &&
        VAR_11->fmt_in.i_cat != VAR_6 &&
        VAR_11->fmt_in.i_cat != VAR_5 )
    {
        FUNC_3( VAR_11, "invalid ES type" );
        return VAR_7;
    }

    VAR_11->p_sys = VAR_12 = FUNC_2( sizeof(*VAR_12) );
    if (FUNC_4(VAR_12 == ((void*)0)))
        return VAR_8;

    VAR_12->p_block = ((void*)0);
    switch( VAR_11->fmt_in.i_codec )
    {
    case 128:
        VAR_12->pf_parse = VAR_4;
        break;
    default:
        VAR_12->pf_parse = ((void*)0);
        break;
    }

    vlc_fourcc_t VAR_13 = VAR_11->fmt_in.i_codec;

    if( VAR_11->fmt_in.i_cat == VAR_0 )
    {
        VAR_13 = FUNC_5( VAR_11->fmt_in.i_codec,
                                                     VAR_11->fmt_in.audio.i_bitspersample );
        if( !VAR_13 )
        {
            FUNC_3( VAR_11, "unknown raw audio sample size" );
            FUNC_1( VAR_12 );
            return VAR_7;
        }
    }


    FUNC_0( &VAR_11->fmt_out, &VAR_11->fmt_in );
    VAR_11->fmt_out.i_codec = VAR_13;
    if( VAR_11->fmt_in.i_cat == VAR_5 )
        VAR_11->pf_packetize = VAR_3;
    else
        VAR_11->pf_packetize = VAR_2;
    VAR_11->pf_flush = VAR_1;
    VAR_11->pf_get_cc = ((void*)0);

    return VAR_9;
}
