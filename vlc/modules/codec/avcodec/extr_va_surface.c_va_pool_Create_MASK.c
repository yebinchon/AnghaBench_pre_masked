
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_va_t ;
struct va_pool_cfg {scalar_t__ (* pf_create_device ) (int *) ;} ;
struct TYPE_4__ {int poolrefs; scalar_t__ surface_count; struct va_pool_cfg callbacks; } ;
typedef TYPE_1__ va_pool_t ;


 int FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

va_pool_t * FUNC_6(vlc_va_t *VAR_0, const struct va_pool_cfg *VAR_1)
{
    va_pool_t *VAR_2 = FUNC_1(sizeof(*VAR_2));
    if (FUNC_5(VAR_2 == ((void*)0)))
        return ((void*)0);

    VAR_2->callbacks = *VAR_1;


    if (VAR_1->pf_create_device(VAR_0)) {
        FUNC_3(VAR_0, "Failed to create device");
        return ((void*)0);
    }
    FUNC_2(VAR_0, "CreateDevice succeed");

    VAR_2->surface_count = 0;
    FUNC_0(&VAR_2->poolrefs, 1);

    return VAR_2;
}
