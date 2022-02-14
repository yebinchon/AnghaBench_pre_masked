
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_renderer_discoverer_t ;
typedef int libvlc_instance_t ;
typedef int libvlc_event_manager_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void
FUNC_9(libvlc_instance_t *VAR_4, const char *VAR_5)
{
    FUNC_8("creating and starting discoverer %s\n", VAR_5);

    libvlc_renderer_discoverer_t *VAR_6 =
        FUNC_4(VAR_4, VAR_5);
    FUNC_0(VAR_6 != ((void*)0));

    libvlc_event_manager_t *VAR_7 = FUNC_3(VAR_6);
    FUNC_0(*VAR_7);

    int VAR_8;
    VAR_8 = FUNC_2(VAR_7, VAR_0,
                                VAR_2, ((void*)0));
    FUNC_0(VAR_8 == 0);
    VAR_8 = FUNC_2(VAR_7, VAR_1,
                                VAR_3, ((void*)0));
    FUNC_0(VAR_8 == 0);

    if (FUNC_6(VAR_6) == -1)
    {
        FUNC_8("warn: could not start md (not critical)\n");
    }
    else
    {
        FUNC_8("Press any keys to stop\n");
        FUNC_1();
        FUNC_7(VAR_6);
    }

    FUNC_5(VAR_6);
}
