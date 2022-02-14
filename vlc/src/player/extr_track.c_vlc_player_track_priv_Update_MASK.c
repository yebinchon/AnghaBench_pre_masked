
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_player_track {char* name; int fmt; } ;
struct vlc_player_track_priv {struct vlc_player_track t; } ;
typedef int es_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*) ;

int
FUNC_5(struct vlc_player_track_priv *VAR_2,
                             const char *VAR_3, const es_format_t *VAR_4)
{
    struct vlc_player_track *VAR_5 = &VAR_2->t;

    if (FUNC_3(VAR_3, VAR_5->name) != 0)
    {
        char *VAR_6 = FUNC_4(VAR_3);
        if (!VAR_6)
            return VAR_0;
        FUNC_2((char *)VAR_5->name);
        VAR_5->name = VAR_6;
    }

    es_format_t VAR_7;
    int VAR_8 = FUNC_1(&VAR_7, VAR_4);
    if (VAR_8 != VAR_1)
        return VAR_8;

    FUNC_0(&VAR_5->fmt);
    VAR_5->fmt = VAR_7;
    return VAR_1;
}
