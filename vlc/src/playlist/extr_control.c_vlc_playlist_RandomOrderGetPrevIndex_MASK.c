
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int randomizer; } ;
typedef TYPE_1__ vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static inline size_t
FUNC_3(vlc_playlist_t *VAR_0)
{
    vlc_playlist_item_t *VAR_1 = FUNC_1(&VAR_0->randomizer);
    FUNC_0(*VAR_1);
    ssize_t VAR_2 = FUNC_2(VAR_0, VAR_1);
    FUNC_0(VAR_2 != -1);
    return (size_t) VAR_2;
}
