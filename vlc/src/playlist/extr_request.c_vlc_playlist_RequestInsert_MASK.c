
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int input_item_t ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t,int * const*,size_t) ;

int
FUNC_3(vlc_playlist_t *VAR_0, size_t VAR_1,
                           input_item_t *const VAR_2[], size_t VAR_3)
{
    FUNC_0(VAR_0);

    size_t VAR_4 = FUNC_1(VAR_0);
    if (VAR_1 > VAR_4)
        VAR_1 = VAR_4;

    return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
}
