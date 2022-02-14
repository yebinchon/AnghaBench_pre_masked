
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {size_t i_tracks; void* psz_date; void* psz_artist; void* psz_group_id; void* psz_id; void* psz_title; int * p_tracks; } ;
typedef TYPE_3__ musicbrainz_release_t ;
struct TYPE_12__ {scalar_t__ length; TYPE_4__ const** values; } ;
struct TYPE_13__ {TYPE_1__ array; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_4__ const json_value ;


 int * FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (TYPE_4__ const*,char*) ;
 TYPE_4__ const* FUNC_2 (TYPE_4__ const*,char*) ;
 void* FUNC_3 (TYPE_4__ const*) ;
 scalar_t__ FUNC_4 (TYPE_4__ const*,int *) ;

__attribute__((used)) static bool FUNC_5(const json_value *VAR_1, musicbrainz_release_t *VAR_2)
{
    const json_value *VAR_3 = FUNC_2(VAR_1, "media");
    if(!VAR_3 || VAR_3->type != VAR_0 ||
       VAR_3->u.array.length == 0)
        return 0;

    VAR_3 = VAR_3->u.array.values[0];

    const json_value *VAR_4 = FUNC_2(VAR_3, "tracks");
    if(!VAR_4 || VAR_4->type != VAR_0 ||
       VAR_4->u.array.length == 0)
        return 0;

    VAR_2->p_tracks = FUNC_0(VAR_4->u.array.length, sizeof(*VAR_2->p_tracks));
    if(!VAR_2->p_tracks)
        return 0;

    for(size_t VAR_5=0; VAR_5<VAR_4->u.array.length; VAR_5++)
    {
        if(FUNC_4(VAR_4->u.array.values[VAR_5], &VAR_2->p_tracks[VAR_2->i_tracks]))
            VAR_2->i_tracks++;
    }

    VAR_2->psz_title = FUNC_1(VAR_1, "title");
    VAR_2->psz_id = FUNC_1(VAR_1, "id");

    const json_value *VAR_6 = FUNC_2(VAR_1, "release-group");
    if(VAR_6)
    {
        VAR_2->psz_date = FUNC_1(VAR_6, "first-release-date");
        VAR_2->psz_group_id = FUNC_1(VAR_6, "id");

        const json_value *VAR_7 = FUNC_2(VAR_6, "artist-credit");
        if(VAR_7)
            VAR_2->psz_artist = FUNC_3(VAR_7);
    }
    else
    {
        const json_value *VAR_8 = FUNC_2(VAR_1, "artist-credit");
        if(VAR_8)
            VAR_2->psz_artist = FUNC_3(VAR_8);

        VAR_8 = FUNC_2(VAR_1, "release-events");
        if(VAR_8 && VAR_8->type == VAR_0 && VAR_8->u.array.length)
            VAR_2->psz_date = FUNC_1(VAR_8->u.array.values[0], "date");
    }


    return 1;
}
