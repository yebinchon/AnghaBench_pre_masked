
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_player_t ;
struct report_media_subitems {int count; int * items; } ;
struct ctx {int dummy; } ;
typedef int input_item_t ;
struct TYPE_5__ {int i_children; TYPE_1__** pp_children; } ;
typedef TYPE_2__ input_item_node_t ;
struct TYPE_4__ {int p_item; } ;


 int FUNC_0 (int ,struct report_media_subitems) ;
 int FUNC_1 (int *) ;
 struct ctx* FUNC_2 (int *,void*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int * FUNC_4 (int,int) ;

__attribute__((used)) static void
FUNC_5(vlc_player_t *VAR_1, input_item_t *VAR_2,
                           input_item_node_t *VAR_3, void *VAR_4)
{
    (void) VAR_2;
    struct ctx *VAR_5 = FUNC_2(VAR_1, VAR_4);

    struct report_media_subitems VAR_6 = {
        .count = VAR_3->i_children,
        .items = FUNC_4(VAR_3->i_children, sizeof(input_item_t)),
    };
    FUNC_1(VAR_6.items);
    for (int VAR_7 = 0; VAR_7 < VAR_3->i_children; ++VAR_7)
        VAR_6.items[VAR_7] = FUNC_3(VAR_3->pp_children[VAR_7]->p_item);
    FUNC_0(VAR_0, VAR_6);
}
