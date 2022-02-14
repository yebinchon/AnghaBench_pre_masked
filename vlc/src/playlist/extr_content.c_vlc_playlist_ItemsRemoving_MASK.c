
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; } ;
struct TYPE_5__ {scalar_t__ order; TYPE_1__ items; int randomizer; } ;
typedef TYPE_2__ vlc_playlist_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static void
FUNC_1(vlc_playlist_t *VAR_1, size_t VAR_2, size_t VAR_3)
{
    if (VAR_1->order == VAR_0)
        FUNC_0(&VAR_1->randomizer,
                          &VAR_1->items.data[VAR_2], VAR_3);
}
