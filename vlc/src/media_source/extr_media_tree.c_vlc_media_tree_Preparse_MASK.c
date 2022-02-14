
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int i_preparse_depth; } ;
typedef TYPE_1__ vlc_media_tree_t ;
typedef TYPE_1__ libvlc_int_t ;
typedef TYPE_1__ input_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int,TYPE_1__**,TYPE_1__*,int ,int *) ;

void
FUNC_2(vlc_media_tree_t *VAR_3, libvlc_int_t *VAR_4,
                        input_item_t *VAR_5)
{






    VAR_5->i_preparse_depth = 1;
    FUNC_1(VAR_4, VAR_5, VAR_1 |
                        VAR_0,
                        &VAR_2, VAR_3, 0, ((void*)0));

}
