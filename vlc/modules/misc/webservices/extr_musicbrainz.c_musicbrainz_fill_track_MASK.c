
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int i_index; void* psz_artist; void* psz_title; } ;
typedef TYPE_3__ musicbrainz_track_t ;
struct TYPE_10__ {TYPE_4__ const** values; scalar_t__ length; } ;
struct TYPE_11__ {int integer; TYPE_1__ array; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_4__ json_value ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (TYPE_4__ const*,char*) ;
 TYPE_4__* FUNC_1 (TYPE_4__ const*,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_2(const json_value *VAR_2, musicbrainz_track_t *VAR_3)
{
    VAR_3->psz_title = FUNC_0(VAR_2, "title");

    const json_value *VAR_4 = FUNC_1(VAR_2, "artist-credit");
    if (VAR_4 && VAR_4->type == VAR_0 && VAR_4->u.array.length)
        VAR_3->psz_artist = FUNC_0(VAR_4->u.array.values[0], "name");

    VAR_4 = FUNC_1(VAR_2, "position");
    if (VAR_4 && VAR_4->type == VAR_1)
        VAR_3->i_index = VAR_4->u.integer;

    return 1;
}
