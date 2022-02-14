
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_4__ {scalar_t__ b_bool; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_player_t ;
typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(vlc_object_t *VAR_3, const char *VAR_4,
                        vlc_value_t VAR_5, vlc_value_t VAR_6, void *VAR_7)
{
    vlc_player_t *VAR_8 = VAR_7;

    if (FUNC_0(VAR_4, "fullscreen") == 0)
    {
        if (VAR_5.b_bool != VAR_6.b_bool )
            FUNC_2(VAR_8, VAR_1,
                                      (vout_thread_t *)VAR_3, VAR_6.b_bool);
    }
    else if (FUNC_0(VAR_4, "video-wallpaper") == 0)
    {
        if (VAR_5.b_bool != VAR_6.b_bool )
            FUNC_2(VAR_8, VAR_2,
                                      (vout_thread_t *)VAR_3, VAR_6.b_bool);
    }
    else
        FUNC_1();

    return VAR_0;
}
