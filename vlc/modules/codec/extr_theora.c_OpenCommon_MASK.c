
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {scalar_t__ i_codec; } ;
struct TYPE_6__ {scalar_t__ i_codec; } ;
struct TYPE_8__ {int pf_flush; int pf_decode; TYPE_2__ fmt_out; int pf_packetize; TYPE_4__* p_sys; TYPE_1__ fmt_in; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_9__ {int b_packetizer; int b_has_headers; int b_decoded_first_keyframe; int ti; int tc; int * tcx; int i_pts; } ;
typedef TYPE_4__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_9, bool VAR_10 )
{
    decoder_t *VAR_11 = (decoder_t*)VAR_9;
    decoder_sys_t *VAR_12;

    if( VAR_11->fmt_in.i_codec != VAR_4 )
    {
        return VAR_5;
    }


    if( ( VAR_11->p_sys = VAR_12 = FUNC_0(sizeof(*VAR_12)) ) == ((void*)0) )
        return VAR_6;
    VAR_12->b_packetizer = VAR_10;
    VAR_12->b_has_headers = 0;
    VAR_12->i_pts = VAR_8;
    VAR_12->b_decoded_first_keyframe = 0;
    VAR_12->tcx = ((void*)0);

    if( VAR_10 )
    {
        VAR_11->fmt_out.i_codec = VAR_4;
        VAR_11->pf_packetize = VAR_2;
    }
    else
    {
        VAR_11->fmt_out.i_codec = VAR_3;
        VAR_11->pf_decode = VAR_0;
    }
    VAR_11->pf_flush = VAR_1;


    FUNC_1( &VAR_12->tc );
    FUNC_2( &VAR_12->ti );

    return VAR_7;
}
