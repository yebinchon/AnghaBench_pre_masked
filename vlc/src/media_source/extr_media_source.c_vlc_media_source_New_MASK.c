
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int description; int tree; } ;
typedef TYPE_1__ vlc_media_source_t ;
typedef int vlc_media_source_provider_t ;
struct services_discovery_owner_t {TYPE_1__* sys; int * cbs; } ;
struct TYPE_8__ {int * owner; TYPE_3__* sd; int name; TYPE_1__ public_data; int rc; } ;
typedef TYPE_2__ media_source_private_t ;
struct TYPE_9__ {int description; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int *,char const*,struct services_discovery_owner_t*) ;

__attribute__((used)) static vlc_media_source_t *
FUNC_9(vlc_media_source_provider_t *VAR_1, const char *VAR_2)
{
    media_source_private_t *VAR_3 = FUNC_1(sizeof(*VAR_3) + FUNC_3(VAR_2) + 1);
    if (FUNC_4(!VAR_3))
        return ((void*)0);

    FUNC_5(&VAR_3->rc);

    vlc_media_source_t *VAR_4 = &VAR_3->public_data;



    VAR_4->tree = FUNC_6();
    if (FUNC_4(!VAR_4->tree))
    {
        FUNC_0(VAR_3);
        return ((void*)0);
    }

    FUNC_2(VAR_3->name, VAR_2);

    struct services_discovery_owner_t VAR_5 = {
        .cbs = &VAR_0,
        .sys = VAR_4,
    };

    VAR_3->sd = FUNC_8(VAR_1, VAR_2, &VAR_5);
    if (FUNC_4(!VAR_3->sd))
    {
        FUNC_7(VAR_4->tree);
        FUNC_0(VAR_3);
        return ((void*)0);
    }


    VAR_4->description = VAR_3->sd->description;

    VAR_3->owner = VAR_1;

    return VAR_4;
}
