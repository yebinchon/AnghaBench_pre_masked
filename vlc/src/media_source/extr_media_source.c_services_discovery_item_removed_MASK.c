
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_media_tree_t ;
struct TYPE_11__ {int * tree; } ;
typedef TYPE_2__ vlc_media_source_t ;
struct TYPE_10__ {TYPE_2__* sys; } ;
struct TYPE_12__ {TYPE_1__ owner; } ;
typedef TYPE_3__ services_discovery_t ;
struct TYPE_13__ {char* psz_name; } ;
typedef TYPE_4__ input_item_t ;


 int FUNC_0 (TYPE_3__*,char*,char*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(services_discovery_t *VAR_0, input_item_t *VAR_1)
{
    vlc_media_source_t *VAR_2 = VAR_0->owner.sys;
    vlc_media_tree_t *VAR_3 = VAR_2->tree;

    FUNC_0(VAR_0, "removing: %s", VAR_1->psz_name ? VAR_1->psz_name : "(null)");

    FUNC_3(VAR_3);
    bool VAR_4 = FUNC_4(VAR_3, VAR_1);
    FUNC_5(VAR_3);

    if (FUNC_2(!VAR_4))
    {
        FUNC_1(VAR_0, "removing item not added");
        return;
    }
}
