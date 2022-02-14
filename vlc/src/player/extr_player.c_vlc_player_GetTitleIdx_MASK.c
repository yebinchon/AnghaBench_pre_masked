
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_player_t ;
struct vlc_player_title {int dummy; } ;
struct vlc_player_input {TYPE_1__* titles; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {size_t count; struct vlc_player_title const* array; } ;


 struct vlc_player_input* FUNC_0 (int *) ;

__attribute__((used)) static ssize_t
FUNC_1(vlc_player_t *VAR_0,
                       const struct vlc_player_title *VAR_1)
{
    struct vlc_player_input *VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 && VAR_2->titles)
        for (size_t VAR_3 = 0; VAR_3 < VAR_2->titles->count; ++VAR_3)
            if (&VAR_2->titles->array[VAR_3] == VAR_1)
                return VAR_3;
    return -1;
}
