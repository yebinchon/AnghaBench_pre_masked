
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int *,char*,int ) ;

int FUNC_2(libvlc_media_player_t *VAR_2, unsigned VAR_3)
{
    if (VAR_3 >= FUNC_0(VAR_1)
     || FUNC_1(VAR_2, "role", VAR_1[VAR_3]) != VAR_0)
        return -1;
    return 0;
}
