
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* p_clip_info; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_4__ {int pg_stream_count; int * pg_streams; int audio_stream_count; int * audio_streams; } ;
typedef int BLURAY_STREAM_INFO ;





__attribute__((used)) static uint8_t FUNC_0(demux_sys_t *VAR_0,
                                        int VAR_1,
                                        BLURAY_STREAM_INFO **VAR_2)
{
    if(!VAR_0->p_clip_info)
        return 0;

    switch(VAR_1)
    {
        case 129:
            *VAR_2 = VAR_0->p_clip_info->audio_streams;
            return VAR_0->p_clip_info->audio_stream_count;
        case 128:
            *VAR_2 = VAR_0->p_clip_info->pg_streams;
            return VAR_0->p_clip_info->pg_stream_count;
        default:
            return 0;
    }
}
