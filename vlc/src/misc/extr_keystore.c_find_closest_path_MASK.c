
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** ppsz_values; } ;
typedef TYPE_1__ vlc_keystore_entry ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,size_t) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static vlc_keystore_entry *
FUNC_4(vlc_keystore_entry *VAR_1, unsigned VAR_2,
                  const char *VAR_3)
{
    vlc_keystore_entry *VAR_4 = ((void*)0);
    size_t VAR_5 = 0;
    char *VAR_6 = FUNC_3(VAR_3);
    if (VAR_6 == ((void*)0))
        return ((void*)0);


    for (unsigned int VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7)
    {
        vlc_keystore_entry *VAR_8 = &VAR_1[VAR_7];
        const char *VAR_9 = VAR_8->ppsz_values[VAR_0];
        if (VAR_9 == ((void*)0))
        {
            if (VAR_4 == ((void*)0))
                VAR_4 = VAR_8;
            continue;
        }
        size_t VAR_10 = FUNC_1(VAR_9);

        if (FUNC_2(VAR_6, VAR_9, VAR_10) == 0
         && VAR_10 > VAR_5)
        {
            VAR_5 = VAR_10;
            VAR_4 = VAR_8;
        }
    }
    FUNC_0(VAR_6);
    return VAR_4;
}
