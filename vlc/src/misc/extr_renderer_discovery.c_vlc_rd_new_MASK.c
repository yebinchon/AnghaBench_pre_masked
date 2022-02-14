
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct vlc_renderer_discovery_owner {int dummy; } ;
struct TYPE_7__ {int p_cfg; int psz_name; int * p_module; struct vlc_renderer_discovery_owner owner; } ;
typedef TYPE_1__ vlc_renderer_discovery_t ;
typedef int vlc_object_t ;


 int FUNC_0 (int *,int *,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_1__*,char*,int ,int) ;
 int FUNC_4 (TYPE_1__*,char*,char const*) ;
 TYPE_1__* FUNC_5 (int *,int,char*) ;
 int FUNC_6 (TYPE_1__*) ;

vlc_renderer_discovery_t *
FUNC_7(vlc_object_t *VAR_0, const char *VAR_1,
           const struct vlc_renderer_discovery_owner *restrict VAR_2)
{
    vlc_renderer_discovery_t *VAR_3;

    VAR_3 = FUNC_5(VAR_0, sizeof(*VAR_3), "renderer discovery");
    if(!VAR_3)
        return ((void*)0);
    FUNC_2(FUNC_0(&VAR_3->psz_name, &VAR_3->p_cfg, VAR_1));

    VAR_3->owner = *VAR_2;
    VAR_3->p_module = FUNC_3(VAR_3, "renderer_discovery",
                                 VAR_3->psz_name, 1);
    if (VAR_3->p_module == ((void*)0))
    {
        FUNC_4(VAR_3, "no suitable renderer discovery module for '%s'",
            VAR_1);
        FUNC_2(VAR_3->psz_name);
        FUNC_1(VAR_3->p_cfg);
        FUNC_6(VAR_3);
        VAR_3 = ((void*)0);
    }

    return VAR_3;
}
