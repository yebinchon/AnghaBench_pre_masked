
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; } ;
struct TYPE_5__ {int repeat; int current; TYPE_1__ items; } ;
typedef TYPE_2__ vlc_playlist_t ;





 int FUNC_0 () ;

__attribute__((used)) static inline size_t
FUNC_1(vlc_playlist_t *VAR_0)
{
    switch (VAR_0->repeat)
    {
        case 128:
        case 129:
            return VAR_0->current - 1;
        case 130:
            if (VAR_0->current == 0)
                return VAR_0->items.size - 1;
            return VAR_0->current - 1;
        default:
            FUNC_0();
    }
}
