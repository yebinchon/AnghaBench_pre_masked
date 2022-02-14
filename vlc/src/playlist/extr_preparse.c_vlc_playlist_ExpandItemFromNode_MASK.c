
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_playlist_t ;
typedef int ssize_t ;
typedef int input_item_t ;
struct TYPE_4__ {int * p_item; } ;
typedef TYPE_1__ input_item_node_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;

int
FUNC_3(vlc_playlist_t *VAR_1,
                                input_item_node_t *VAR_2)
{
    FUNC_0(VAR_1);
    input_item_t *VAR_3 = VAR_2->p_item;
    ssize_t VAR_4 = FUNC_2(VAR_1, VAR_3);
    if (VAR_4 == -1)
        return VAR_0;


    return FUNC_1(VAR_1, VAR_4, VAR_2);
}
