
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int vlc_object_t ;
struct TYPE_13__ {int i_width; int i_visible_width; int i_height; int i_visible_height; int i_sar_num; int i_sar_den; int i_chroma; } ;
struct TYPE_17__ {scalar_t__ i_speed; int * p_vout; int wait; int lock; int thread; int i_channels; int date; scalar_t__ i_blocks; TYPE_11__ fmt; } ;
typedef TYPE_3__ goom_thread_t ;
struct TYPE_14__ {int i_format; int i_rate; } ;
struct TYPE_16__ {TYPE_12__ audio; } ;
struct TYPE_15__ {TYPE_12__ audio; } ;
struct TYPE_18__ {int pf_flush; int pf_audio_filter; TYPE_2__ fmt_in; TYPE_1__ fmt_out; TYPE_3__* p_sys; } ;
typedef TYPE_4__ filter_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_12__*) ;
 int * FUNC_1 (TYPE_4__*,TYPE_11__*) ;
 TYPE_3__* FUNC_2 (int,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_8 (int *,int ,TYPE_3__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14( vlc_object_t *VAR_10 )
{
    filter_t *VAR_11 = (filter_t *)VAR_10;
    goom_thread_t *VAR_12;


    VAR_11->p_sys = VAR_12 = FUNC_2( 1, sizeof(*VAR_12) );

    const int VAR_13 = FUNC_7( VAR_11, "goom-width" );
    const int VAR_14 = FUNC_7( VAR_11, "goom-height" );

    VAR_12->fmt.i_width = VAR_12->fmt.i_visible_width = VAR_13;
    VAR_12->fmt.i_height = VAR_12->fmt.i_visible_height = VAR_14;
    VAR_12->fmt.i_chroma = VAR_5;
    VAR_12->fmt.i_sar_num = VAR_12->fmt.i_sar_den = 1;

    VAR_12->p_vout = FUNC_1( VAR_11, &VAR_12->fmt );
    if( VAR_12->p_vout == ((void*)0) )
    {
        FUNC_6( VAR_11, "no suitable vout module" );
        FUNC_5( VAR_12 );
        return VAR_6;
    }

    VAR_12->i_speed = VAR_2 - FUNC_7( VAR_11, "goom-speed" );
    if( VAR_12->i_speed < 0 )
        VAR_12->i_speed = 0;

    FUNC_12( &VAR_12->lock );
    FUNC_10( &VAR_12->wait );

    VAR_12->i_blocks = 0;
    FUNC_3( &VAR_12->date, VAR_11->fmt_in.audio.i_rate, 1 );
    FUNC_4( &VAR_12->date, VAR_9 );
    VAR_12->i_channels = FUNC_0( &VAR_11->fmt_in.audio );

    if( FUNC_8( &VAR_12->thread,
                   VAR_3, VAR_12, VAR_8 ) )
    {
        FUNC_6( VAR_11, "cannot launch goom thread" );
        FUNC_11( &VAR_12->lock );
        FUNC_9( &VAR_12->wait );
        FUNC_13( VAR_12->p_vout );
        FUNC_5( VAR_12 );
        return VAR_6;
    }

    VAR_11->fmt_in.audio.i_format = VAR_4;
    VAR_11->fmt_out.audio = VAR_11->fmt_in.audio;
    VAR_11->pf_audio_filter = VAR_0;
    VAR_11->pf_flush = VAR_1;
    return VAR_7;
}
