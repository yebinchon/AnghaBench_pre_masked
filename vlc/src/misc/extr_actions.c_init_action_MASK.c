
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int vlc_action_id_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (void**,scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,char*) ;
 char* FUNC_3 (char*,char*,char**) ;
 char* FUNC_4 (int *,char const*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6 (vlc_object_t *VAR_2, void **VAR_3,
                            const char *VAR_4, vlc_action_id_t VAR_5)
{
    char *VAR_6 = FUNC_4 (VAR_2, VAR_4);
    if (VAR_6 == ((void*)0))
        return;

    for (char *VAR_7, *VAR_8 = FUNC_3 (VAR_6, "\t", &VAR_7);
         VAR_8 != ((void*)0);
         VAR_8 = FUNC_3 (((void*)0), "\t", &VAR_7))
    {
        uint32_t VAR_9 = FUNC_5 (VAR_8);
        if (VAR_9 == VAR_1)
        {
            FUNC_2 (VAR_2, "Key \"%s\" unrecognized", VAR_8);
            continue;
        }

        if (FUNC_0 (VAR_3, VAR_9, VAR_5) == VAR_0)
            FUNC_2 (VAR_2, "Key \"%s\" bound to multiple actions", VAR_8);
    }
    FUNC_1 (VAR_6);
}
