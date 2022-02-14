
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vlc_va_t ;
struct TYPE_8__ {scalar_t__* hw_surface; int va_pool; } ;
typedef TYPE_2__ vlc_va_sys_t ;
typedef int vlc_va_surface_t ;
typedef int uint8_t ;
struct TYPE_9__ {int * context; } ;
typedef TYPE_3__ picture_t ;


 int * FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(vlc_va_t *VAR_2, picture_t *VAR_3, uint8_t **VAR_4)
{
    vlc_va_sys_t *VAR_5 = VAR_2->sys;
    vlc_va_surface_t *VAR_6 = FUNC_2(VAR_5->va_pool);
    if (FUNC_1(VAR_6 == ((void*)0)))
        return VAR_0;
    VAR_3->context = FUNC_0(VAR_2, VAR_6);
    if (FUNC_1(VAR_3->context == ((void*)0)))
    {
        FUNC_4(VAR_6);
        return VAR_0;
    }
    *VAR_4 = (uint8_t*)VAR_5->hw_surface[FUNC_3(VAR_6)];
    return VAR_1;
}
