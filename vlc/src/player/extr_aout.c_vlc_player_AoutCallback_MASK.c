
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ f_float; scalar_t__ b_bool; char* psz_string; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_player_t ;
typedef int vlc_object_t ;
typedef int audio_output_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int *,scalar_t__) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int
FUNC_4(vlc_object_t *VAR_4, const char *VAR_5,
                        vlc_value_t VAR_6, vlc_value_t VAR_7, void *VAR_8)
{
    vlc_player_t *VAR_9 = VAR_8;

    if (FUNC_0(VAR_5, "volume") == 0)
    {
        if (VAR_6.f_float != VAR_7.f_float)
        {
            FUNC_2(VAR_9, VAR_3,
                                      (audio_output_t *)VAR_4, VAR_7.f_float);
            FUNC_3(VAR_9, 0);
        }
    }
    else if (FUNC_0(VAR_5, "mute") == 0)
    {
        if (VAR_6.b_bool != VAR_7.b_bool)
        {
            FUNC_2(VAR_9, VAR_2,
                                      (audio_output_t *)VAR_4, VAR_7.b_bool);
            FUNC_3(VAR_9, 1);
        }
    }
    else if (FUNC_0(VAR_5, "device") == 0)
    {
        const char *VAR_10 = VAR_6.psz_string;
        const char *VAR_11 = VAR_7.psz_string;

        if (VAR_10 != VAR_11 && (!VAR_10 || !VAR_11 || FUNC_0(VAR_10, VAR_11)))
            FUNC_2(VAR_9, VAR_1,
                                      (audio_output_t *)VAR_4, VAR_7.psz_string);
    }
    else
        FUNC_1();

    return VAR_0;
    (void) VAR_4;
}
