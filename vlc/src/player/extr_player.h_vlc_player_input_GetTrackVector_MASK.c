
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_track_vector ;
struct vlc_player_input {int spu_track_vector; int audio_track_vector; int video_track_vector; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;






__attribute__((used)) static inline vlc_player_track_vector *
FUNC_0(struct vlc_player_input *VAR_0,
                                enum es_format_category_e VAR_1)
{
    switch (VAR_1)
    {
        case 128:
            return &VAR_0->video_track_vector;
        case 130:
            return &VAR_0->audio_track_vector;
        case 129:
            return &VAR_0->spu_track_vector;
        default:
            return ((void*)0);
    }
}
