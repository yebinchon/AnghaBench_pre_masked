
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char*,unsigned int,unsigned int) ;

void FUNC_2(libvlc_media_player_t *VAR_0,
                                 unsigned VAR_1, unsigned VAR_2)
{
    char VAR_3[2 * (3 * sizeof (unsigned) + 1)];

    if (VAR_2 == 0)
        VAR_3[0] = '\0';
    else
        FUNC_1(VAR_3, "%u:%u", VAR_1, VAR_2);

    FUNC_0(VAR_0, VAR_3);
}
