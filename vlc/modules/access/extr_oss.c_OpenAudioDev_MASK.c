
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int i_channels; int i_rate; int i_bitspersample; int i_blockalign; } ;
struct TYPE_11__ {int i_bitrate; TYPE_1__ audio; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_12__ {int out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_13__ {int i_sample_rate; int p_es; scalar_t__ b_stereo; int psz_device; } ;
typedef TYPE_4__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,char*,int,...) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;
    int VAR_4 = FUNC_0( VAR_2 );

    if( VAR_4 < 0 )
        return VAR_4;

    FUNC_3( VAR_2, "opened adev=`%s' %s %dHz",
             VAR_3->psz_device, VAR_3->b_stereo ? "stereo" : "mono",
             VAR_3->i_sample_rate );

    es_format_t VAR_5;
    FUNC_1( &VAR_5, VAR_0, VAR_1 );

    VAR_5.audio.i_channels = VAR_3->b_stereo ? 2 : 1;
    VAR_5.audio.i_rate = VAR_3->i_sample_rate;
    VAR_5.audio.i_bitspersample = 16;
    VAR_5.audio.i_blockalign = VAR_5.audio.i_channels * VAR_5.audio.i_bitspersample / 8;
    VAR_5.i_bitrate = VAR_5.audio.i_channels * VAR_5.audio.i_rate * VAR_5.audio.i_bitspersample;

    FUNC_3( VAR_2, "new audio es %d channels %dHz",
             VAR_5.audio.i_channels, VAR_5.audio.i_rate );

    VAR_3->p_es = FUNC_2( VAR_2->out, &VAR_5 );

    return VAR_4;
}
