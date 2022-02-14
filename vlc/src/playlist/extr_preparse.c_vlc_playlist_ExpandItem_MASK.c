
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_playlist_t ;
struct TYPE_5__ {int size; int data; } ;
typedef TYPE_1__ media_vector_t ;
typedef int input_item_node_t ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,size_t,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(vlc_playlist_t *VAR_1, size_t VAR_2,
                        input_item_node_t *VAR_3)
{
    FUNC_0(VAR_1);

    media_vector_t VAR_4 = VAR_0;
    FUNC_1(VAR_1, &VAR_4, VAR_3);

    int VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4.data, VAR_4.size);
    FUNC_3(&VAR_4);

    return VAR_5;
}
