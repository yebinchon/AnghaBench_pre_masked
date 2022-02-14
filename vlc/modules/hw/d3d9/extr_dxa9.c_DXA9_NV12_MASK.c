
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_17__ {scalar_t__ i_visible_height; scalar_t__ i_y_offset; } ;
struct TYPE_18__ {TYPE_1__ format; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_19__ {int surface; } ;
typedef TYPE_3__ picture_sys_d3d9_t ;
struct TYPE_20__ {scalar_t__ p_sys; } ;
typedef TYPE_4__ filter_t ;
typedef int copy_cache_t ;
struct TYPE_22__ {int Pitch; int const* pBits; } ;
struct TYPE_21__ {scalar_t__ Format; int Height; } ;
typedef TYPE_5__ D3DSURFACE_DESC ;
typedef TYPE_6__ D3DLOCKED_RECT ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int const**,size_t*,int ,int *) ;
 int FUNC_2 (TYPE_4__*,int ,TYPE_6__*,TYPE_5__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char,char,char,char) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (TYPE_4__*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(filter_t *VAR_0, picture_t *VAR_1, picture_t *VAR_2)
{
    copy_cache_t *VAR_3 = (copy_cache_t*) VAR_0->p_sys;
    picture_sys_d3d9_t *VAR_4 = FUNC_0(VAR_1);

    D3DSURFACE_DESC VAR_5;
    D3DLOCKED_RECT VAR_6;
    if (!FUNC_2(VAR_0, VAR_4->surface, &VAR_6, &VAR_5))
        return;

    if (VAR_5.Format == FUNC_4('N','V','1','2')
     || VAR_5.Format == FUNC_4('P','0','1','0')) {
        const uint8_t *VAR_7[2] = {
            VAR_6.pBits,
            (uint8_t*)VAR_6.pBits + VAR_6.Pitch * VAR_5.Height
        };
        size_t VAR_8[2] = {
            VAR_6.Pitch,
            VAR_6.Pitch,
        };
        FUNC_1(VAR_2, VAR_7, VAR_8,
                         FUNC_5(VAR_5.Height, VAR_1->format.i_y_offset + VAR_1->format.i_visible_height),
                         VAR_3);
    } else {
        FUNC_6(VAR_0, "Unsupported DXA9 conversion from 0x%08X to NV12", VAR_5.Format);
    }


    FUNC_3(VAR_4->surface);
}
