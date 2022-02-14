
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,size_t,size_t,size_t) ;
 size_t FUNC_2 (int *,size_t*,size_t) ;

__attribute__((used)) static void
FUNC_3(vlc_playlist_t *VAR_0, size_t VAR_1[],
                          size_t VAR_2, size_t VAR_3)
{
    FUNC_0(VAR_2 > 0);


    size_t VAR_4;
    for (VAR_4 = VAR_2 - 1; VAR_4 != 0; --VAR_4)
        if (VAR_1[VAR_4 - 1] != VAR_1[VAR_4] - 1)
            break;


    size_t VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_4);


    if (VAR_5 != VAR_3)
        FUNC_1(VAR_0, VAR_5, VAR_2, VAR_3);
}
