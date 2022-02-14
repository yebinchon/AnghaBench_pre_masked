
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t modc; int modv; } ;
typedef TYPE_1__ vlc_modcap_t ;
typedef int ssize_t ;
typedef int module_t ;
struct TYPE_4__ {int caps_tree; } ;


 int FUNC_0 (int **,int ,int) ;
 TYPE_2__ VAR_0 ;
 void** FUNC_1 (char const**,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int ** FUNC_3 (size_t,int) ;
 int VAR_1 ;

ssize_t FUNC_4 (module_t ***restrict VAR_2, const char *VAR_3)
{
    const void **VAR_4 = FUNC_1(&VAR_3, &VAR_0.caps_tree, VAR_1);
    if (VAR_4 == ((void*)0))
    {
        *VAR_2 = ((void*)0);
        return 0;
    }

    const vlc_modcap_t *VAR_5 = *VAR_4;
    size_t VAR_6 = VAR_5->modc;
    module_t **VAR_7 = FUNC_3 (VAR_6, sizeof (*VAR_7));
    *VAR_2 = VAR_7;
    if (FUNC_2(VAR_7 == ((void*)0)))
        return -1;

    FUNC_0(VAR_7, VAR_5->modv, sizeof (*VAR_7) * VAR_6);
    return VAR_6;
}
