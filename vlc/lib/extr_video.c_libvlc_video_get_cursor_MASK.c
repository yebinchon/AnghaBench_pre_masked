
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int libvlc_media_player_t ;


 int * FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,char*,int*,int*) ;
 int FUNC_2 (int *) ;

int FUNC_3( libvlc_media_player_t *VAR_0, unsigned VAR_1,
                             int *restrict VAR_2, int *restrict VAR_3 )
{
    vout_thread_t *VAR_4 = FUNC_0 (VAR_0, VAR_1);
    if (VAR_4 == ((void*)0))
        return -1;

    FUNC_1 (VAR_4, "mouse-moved", VAR_2, VAR_3);
    FUNC_2(VAR_4);
    return 0;
}
