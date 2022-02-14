
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ repeat; int current; } ;
typedef TYPE_1__ vlc_playlist_t ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static ssize_t
FUNC_3(vlc_playlist_t *VAR_1)
{
    FUNC_0(VAR_1);
    if (VAR_1->repeat == VAR_0)
        return VAR_1->current;
    if (!FUNC_1(VAR_1))
        return -1;
    return FUNC_2(VAR_1);
}
