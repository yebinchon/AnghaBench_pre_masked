
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {int i_channels; int i_chan_mode; scalar_t__ i_rate; scalar_t__ i_format; int i_physical_channels; } ;
struct TYPE_11__ {TYPE_3__ audio; } ;
struct TYPE_8__ {int i_physical_channels; int i_chan_mode; scalar_t__ i_rate; scalar_t__ i_format; } ;
struct TYPE_9__ {TYPE_1__ audio; } ;
struct TYPE_12__ {int pf_audio_filter; TYPE_4__ fmt_out; TYPE_6__* p_sys; TYPE_2__ fmt_in; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_13__ {int i_left; int i_center; int i_right; int i_rear_left; int i_rear_center; int i_rear_right; } ;
typedef TYPE_6__ filter_sys_t ;


 int VAR_0 ;






 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_0 (int) ;
 int* VAR_6 ;

__attribute__((used)) static int FUNC_1( vlc_object_t *VAR_7 )
{
    int VAR_8 = 0;
    int VAR_9 = 0;
    filter_t * VAR_10 = (filter_t *)VAR_7;
    filter_sys_t *VAR_11;


    if ( VAR_10->fmt_in.audio.i_physical_channels != (132|128)
       || ! ( VAR_10->fmt_in.audio.i_chan_mode & VAR_0 )
       || VAR_10->fmt_out.audio.i_channels <= 2
       || ( VAR_10->fmt_in.audio.i_chan_mode & ~VAR_0 )
          != ( VAR_10->fmt_out.audio.i_chan_mode & ~VAR_0 ) )
    {
        return VAR_3;
    }

    if ( VAR_10->fmt_in.audio.i_rate != VAR_10->fmt_out.audio.i_rate )
    {
        return VAR_3;
    }

    if ( VAR_10->fmt_in.audio.i_format != VAR_2
          || VAR_10->fmt_out.audio.i_format != VAR_2 )
    {
        return VAR_3;
    }


    VAR_11 = VAR_10->p_sys = FUNC_0( sizeof(*VAR_11) );
    if( VAR_11 == ((void*)0) )
        return VAR_4;
    VAR_11->i_left = -1;
    VAR_11->i_center = -1;
    VAR_11->i_right = -1;
    VAR_11->i_rear_left = -1;
    VAR_11->i_rear_center = -1;
    VAR_11->i_rear_right = -1;

    while ( VAR_6[VAR_8] )
    {
        if ( VAR_10->fmt_out.audio.i_physical_channels & VAR_6[VAR_8] )
        {
            switch ( VAR_6[VAR_8] )
            {
                case 132:
                    VAR_11->i_left = VAR_9;
                    break;
                case 133:
                    VAR_11->i_center = VAR_9;
                    break;
                case 128:
                    VAR_11->i_right = VAR_9;
                    break;
                case 130:
                    VAR_11->i_rear_left = VAR_9;
                    break;
                case 131:
                    VAR_11->i_rear_center = VAR_9;
                    break;
                case 129:
                    VAR_11->i_rear_right = VAR_9;
                    break;
            }
            ++VAR_9;
        }
        ++VAR_8;
    }

    VAR_10->pf_audio_filter = VAR_1;

    return VAR_5;
}
