
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_playlist_sort_criterion {scalar_t__ order; int key; } ;
struct vlc_playlist_item_meta {int dummy; } ;
struct sort_request {size_t count; struct vlc_playlist_sort_criterion* criteria; } ;


 int FUNC_0 (struct vlc_playlist_item_meta const*,struct vlc_playlist_item_meta const*,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(const void *VAR_1, const void *VAR_2, void *VAR_3)
{
    struct sort_request *VAR_4 = VAR_3;
    const struct vlc_playlist_item_meta *VAR_5 =
            *(const struct vlc_playlist_item_meta **) VAR_1;
    const struct vlc_playlist_item_meta *VAR_6 =
            *(const struct vlc_playlist_item_meta **) VAR_2;

    for (size_t VAR_7 = 0; VAR_7 < VAR_4->count; ++VAR_7)
    {
        const struct vlc_playlist_sort_criterion *VAR_8 = &VAR_4->criteria[VAR_7];
        int VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_8->key);
        if (VAR_9)
        {
            if (VAR_8->order == VAR_0)

                return VAR_9 > 0 ? -1 : 1;
            return VAR_9;
        }
    }
    return 0;
}
