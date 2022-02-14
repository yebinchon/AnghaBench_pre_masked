
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int i_codec; } ;
struct TYPE_8__ {scalar_t__ i_codec; } ;
struct TYPE_9__ {int pf_flush; int pf_decode; TYPE_1__ fmt_out; TYPE_4__* p_sys; TYPE_2__ fmt_in; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_10__ {scalar_t__ i_frame_pts_delta; int i_lastpts; int * p_format; int * p_schro; } ;
typedef TYPE_4__ decoder_sys_t ;
typedef int SchroDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int) ;
 int * FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_8 )
{
    decoder_t *VAR_9 = (decoder_t*)VAR_8;
    decoder_sys_t *VAR_10;
    SchroDecoder *VAR_11;

    if( VAR_9->fmt_in.i_codec != VAR_2 )
    {
        return VAR_4;
    }


    VAR_10 = FUNC_1(sizeof(decoder_sys_t));
    if( VAR_10 == ((void*)0) )
        return VAR_5;



    FUNC_3();


    if( !(VAR_11 = FUNC_2()) )
    {
        FUNC_0( VAR_10 );
        return VAR_4;
    }

    VAR_9->p_sys = VAR_10;
    VAR_10->p_schro = VAR_11;
    VAR_10->p_format = ((void*)0);
    VAR_10->i_lastpts = VAR_7;
    VAR_10->i_frame_pts_delta = 0;


    VAR_9->fmt_out.i_codec = VAR_3;


    VAR_9->pf_decode = VAR_0;
    VAR_9->pf_flush = VAR_1;

    return VAR_6;
}
