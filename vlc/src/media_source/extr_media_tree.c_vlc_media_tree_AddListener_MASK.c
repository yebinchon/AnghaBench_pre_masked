
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_media_tree_t ;
struct TYPE_7__ {int node; void* userdata; struct vlc_media_tree_callbacks const* cbs; } ;
typedef TYPE_1__ vlc_media_tree_listener_id ;
struct vlc_media_tree_callbacks {int dummy; } ;
struct TYPE_8__ {int listeners; } ;
typedef TYPE_2__ media_tree_private_t ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;

vlc_media_tree_listener_id *
FUNC_7(vlc_media_tree_t *VAR_0,
                           const struct vlc_media_tree_callbacks *VAR_1,
                           void *VAR_2, bool VAR_3)
{
    vlc_media_tree_listener_id *VAR_4 = FUNC_0(sizeof(*VAR_4));
    if (FUNC_2(!VAR_4))
        return ((void*)0);
    VAR_4->cbs = VAR_1;
    VAR_4->userdata = VAR_2;

    media_tree_private_t *VAR_5 = FUNC_1(VAR_0);
    FUNC_4(VAR_0);

    FUNC_3(&VAR_4->node, &VAR_5->listeners);

    if (VAR_3)
        FUNC_5(VAR_0, VAR_4);

    FUNC_6(VAR_0);
    return VAR_4;
}
