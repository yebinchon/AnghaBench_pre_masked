
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int refcount; } ;
typedef TYPE_1__ vlc_va_surface_t ;
struct TYPE_7__ {unsigned int surface_count; TYPE_1__* surface; } ;
typedef TYPE_2__ va_pool_t ;


 scalar_t__ FUNC_0 (int *,uintptr_t*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static vlc_va_surface_t *FUNC_3(va_pool_t *VAR_0)
{
    for (unsigned VAR_1 = 0; VAR_1 < VAR_0->surface_count; VAR_1++) {
        vlc_va_surface_t *VAR_2 = &VAR_0->surface[VAR_1];
        uintptr_t VAR_3 = 1;

        if (FUNC_0(&VAR_2->refcount, &VAR_3, 2))
        {

            FUNC_1(&VAR_2->refcount, 1);
            FUNC_2(VAR_2);
            return VAR_2;
        }
    }
    return ((void*)0);
}
