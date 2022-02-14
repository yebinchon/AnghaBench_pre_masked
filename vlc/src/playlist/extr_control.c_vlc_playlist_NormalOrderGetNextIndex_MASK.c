
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; } ;
struct TYPE_5__ {int repeat; TYPE_1__ items; int current; } ;
typedef TYPE_2__ vlc_playlist_t ;
typedef int ssize_t ;





 int FUNC_0 () ;

__attribute__((used)) static inline size_t
FUNC_1(vlc_playlist_t *VAR_0)
{
    switch (VAR_0->repeat)
    {
        case 128:
        case 129:
            if (VAR_0->current >= (ssize_t) VAR_0->items.size - 1)
                return -1;
            return VAR_0->current + 1;
        case 130:
                if (VAR_0->items.size == 0)
                    return -1;
            return (VAR_0->current + 1) % VAR_0->items.size;
        default:
            FUNC_0();
    }
}
