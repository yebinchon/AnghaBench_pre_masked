
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int libvlc_media_player_t ;
struct TYPE_7__ {int * p_mi; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(libvlc_media_list_player_t * VAR_0, libvlc_media_player_t * VAR_1)
{
    libvlc_media_player_t *VAR_2;

    FUNC_0(VAR_1 != ((void*)0));
    FUNC_3(VAR_1);

    FUNC_4(VAR_0);
    FUNC_5(VAR_0);
    VAR_2 = VAR_0->p_mi;
    VAR_0->p_mi = VAR_1;
    FUNC_1(VAR_0);
    FUNC_6(VAR_0);

    FUNC_2(VAR_2);
}
