
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_va_surface_t ;
struct TYPE_4__ {scalar_t__ surface_count; } ;
typedef TYPE_1__ va_pool_t ;


 int * FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

vlc_va_surface_t *FUNC_2(va_pool_t *VAR_2)
{
    unsigned VAR_3 = VAR_0;
    vlc_va_surface_t *VAR_4;

    if (VAR_2->surface_count == 0)
        return ((void*)0);

    while ((VAR_4 = FUNC_0(VAR_2)) == ((void*)0))
    {
        if (--VAR_3 == 0)
            return ((void*)0);


        FUNC_1(VAR_1);
    }
    return VAR_4;
}
