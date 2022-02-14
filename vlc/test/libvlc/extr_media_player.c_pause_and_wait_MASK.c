
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_sem_t ;
typedef int libvlc_media_player_t ;
typedef int libvlc_event_manager_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(libvlc_media_player_t *VAR_4)
{
    libvlc_event_manager_t *VAR_5 = FUNC_3(VAR_4);

    vlc_sem_t VAR_6;
    FUNC_8(&VAR_6, 0);

    int VAR_7;
    VAR_7 = FUNC_1(VAR_5, VAR_1, VAR_3, &VAR_6);
    FUNC_0(!VAR_7);
    VAR_7 = FUNC_1(VAR_5, VAR_0, VAR_3, &VAR_6);
    FUNC_0(!VAR_7);

    FUNC_5(VAR_4, 1);


    if (FUNC_4(VAR_4) == VAR_2)
    {
        FUNC_6("Waiting for pause\n");
        FUNC_9(&VAR_6);
    }

    FUNC_7(&VAR_6);
    FUNC_2(VAR_5, VAR_1, VAR_3, &VAR_6);
    FUNC_2(VAR_5, VAR_0, VAR_3, &VAR_6);
}
