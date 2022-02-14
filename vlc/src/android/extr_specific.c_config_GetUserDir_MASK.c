
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_userdir_t ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char*) ;
 char** VAR_0 ;

char *FUNC_3 (vlc_userdir_t VAR_1)
{
    switch (VAR_1)
    {
        case 129:
            return FUNC_2(".share",
                "/sdcard/Android/data/org.videolan.vlc");
        case 139:
            return FUNC_2(".cache",
                "/sdcard/Android/data/org.videolan.vlc/cache");
        case 134:
            return FUNC_2(((void*)0), ((void*)0));
        case 138:
            return FUNC_2(".config", ((void*)0));

        case 137:
        case 135:
        case 130:
        case 131:
        case 136:
        case 133:
        case 132:
        case 128:
        {
            FUNC_0(VAR_1 >= 137 && VAR_1 <= 128);
            const char *VAR_2 = VAR_0[VAR_1 - 137];
            if (VAR_2 != ((void*)0))
                return FUNC_1(VAR_2);
        }
    }
    return ((void*)0);
}
