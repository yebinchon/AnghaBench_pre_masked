
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
typedef int ssize_t ;


 size_t FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static ssize_t
FUNC_3(vlc_playlist_t *VAR_0, vlc_playlist_item_t *VAR_1,
                           ssize_t VAR_2)
{
    if (VAR_2 != -1 && (size_t) VAR_2 < FUNC_0(VAR_0))
    {
        if (VAR_1 == FUNC_1(VAR_0, VAR_2))

            return VAR_2;
    }


    return FUNC_2(VAR_0, VAR_1);
}
