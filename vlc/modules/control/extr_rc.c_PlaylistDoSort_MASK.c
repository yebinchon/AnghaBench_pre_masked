
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
struct vlc_playlist_sort_criterion {int order; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct vlc_playlist_sort_criterion*,int) ;

__attribute__((used)) static int FUNC_1(vlc_playlist_t *VAR_2)
{
    struct vlc_playlist_sort_criterion VAR_3 =
    {
        .key = VAR_0,
        .order = VAR_1
    };

    return FUNC_0(VAR_2, &VAR_3, 1);
}
