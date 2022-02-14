
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_15__ {TYPE_4__* sys; } ;
typedef TYPE_3__ vlc_va_t ;
struct TYPE_16__ {int va_pool; int device; int devmng; } ;
typedef TYPE_4__ vlc_va_sys_t ;
typedef int vlc_va_surface_t ;
typedef int uint8_t ;
struct TYPE_17__ {int * context; } ;
typedef TYPE_5__ picture_t ;
struct TYPE_13__ {scalar_t__ surface; } ;
struct TYPE_14__ {TYPE_1__ picsys; } ;
struct TYPE_12__ {TYPE_2__ ctx; } ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 TYPE_11__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int * FUNC_3 (TYPE_3__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(vlc_va_t *VAR_4, picture_t *VAR_5, uint8_t **VAR_6)
{
    vlc_va_sys_t *VAR_7 = VAR_4->sys;


    HRESULT VAR_8 = FUNC_2(VAR_7->devmng, VAR_7->device);
    if (FUNC_1(VAR_8)) {
        if (VAR_8 == VAR_0)
            FUNC_5(VAR_4, "New video device detected.");
        else
            FUNC_4(VAR_4, "device not usable. (hr=0x%lX)", VAR_8);
        return VAR_1;
    }

    vlc_va_surface_t *VAR_9 = FUNC_7(VAR_7->va_pool);
    if (FUNC_6(VAR_9==((void*)0)))
        return VAR_2;

    VAR_5->context = FUNC_3(VAR_4, VAR_9);
    if (FUNC_6(VAR_5->context == ((void*)0)))
    {
        FUNC_8(VAR_9);
        return VAR_2;
    }
    *VAR_6 = (uint8_t*)FUNC_0(VAR_5->context)->ctx.picsys.surface;
    return VAR_3;
}
