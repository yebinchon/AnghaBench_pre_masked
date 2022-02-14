
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_playlist_sort_criterion {int key; } ;
struct vlc_playlist_item_meta {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct vlc_playlist_item_meta*) ;
 int FUNC_2 (struct vlc_playlist_item_meta*,int ) ;

__attribute__((used)) static int
FUNC_3(struct vlc_playlist_item_meta *VAR_1,
        const struct vlc_playlist_sort_criterion VAR_2[], size_t VAR_3)
{
    for (size_t VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
    {
        const struct vlc_playlist_sort_criterion *VAR_5 = &VAR_2[VAR_4];
        int VAR_6 = FUNC_2(VAR_1, VAR_5->key);
        if (FUNC_0(VAR_6 != VAR_0))
        {
            FUNC_1(VAR_1);
            return VAR_6;
        }
    }
    return VAR_0;
}
