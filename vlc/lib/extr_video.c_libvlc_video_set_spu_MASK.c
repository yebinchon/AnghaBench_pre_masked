
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
struct vlc_player_track {int es_id; } ;
struct TYPE_3__ {int * player; } ;
typedef TYPE_1__ libvlc_media_player_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 struct vlc_player_track* FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct vlc_player_track const*,int ) ;
 int FUNC_6 (int *) ;

int FUNC_7( libvlc_media_player_t *VAR_1, int VAR_2 )
{
    int VAR_3 = -1;

    vlc_player_t *VAR_4 = VAR_1->player;
    FUNC_4(VAR_4);

    size_t VAR_5 = FUNC_3(VAR_4);
    for (size_t VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
        const struct vlc_player_track *VAR_7 =
            FUNC_2(VAR_4, VAR_6);
        if (VAR_2 == FUNC_1(VAR_7->es_id))
        {

            FUNC_5(VAR_4, VAR_7, VAR_0);
            VAR_3 = 0;
            goto end;
        }
    }
    FUNC_0( "Track identifier not found" );
end:
    FUNC_6(VAR_4);
    return VAR_3;
}
