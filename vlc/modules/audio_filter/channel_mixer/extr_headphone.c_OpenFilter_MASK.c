
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_17__ {int i_physical_channels; int i_chan_mode; int i_rate; void* i_format; } ;
struct TYPE_14__ {TYPE_9__ audio; } ;
struct TYPE_13__ {TYPE_9__ audio; } ;
struct TYPE_15__ {TYPE_2__ fmt_out; TYPE_1__ fmt_in; int pf_audio_filter; TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_16__ {int * p_atomic_operations; scalar_t__ i_nb_atomic_operations; int * p_overflow_buffer; scalar_t__ i_overflow_buffer_size; } ;
typedef TYPE_4__ filter_sys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,TYPE_4__*,int ,int,int ) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_9 ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,char*) ;

__attribute__((used)) static int FUNC_8( vlc_object_t *VAR_10 )
{
    filter_t *VAR_11 = (filter_t *)VAR_10;
    filter_sys_t *VAR_12;


    if( VAR_11->fmt_out.audio.i_physical_channels
            != (VAR_3|VAR_4) )
    {
        FUNC_6( VAR_11, "filter discarded (incompatible format)" );
        return VAR_7;
    }


    VAR_12 = VAR_11->p_sys = FUNC_5( sizeof(filter_sys_t) );
    if( VAR_12 == ((void*)0) )
        return VAR_8;
    VAR_12->i_overflow_buffer_size = 0;
    VAR_12->p_overflow_buffer = ((void*)0);
    VAR_12->i_nb_atomic_operations = 0;
    VAR_12->p_atomic_operations = ((void*)0);

    if( FUNC_0( FUNC_1(VAR_11), VAR_12
                , FUNC_2 ( &(VAR_11->fmt_in.audio) )
                , VAR_11->fmt_in.audio.i_physical_channels
                , VAR_11->fmt_in.audio.i_rate ) < 0 )
    {
        FUNC_4( VAR_12 );
        return VAR_7;
    }


    VAR_11->fmt_in.audio.i_format = VAR_6;
    VAR_11->fmt_out.audio.i_format = VAR_6;
    VAR_11->fmt_out.audio.i_rate = VAR_11->fmt_in.audio.i_rate;
    VAR_11->fmt_in.audio.i_chan_mode =
                                   VAR_11->fmt_out.audio.i_chan_mode;
    if( VAR_11->fmt_in.audio.i_physical_channels == VAR_2
     && (VAR_11->fmt_in.audio.i_chan_mode & VAR_0)
     && !FUNC_7( VAR_11, "headphone-dolby" ) )
    {
        VAR_11->fmt_in.audio.i_physical_channels = VAR_1;
    }
    VAR_11->pf_audio_filter = VAR_5;

    FUNC_3(&VAR_11->fmt_in.audio);
    FUNC_3(&VAR_11->fmt_out.audio);

    return VAR_9;
}
