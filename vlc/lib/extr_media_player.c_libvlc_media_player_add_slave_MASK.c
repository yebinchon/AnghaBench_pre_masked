
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
typedef scalar_t__ libvlc_media_slave_type_t ;
struct TYPE_3__ {int * player; } ;
typedef TYPE_1__ libvlc_media_player_t ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,char const*,int,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3( libvlc_media_player_t *VAR_3,
                                   libvlc_media_slave_type_t VAR_4,
                                   const char *VAR_5, bool VAR_6 )
{
    vlc_player_t *VAR_7 = VAR_3->player;
    FUNC_1(VAR_7);

    enum es_format_category_e VAR_8 = VAR_4 == VAR_2
                                  ? VAR_1
                                  : VAR_0;

    int VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_5, VAR_6,
                                            0, 0);

    FUNC_2(VAR_7);
    return VAR_9;
}
