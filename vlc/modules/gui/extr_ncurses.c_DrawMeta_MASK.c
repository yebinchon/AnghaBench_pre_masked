
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_9__ {scalar_t__ color; int playlist; } ;
typedef TYPE_2__ intf_sys_t ;
struct TYPE_10__ {int lock; int p_meta; } ;
typedef TYPE_3__ input_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*,char const*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 char* FUNC_3 (int ,int) ;
 char const* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(intf_thread_t *VAR_3)
{
    intf_sys_t *VAR_4 = VAR_3->p_sys;
    int VAR_5 = 0;

    vlc_player_t *VAR_6 = FUNC_10(VAR_4->playlist);
    FUNC_8(VAR_6);
    input_item_t *VAR_7 = FUNC_7(VAR_6);
    FUNC_9(VAR_6);
    if (!VAR_7)
        return 0;

    FUNC_5(&VAR_7->lock);
    for (int VAR_8=0; VAR_8<VAR_2; VAR_8++) {
        const char *VAR_9 = FUNC_3(VAR_7->p_meta, VAR_8);
        if (!VAR_9 || !*VAR_9)
            continue;

        if (VAR_4->color) FUNC_1(VAR_0, ((void*)0));
        FUNC_0(VAR_4, VAR_5++, "  [%s]", FUNC_4(VAR_8));
        if (VAR_4->color) FUNC_1(VAR_1, ((void*)0));
        FUNC_0(VAR_4, VAR_5++, "      %s", VAR_9);
    }
    FUNC_6(&VAR_7->lock);

    FUNC_2(VAR_7);

    return VAR_5;
}
