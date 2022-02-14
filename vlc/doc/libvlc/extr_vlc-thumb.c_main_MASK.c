
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_condattr_t ;
typedef int libvlc_media_t ;
typedef int libvlc_media_player_t ;
typedef int libvlc_instance_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char const**,char const**,char**,char**,int*) ;
 int * FUNC_2 () ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *,char const*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int *,int,char*) ;
 int VAR_2 ;

int FUNC_20(int VAR_3, const char **VAR_4)
{
    const char *VAR_5;
    char *VAR_6, *VAR_7;
    int VAR_8;
    pthread_condattr_t VAR_9;
    libvlc_instance_t *VAR_10;
    libvlc_media_player_t *VAR_11;
    libvlc_media_t *VAR_12;


    FUNC_18(VAR_1, "");

    FUNC_1(VAR_3, VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8);

    FUNC_14(&VAR_9);
    FUNC_15(&VAR_9, VAR_0);
    FUNC_12(&VAR_2, &VAR_9);
    FUNC_13(&VAR_9);


    VAR_10 = FUNC_2();
    FUNC_0(VAR_10);

    VAR_12 = FUNC_4(VAR_10, VAR_5);
    FUNC_0(VAR_12);

    VAR_11 = FUNC_5(VAR_12);
    FUNC_0(VAR_11);

    FUNC_6(VAR_11);


    FUNC_17(VAR_11);
    FUNC_19(VAR_11, VAR_8, VAR_7);

    FUNC_8(VAR_11);


    if (VAR_6 != VAR_7) {
        FUNC_16(VAR_7, VAR_6);
        FUNC_3(VAR_7);
    }
    FUNC_3(VAR_6);

    FUNC_7(VAR_11);
    FUNC_9(VAR_12);
    FUNC_10(VAR_10);

    FUNC_11(&VAR_2);

    return 0;
}
