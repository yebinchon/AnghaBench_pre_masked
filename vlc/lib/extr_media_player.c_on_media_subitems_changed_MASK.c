
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_3__ {TYPE_2__* p_md; } ;
typedef TYPE_1__ libvlc_media_player_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;
struct TYPE_4__ {int * p_input_item; } ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_1(vlc_player_t *VAR_0, input_item_t *VAR_1,
                          input_item_node_t *VAR_2, void *VAR_3)
{
    (void) VAR_0;

    libvlc_media_player_t *VAR_4 = VAR_3;

    input_item_t *VAR_5 = VAR_4->p_md ? VAR_4->p_md->p_input_item : ((void*)0);
    if (VAR_1 == VAR_5)
        FUNC_0(VAR_4->p_md, VAR_2);
}
