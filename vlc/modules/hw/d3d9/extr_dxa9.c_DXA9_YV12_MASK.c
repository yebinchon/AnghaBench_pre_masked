
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_20__ {scalar_t__ i_chroma; scalar_t__ i_visible_height; scalar_t__ i_y_offset; int i_height; } ;
struct TYPE_21__ {TYPE_1__ format; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_22__ {int surface; } ;
typedef TYPE_3__ picture_sys_d3d9_t ;
struct TYPE_23__ {scalar_t__ p_sys; } ;
typedef TYPE_4__ filter_t ;
typedef int copy_cache_t ;
struct TYPE_25__ {int Pitch; int const* pBits; } ;
struct TYPE_24__ {scalar_t__ Format; size_t const Height; } ;
typedef TYPE_5__ D3DSURFACE_DESC ;
typedef TYPE_6__ D3DLOCKED_RECT ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int const**,size_t const*,int ,int,int *) ;
 int FUNC_2 (TYPE_2__*,int const**,size_t const*,int ,int *) ;
 int FUNC_3 (TYPE_2__*,int const**,size_t const*,int ,int *) ;
 int FUNC_4 (TYPE_4__*,int ,TYPE_6__*,TYPE_5__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char,char,char,char) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (TYPE_4__*,char*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_10(filter_t *VAR_2, picture_t *VAR_3, picture_t *VAR_4)
{
    copy_cache_t *VAR_5 = (copy_cache_t*) VAR_2->p_sys;
    picture_sys_d3d9_t *VAR_6 = FUNC_0(VAR_3);

    D3DSURFACE_DESC VAR_7;
    D3DLOCKED_RECT VAR_8;
    if (!FUNC_4(VAR_2, VAR_6->surface, &VAR_8, &VAR_7))
        return;

    if (VAR_7.Format == FUNC_6('Y','V','1','2') ||
        VAR_7.Format == FUNC_6('I','M','C','3')) {

        if (VAR_4->format.i_chroma == VAR_0)
            FUNC_9( VAR_4 );

        bool VAR_9 = VAR_7.Format == FUNC_6('I','M','C','3');
        size_t VAR_10 = VAR_9 ? VAR_8.Pitch : (VAR_8.Pitch / 2);

        const size_t VAR_11[3] = {
            VAR_8.Pitch,
            VAR_10,
            VAR_10,
        };

        const uint8_t *VAR_12[3] = {
            (uint8_t*)VAR_8.pBits,
            (uint8_t*)VAR_8.pBits + VAR_11[0] * VAR_7.Height,
            (uint8_t*)VAR_8.pBits + VAR_11[0] * VAR_7.Height
                                 + VAR_11[1] * VAR_7.Height / 2,
        };

        if (VAR_9) {
            const uint8_t *VAR_13 = VAR_12[1];
            VAR_12[1] = VAR_12[2];
            VAR_12[2] = VAR_13;
        }
        FUNC_2(VAR_4, VAR_12, VAR_11, VAR_3->format.i_height, VAR_5);

        if (VAR_4->format.i_chroma == VAR_0)
            FUNC_9( VAR_4 );
    } else if (VAR_7.Format == FUNC_6('N','V','1','2')
            || VAR_7.Format == FUNC_6('P','0','1','0')) {
        const uint8_t *VAR_14[2] = {
            VAR_8.pBits,
            (uint8_t*)VAR_8.pBits + VAR_8.Pitch * VAR_7.Height
        };
        const size_t VAR_15[2] = {
            VAR_8.Pitch,
            VAR_8.Pitch,
        };
        if (VAR_7.Format == FUNC_6('N','V','1','2'))
            FUNC_3(VAR_4, VAR_14, VAR_15,
                            FUNC_7(VAR_7.Height, VAR_3->format.i_y_offset + VAR_3->format.i_visible_height),
                            VAR_5);
        else
            FUNC_1(VAR_4, VAR_14, VAR_15,
                              FUNC_7(VAR_7.Height, VAR_3->format.i_y_offset + VAR_3->format.i_visible_height),
                              6, VAR_5);

        if (VAR_4->format.i_chroma != VAR_0 && VAR_4->format.i_chroma != VAR_1)
            FUNC_9(VAR_4);
    } else {
        FUNC_8(VAR_2, "Unsupported DXA9 conversion from 0x%08X to YV12", VAR_7.Format);
    }


    FUNC_5(VAR_6->surface);
}
