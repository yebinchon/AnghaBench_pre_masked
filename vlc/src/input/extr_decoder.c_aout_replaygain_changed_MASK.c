
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* pb_gain; scalar_t__* pb_peak; } ;
typedef TYPE_1__ audio_replay_gain_t ;


 size_t VAR_0 ;

__attribute__((used)) static bool FUNC_0( const audio_replay_gain_t *VAR_1,
                                     const audio_replay_gain_t *VAR_2 )
{
    for( size_t VAR_3=0; VAR_3<VAR_0; VAR_3++ )
    {
        if( VAR_1->pb_gain[VAR_3] != VAR_2->pb_gain[VAR_3] ||
            VAR_1->pb_peak[VAR_3] != VAR_2->pb_peak[VAR_3] ||
            VAR_1->pb_gain[VAR_3] != VAR_2->pb_gain[VAR_3] ||
            VAR_1->pb_peak[VAR_3] != VAR_2->pb_peak[VAR_3] )
            return 1;
    }
    return 0;
}
