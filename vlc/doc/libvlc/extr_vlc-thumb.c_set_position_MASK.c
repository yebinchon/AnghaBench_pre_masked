
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;
typedef int libvlc_event_manager_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(libvlc_media_player_t *VAR_4)
{
    libvlc_event_manager_t *VAR_5 = FUNC_4(VAR_4);
    FUNC_0(VAR_5);

    FUNC_2(VAR_5, VAR_3, VAR_1, ((void*)0));
    VAR_2 = 0;
    FUNC_5(VAR_4, VAR_0);
    FUNC_1("Couldn't set position");
    FUNC_3(VAR_5, VAR_3, VAR_1, ((void*)0));
}
