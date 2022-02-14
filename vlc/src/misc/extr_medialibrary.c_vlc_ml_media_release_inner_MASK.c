
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int psz_imdb_id; int psz_summary; } ;
struct TYPE_5__ {int psz_tvdb_id; int psz_summary; } ;
struct TYPE_7__ {int i_subtype; TYPE_2__ movie; TYPE_1__ show_episode; int thumbnails; int psz_title; int p_tracks; int p_files; } ;
typedef TYPE_3__ vlc_ml_media_t ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( vlc_ml_media_t* VAR_0 )
{
    FUNC_1( VAR_0->p_files );
    FUNC_2( VAR_0->p_tracks );
    FUNC_0( VAR_0->psz_title );
    FUNC_3( VAR_0->thumbnails );
    switch( VAR_0->i_subtype )
    {
        case 130:
            break;
        case 128:
            FUNC_0( VAR_0->show_episode.psz_summary );
            FUNC_0( VAR_0->show_episode.psz_tvdb_id );
            break;
        case 129:
            FUNC_0( VAR_0->movie.psz_summary );
            FUNC_0( VAR_0->movie.psz_imdb_id );
            break;
        default:
            break;
    }
}
