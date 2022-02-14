
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
struct TYPE_5__ {scalar_t__ repeat; scalar_t__ current; TYPE_1__ items; } ;
typedef TYPE_2__ vlc_playlist_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(vlc_playlist_t *VAR_1)
{
    if (VAR_1->repeat == VAR_0)
        return VAR_1->items.size > 0;


    return VAR_1->current < (ssize_t) VAR_1->items.size - 1;
}
