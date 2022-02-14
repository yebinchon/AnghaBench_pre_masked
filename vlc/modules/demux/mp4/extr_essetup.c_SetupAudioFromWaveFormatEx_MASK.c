
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_bitspersample; int i_blockalign; int i_rate; int i_channels; } ;
struct TYPE_8__ {int i_bitrate; scalar_t__ i_extra; int p_extra; TYPE_1__ audio; int i_codec; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_7__ {int nAvgBytesPerSec; int wBitsPerSample; int nBlockAlign; int nSamplesPerSec; int nChannels; int wFormatTag; } ;
struct TYPE_9__ {scalar_t__ i_extra; int p_extra; TYPE_2__ Format; } ;
typedef int MP4_Box_t ;


 TYPE_5__* FUNC_0 (int const*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int *,int *) ;

__attribute__((used)) static bool FUNC_4( es_format_t *VAR_0, const MP4_Box_t *VAR_1 )
{
    if( VAR_1 && FUNC_0(VAR_1) )
    {
        FUNC_3(FUNC_0(VAR_1)->Format.wFormatTag, &VAR_0->i_codec, ((void*)0));
        VAR_0->audio.i_channels = FUNC_0(VAR_1)->Format.nChannels;
        VAR_0->audio.i_rate = FUNC_0(VAR_1)->Format.nSamplesPerSec;
        VAR_0->i_bitrate = FUNC_0(VAR_1)->Format.nAvgBytesPerSec * 8;
        VAR_0->audio.i_blockalign = FUNC_0(VAR_1)->Format.nBlockAlign;
        VAR_0->audio.i_bitspersample = FUNC_0(VAR_1)->Format.wBitsPerSample;
        VAR_0->i_extra = FUNC_0(VAR_1)->i_extra;
        if( VAR_0->i_extra > 0 )
        {
            VAR_0->p_extra = FUNC_1( FUNC_0(VAR_1)->i_extra );
            FUNC_2( VAR_0->p_extra, FUNC_0(VAR_1)->p_extra, VAR_0->i_extra );
        }
        return 1;
    }
    return 0;
}
