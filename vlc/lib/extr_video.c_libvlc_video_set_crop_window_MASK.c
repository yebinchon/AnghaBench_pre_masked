
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;

void FUNC_3(libvlc_media_player_t *VAR_0,
                                  unsigned VAR_1, unsigned VAR_2,
                                  unsigned VAR_3, unsigned VAR_4)
{
    char VAR_5[4 * (3 * sizeof (unsigned) + 1)];

    FUNC_0(VAR_3 != 0 && VAR_4 != 0);
    FUNC_2(VAR_5, "%ux%u+%u+%u", VAR_1, VAR_2, VAR_3, VAR_4);
    FUNC_1(VAR_0, VAR_5);
}
