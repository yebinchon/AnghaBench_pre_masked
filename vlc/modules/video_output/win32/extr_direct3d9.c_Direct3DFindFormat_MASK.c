
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_13__ {scalar_t__ allow_hw_yuv; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_14__ {int i_visible_width; int i_visible_height; scalar_t__ const i_chroma; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_15__ {scalar_t__ const fourcc; scalar_t__ name; int format; } ;
typedef TYPE_4__ d3d9_format_t ;
typedef int D3DFORMAT ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_4__* VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__ const) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 scalar_t__* FUNC_4 (scalar_t__ const) ;
 scalar_t__* FUNC_5 (scalar_t__ const) ;
 scalar_t__ FUNC_6 (scalar_t__ const) ;

__attribute__((used)) static const d3d9_format_t *FUNC_7(vout_display_t *VAR_1, const video_format_t *VAR_2, D3DFORMAT VAR_3)
{
    vout_display_sys_t *VAR_4 = VAR_1->sys;
    bool VAR_5 = !(VAR_2->i_visible_width & 1) && !(VAR_2->i_visible_height & 1);
    if( !VAR_5 )
        FUNC_3( VAR_1, "Disabling hardware chroma conversion due to odd dimensions" );

    for (unsigned VAR_6 = 0; VAR_6 < 2; VAR_6++) {
        const vlc_fourcc_t *VAR_7;
        const vlc_fourcc_t VAR_8[] = {VAR_2->i_chroma, 0};

        if (VAR_6 == 0 && FUNC_1(VAR_2->i_chroma))
            VAR_7 = VAR_8;
        else if (VAR_6 == 0 && VAR_5 && VAR_4->allow_hw_yuv && FUNC_6(VAR_2->i_chroma))
            VAR_7 = FUNC_5(VAR_2->i_chroma);
        else if (VAR_6 == 1)
            VAR_7 = FUNC_4(VAR_2->i_chroma);
        else
            continue;

        for (unsigned VAR_9 = 0; VAR_7[VAR_9] != 0; VAR_9++) {
            for (unsigned VAR_10 = 0; VAR_0[VAR_10].name; VAR_10++) {
                const d3d9_format_t *VAR_11 = &VAR_0[VAR_10];

                if (VAR_11->fourcc != VAR_7[VAR_9])
                    continue;

                FUNC_3(VAR_1, "trying surface pixel format: %s",
                         VAR_11->name);
                if (!FUNC_0(VAR_1, VAR_11->format, VAR_3)) {
                    FUNC_2(VAR_1, "selected surface pixel format is %s",
                            VAR_11->name);
                    return VAR_11;
                }
            }
        }
    }
    return ((void*)0);
}
