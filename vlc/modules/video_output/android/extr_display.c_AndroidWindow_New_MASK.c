
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int * sys; } ;
typedef TYPE_1__ vout_display_t ;
typedef int vout_display_sys_t ;
struct TYPE_13__ {scalar_t__ i_chroma; int orientation; } ;
typedef TYPE_2__ video_format_t ;
typedef enum AWindow_ID { ____Placeholder_AWindow_ID } AWindow_ID ;
struct TYPE_14__ {int id; int b_opaque; int i_android_hal; int i_angle; int i_pic_count; int fmt; } ;
typedef TYPE_3__ android_window ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;



 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int *,TYPE_2__ const*) ;

__attribute__((used)) static android_window *FUNC_6(vout_display_t *VAR_3,
                                         const video_format_t *VAR_4,
                                         enum AWindow_ID VAR_5)
{
    vout_display_sys_t *VAR_6 = VAR_3->sys;
    android_window *VAR_7 = ((void*)0);

    VAR_7 = FUNC_2(1, sizeof(android_window));
    if (!VAR_7)
        goto error;

    VAR_7->id = VAR_5;
    VAR_7->b_opaque = VAR_4->i_chroma == VAR_2;
    if (!VAR_7->b_opaque) {
        VAR_7->i_android_hal = FUNC_1(VAR_4->i_chroma);
        if (VAR_7->i_android_hal == -1)
            goto error;
    }

    switch (VAR_4->orientation)
    {
        case 128:
            VAR_7->i_angle = 90;
            break;
        case 130:
            VAR_7->i_angle = 180;
            break;
        case 129:
            VAR_7->i_angle = 270;
            break;
        default:
            VAR_7->i_angle = 0;
    }
    FUNC_5(&VAR_7->fmt, VAR_4);
    VAR_7->i_pic_count = 1;

    if (FUNC_0(VAR_6, VAR_7) != 0)
    {
        if (VAR_5 == VAR_1)
            FUNC_4(VAR_3, "can't get Video Surface");
        else if (VAR_5 == VAR_0)
            FUNC_4(VAR_3, "can't get Subtitles Surface");
        goto error;
    }

    return VAR_7;
error:
    FUNC_3(VAR_7);
    return ((void*)0);
}
