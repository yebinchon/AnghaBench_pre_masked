
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_list_t ;
typedef int libvlc_media_discoverer_t ;
typedef int libvlc_instance_t ;
typedef int libvlc_event_manager_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static void
FUNC_13(libvlc_instance_t *VAR_4, const char *VAR_5, bool VAR_6)
{
    FUNC_12("creating and starting discoverer %s\n", VAR_5);

    libvlc_media_discoverer_t *VAR_7 =
        FUNC_6(VAR_4, VAR_5);
    FUNC_0(VAR_7 != ((void*)0));

    libvlc_media_list_t *VAR_8 = FUNC_5(VAR_7);
    FUNC_0(VAR_8 != ((void*)0));

    libvlc_event_manager_t *VAR_9 = FUNC_10(VAR_8);
    FUNC_0(*VAR_9);

    int VAR_10;
    VAR_10 = FUNC_2(VAR_9, VAR_0,
                                VAR_2, ((void*)0));
    FUNC_0(VAR_10 == 0);
    VAR_10 = FUNC_2(VAR_9, VAR_1,
                                VAR_3, ((void*)0));
    FUNC_0(VAR_10 == 0);

    if (FUNC_8(VAR_7) == -1)
    {
        FUNC_12("warn: could not start md (not critical)\n");
    }
    else
    {
        FUNC_0(FUNC_4(VAR_7));
        if (VAR_6)
        {
            FUNC_12("Press any keys to stop\n");
            FUNC_1();
        }
        FUNC_9(VAR_7);
    }

    FUNC_3(VAR_9, VAR_0,
                        VAR_2, ((void*)0));
    FUNC_3(VAR_9, VAR_1,
                        VAR_3, ((void*)0));

    FUNC_11(VAR_8);
    FUNC_7(VAR_7);
}
