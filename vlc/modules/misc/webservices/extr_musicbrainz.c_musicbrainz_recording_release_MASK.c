
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t i_release; size_t i_tracks; struct TYPE_4__* p_releases; struct TYPE_4__* p_tracks; struct TYPE_4__* psz_artist; struct TYPE_4__* psz_title; struct TYPE_4__* psz_coverart_url; struct TYPE_4__* psz_date; struct TYPE_4__* psz_group_id; struct TYPE_4__* psz_id; } ;
typedef TYPE_1__ musicbrainz_recording_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(musicbrainz_recording_t *VAR_0)
{
    for(size_t VAR_1=0; VAR_1<VAR_0->i_release; VAR_1++)
    {
        FUNC_0(VAR_0->p_releases[VAR_1].psz_id);
        FUNC_0(VAR_0->p_releases[VAR_1].psz_group_id);
        FUNC_0(VAR_0->p_releases[VAR_1].psz_artist);
        FUNC_0(VAR_0->p_releases[VAR_1].psz_title);
        FUNC_0(VAR_0->p_releases[VAR_1].psz_date);
        FUNC_0(VAR_0->p_releases[VAR_1].psz_coverart_url);
        for(size_t VAR_2=0; VAR_2<VAR_0->p_releases[VAR_1].i_tracks; VAR_2++)
        {
            FUNC_0(VAR_0->p_releases[VAR_1].p_tracks[VAR_2].psz_title);
            FUNC_0(VAR_0->p_releases[VAR_1].p_tracks[VAR_2].psz_artist);
        }
        FUNC_0(VAR_0->p_releases[VAR_1].p_tracks);
    }
    FUNC_0(VAR_0->p_releases);
    FUNC_0(VAR_0);
}
