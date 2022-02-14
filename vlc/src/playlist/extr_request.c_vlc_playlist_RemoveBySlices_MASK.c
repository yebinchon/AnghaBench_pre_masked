
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,size_t,size_t) ;

__attribute__((used)) static void
FUNC_2(vlc_playlist_t *VAR_0, size_t VAR_1[],
                            size_t VAR_2)
{
    FUNC_0(VAR_2 > 0);
    size_t VAR_3 = VAR_1[VAR_2 - 1];
    size_t VAR_4 = 1;

    for (size_t VAR_5 = VAR_2 - 1; VAR_5 != 0; --VAR_5)
    {
        size_t VAR_6 = VAR_1[VAR_5 - 1];
        if (VAR_6 == VAR_3 - 1)
            VAR_4++;
        else
        {

            FUNC_1(VAR_0, VAR_3, VAR_4);
            VAR_4 = 1;
        }
        VAR_3 = VAR_6;
    }

    FUNC_1(VAR_0, VAR_3, VAR_4);
}
