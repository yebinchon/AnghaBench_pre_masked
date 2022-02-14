
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_sem_t ;
typedef int libvlc_media_player_t ;
typedef int libvlc_event_manager_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(libvlc_media_player_t *VAR_2)
{
    libvlc_event_manager_t *VAR_3 = FUNC_3(VAR_2);

    vlc_sem_t VAR_4;
    FUNC_7(&VAR_4, 0);

    int VAR_5;
    VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_1, &VAR_4);
    FUNC_0(!VAR_5);

    FUNC_4(VAR_2);

    FUNC_5("Waiting for playing\n");
    FUNC_8(&VAR_4);

    FUNC_2(VAR_3, VAR_0, VAR_1, &VAR_4);

    FUNC_6(&VAR_4);
}
