
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_userdir_t ;
 char* FUNC_0 (char*,char*) ;
 char* FUNC_1 () ;
 char* FUNC_2 (char*) ;

char *FUNC_3 (vlc_userdir_t VAR_0)
{
    switch (VAR_0)
    {
        case 134:
            break;
        case 138:
            return FUNC_0 ("CONFIG", ".config");
        case 129:
            return FUNC_0 ("DATA", ".local/share");
        case 139:
            return FUNC_0 ("CACHE", ".cache");

        case 137:
            return FUNC_2 ("DESKTOP");
        case 135:
            return FUNC_2 ("DOWNLOAD");
        case 130:
            return FUNC_2 ("TEMPLATES");
        case 131:
            return FUNC_2 ("PUBLICSHARE");
        case 136:
            return FUNC_2 ("DOCUMENTS");
        case 133:
            return FUNC_2 ("MUSIC");
        case 132:
            return FUNC_2 ("PICTURES");
        case 128:
            return FUNC_2 ("VIDEOS");
    }
    return FUNC_1 ();
}
