
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_playlist_t ;
typedef int media_vector_t ;
typedef int input_item_t ;
struct TYPE_3__ {int i_children; int * p_item; struct TYPE_3__** pp_children; } ;
typedef TYPE_1__ input_item_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(vlc_playlist_t *VAR_0,
                             media_vector_t *VAR_1,
                             input_item_node_t *VAR_2)
{
    FUNC_0(VAR_0);
    for (int VAR_3 = 0; VAR_3 < VAR_2->i_children; ++VAR_3)
    {
        input_item_node_t *VAR_4 = VAR_2->pp_children[VAR_3];
        input_item_t *VAR_5 = VAR_4->p_item;
        FUNC_1(VAR_1, VAR_5);
        FUNC_2(VAR_0, VAR_1, VAR_4);
    }
}
