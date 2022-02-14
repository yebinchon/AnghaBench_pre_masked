
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;




 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

void
FUNC_3(vlc_player_t *VAR_0,
                                  enum es_format_category_e VAR_1,
                                  const char *VAR_2)
{
    FUNC_2(VAR_0);
    switch (VAR_1)
    {
        case 129:
            FUNC_0(VAR_0, "audio-language", VAR_2);
            break;
        case 128:
            FUNC_0(VAR_0, "sub-language", VAR_2);
            break;
        default:
            FUNC_1();
    }
}
