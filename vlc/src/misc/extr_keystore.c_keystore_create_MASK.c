
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int pf_remove; int pf_find; int pf_store; int * p_module; } ;
typedef TYPE_1__ vlc_keystore ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*,char*,char const*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,int,char*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static vlc_keystore *
FUNC_5(vlc_object_t *VAR_0, const char *VAR_1)
{
    vlc_keystore *VAR_2 = FUNC_3(VAR_0, sizeof (*VAR_2),
                                                 "keystore");
    if (FUNC_2(VAR_2 == ((void*)0)))
        return ((void*)0);

    VAR_2->p_module = FUNC_1(VAR_2, "keystore", VAR_1, 1);
    if (VAR_2->p_module == ((void*)0))
    {
        FUNC_4(VAR_2);
        return ((void*)0);
    }
    FUNC_0(VAR_2->pf_store);
    FUNC_0(VAR_2->pf_find);
    FUNC_0(VAR_2->pf_remove);

    return VAR_2;
}
