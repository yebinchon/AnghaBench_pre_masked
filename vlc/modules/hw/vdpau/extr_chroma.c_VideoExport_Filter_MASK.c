
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int format; } ;
typedef TYPE_1__ vlc_vdp_yuv_getter_t ;
struct TYPE_17__ {int * context; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_18__ {TYPE_1__* p_sys; } ;
typedef TYPE_3__ filter_t ;


 TYPE_2__* FUNC_0 (TYPE_3__*,TYPE_2__*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,char*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static picture_t *FUNC_5(filter_t *VAR_0, picture_t *VAR_1)
{
    vlc_vdp_yuv_getter_t *VAR_2 = VAR_0->p_sys;

    if (FUNC_4(VAR_1->context == ((void*)0)))
    {
        FUNC_2(VAR_0, "corrupt VDPAU video surface %p", VAR_1);
        FUNC_3(VAR_1);
        return ((void*)0);
    }

    picture_t *VAR_3 = FUNC_1(VAR_0);
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    return FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2->format);
}
