
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_meta_t ;
struct TYPE_3__ {int* pb_gain; int* pb_peak; void** pf_peak; void** pf_gain; } ;
typedef TYPE_1__ audio_replay_gain_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (char const*) ;
 char* FUNC_1 (int const*,char*) ;

void FUNC_2( audio_replay_gain_t *VAR_2,
                                          const vlc_meta_t *VAR_3 )
{
    const char * VAR_4;

    if( !VAR_3 )
        return;

    if( (VAR_4 = FUNC_1(VAR_3, "REPLAYGAIN_TRACK_GAIN")) ||
        (VAR_4 = FUNC_1(VAR_3, "RG_RADIO")) )
    {
        VAR_2->pb_gain[VAR_1] = 1;
        VAR_2->pf_gain[VAR_1] = FUNC_0( VAR_4 );
    }

    if( (VAR_4 = FUNC_1(VAR_3, "REPLAYGAIN_TRACK_PEAK" )) ||
             (VAR_4 = FUNC_1(VAR_3, "RG_PEAK" )) )
    {
        VAR_2->pb_peak[VAR_1] = 1;
        VAR_2->pf_peak[VAR_1] = FUNC_0( VAR_4 );
    }

    if( (VAR_4 = FUNC_1(VAR_3, "REPLAYGAIN_ALBUM_GAIN" )) ||
             (VAR_4 = FUNC_1(VAR_3, "RG_AUDIOPHILE" )) )
    {
        VAR_2->pb_gain[VAR_0] = 1;
        VAR_2->pf_gain[VAR_0] = FUNC_0( VAR_4 );
    }

    if( (VAR_4 = FUNC_1(VAR_3, "REPLAYGAIN_ALBUM_PEAK" )) )
    {
        VAR_2->pb_peak[VAR_0] = 1;
        VAR_2->pf_peak[VAR_0] = FUNC_0( VAR_4 );
    }
}
