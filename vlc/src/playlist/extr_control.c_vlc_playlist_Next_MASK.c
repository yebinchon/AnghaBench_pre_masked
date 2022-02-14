
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ** data; } ;
struct TYPE_10__ {scalar_t__ order; int player; TYPE_1__ items; int randomizer; } ;
typedef TYPE_2__ vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,int) ;

int
FUNC_10(vlc_playlist_t *VAR_3)
{
    FUNC_5(VAR_3);

    if (!FUNC_6(VAR_3))
        return VAR_0;

    ssize_t VAR_4 = FUNC_7(VAR_3);
    FUNC_2(VAR_4 != -1);

    int VAR_5 = FUNC_9(VAR_3, VAR_4);
    if (VAR_5 != VAR_2)
        return VAR_5;

    if (VAR_3->order == VAR_1)
    {

        vlc_playlist_item_t *VAR_6 = FUNC_3(&VAR_3->randomizer);
        FUNC_2(VAR_6 == VAR_3->items.data[VAR_4]);
        FUNC_0(VAR_6);
    }

    FUNC_8(VAR_3, VAR_4);
    FUNC_4(VAR_3->player, FUNC_1("Next"));
    return VAR_2;
}
