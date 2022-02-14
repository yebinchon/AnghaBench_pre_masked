
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;




 char* FUNC_0 (int *,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

char *
FUNC_3(vlc_player_t *VAR_0,
                               enum es_format_category_e VAR_1)
{
    FUNC_2(VAR_0);
    switch (VAR_1)
    {
        case 129:
            return FUNC_0(VAR_0, "audio-language");
        case 128:
            return FUNC_0(VAR_0, "sub-language");
        default:
            FUNC_1();
    }
}
