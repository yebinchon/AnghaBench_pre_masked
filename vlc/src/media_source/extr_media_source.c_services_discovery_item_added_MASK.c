
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int root; } ;
typedef TYPE_2__ vlc_media_tree_t ;
struct TYPE_19__ {TYPE_2__* tree; } ;
typedef TYPE_3__ vlc_media_source_t ;
struct TYPE_17__ {TYPE_3__* sys; } ;
struct TYPE_20__ {TYPE_1__ owner; } ;
typedef TYPE_4__ services_discovery_t ;
struct TYPE_21__ {char* psz_name; } ;
typedef TYPE_5__ input_item_t ;
typedef int input_item_node_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,char*,char*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int * FUNC_5 (TYPE_2__*,int *,TYPE_5__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_5__*,int **,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(services_discovery_t *VAR_0,
                              input_item_t *VAR_1, input_item_t *VAR_2,
                              const char *VAR_3)
{
    FUNC_1(!VAR_1 || !VAR_3);
    FUNC_0(VAR_3);

    vlc_media_source_t *VAR_4 = VAR_0->owner.sys;
    vlc_media_tree_t *VAR_5 = VAR_4->tree;

    FUNC_2(VAR_0, "adding: %s", VAR_2->psz_name ? VAR_2->psz_name : "(null)");

    FUNC_7(VAR_5);

    input_item_node_t *VAR_6;
    if (VAR_1)
        FUNC_6(VAR_5, VAR_1, &VAR_6, ((void*)0));
    else
        VAR_6 = &VAR_5->root;

    bool VAR_7 = FUNC_5(VAR_5, VAR_6, VAR_2) != ((void*)0);
    if (FUNC_4(!VAR_7))
        FUNC_3(VAR_0, "could not allocate media tree node");

    FUNC_8(VAR_5);
}
