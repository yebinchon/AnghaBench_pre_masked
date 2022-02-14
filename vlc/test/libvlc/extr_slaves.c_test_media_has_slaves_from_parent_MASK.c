
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_t ;
typedef int libvlc_media_slave_t ;
typedef int libvlc_media_list_t ;
typedef int libvlc_instance_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (int *,char const*) ;
 int FUNC_13 (char*,...) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (int *,int *,unsigned int) ;

__attribute__((used)) static void
FUNC_16(libvlc_instance_t *VAR_1,
                                  const char *VAR_2,
                                  libvlc_media_slave_t *VAR_3,
                                  unsigned VAR_4)
{
    libvlc_media_t *VAR_5 = FUNC_8(VAR_1, VAR_0);
    FUNC_0(VAR_5 != ((void*)0));

    FUNC_13("Parse media dir to get subitems\n");
    FUNC_11(VAR_5);

    char *VAR_6 = FUNC_12(VAR_1, VAR_2);
    FUNC_0(VAR_6 != ((void*)0));
    FUNC_13("Main media mrl: '%s'\n", VAR_6);

    FUNC_13("Fetch main media from subitems\n");
    libvlc_media_list_t *VAR_7 = FUNC_10(VAR_5);
    FUNC_0(VAR_7 != ((void*)0));
    FUNC_5(VAR_7);
    int VAR_8 = FUNC_3(VAR_7);
    FUNC_0(VAR_8 > 0);
    libvlc_media_t *VAR_9 = ((void*)0);
    for (int VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10)
    {
        VAR_9 = FUNC_4(VAR_7, VAR_10);
        FUNC_0(VAR_9 != ((void*)0));
        char *VAR_11 = FUNC_2(VAR_9);
        FUNC_0(VAR_11 != ((void*)0));
        if (FUNC_14(VAR_6, VAR_11) == 0)
        {
            FUNC_13("Found main media\n");
            FUNC_1(VAR_11);
            break;
        }
        FUNC_1(VAR_11);
        FUNC_9(VAR_9);
        VAR_9 = ((void*)0);
    }
    FUNC_1(VAR_6);
    FUNC_7(VAR_7);
    FUNC_6(VAR_7);

    FUNC_0(VAR_9 != ((void*)0));
    FUNC_15(VAR_9, VAR_3, VAR_4);
    FUNC_9(VAR_9);

    FUNC_9(VAR_5);
}
