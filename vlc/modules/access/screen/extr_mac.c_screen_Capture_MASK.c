
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_25__ {scalar_t__ height; int width; } ;
struct TYPE_24__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_30__ {TYPE_4__ size; TYPE_3__ origin; } ;
struct TYPE_26__ {int offscreen_bitmap_size; int * offscreen_bitmap; scalar_t__ offscreen_context; TYPE_9__ offscreen_rect; int display_id; scalar_t__ height; int width; scalar_t__ screen_top; scalar_t__ screen_left; } ;
typedef TYPE_5__ screen_data_t ;
struct TYPE_27__ {TYPE_7__* p_sys; } ;
typedef TYPE_6__ demux_t ;
struct TYPE_22__ {int i_width; int i_height; } ;
struct TYPE_23__ {TYPE_1__ video; } ;
struct TYPE_28__ {scalar_t__ i_top; scalar_t__ i_left; TYPE_2__ fmt; scalar_t__ b_follow_mouse; scalar_t__ p_data; } ;
typedef TYPE_7__ demux_sys_t ;
struct TYPE_29__ {int p_buffer; } ;
typedef TYPE_8__ block_t ;
struct TYPE_21__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_9__ CGRect ;
typedef TYPE_10__ CGPoint ;
typedef int CGImageRef ;
typedef int CGEventRef ;
typedef int CGColorSpaceRef ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int,int,int,int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,TYPE_9__,int ) ;
 int FUNC_5 (int ,TYPE_9__) ;
 int FUNC_6 (int *) ;
 TYPE_10__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 TYPE_9__ FUNC_10 (int ,int ,int,int) ;
 int FUNC_11 (int,char*,TYPE_10__*) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_7__*,scalar_t__,scalar_t__) ;
 TYPE_8__* FUNC_14 (int) ;
 int * FUNC_15 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_16 (int ,int *,int) ;
 int FUNC_17 (TYPE_6__*,char*) ;

block_t *FUNC_18(demux_t *VAR_3)
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;
    screen_data_t *VAR_5 = (screen_data_t *)VAR_4->p_data;
    block_t *VAR_6;
    CGRect VAR_7;
    CGImageRef VAR_8;


    CGPoint VAR_9;

    CGEventRef VAR_10 = FUNC_6(((void*)0));
    VAR_9 = FUNC_7(VAR_10);
    FUNC_0(VAR_10);

    VAR_9.x -= VAR_5->screen_left;
    VAR_9.y -= VAR_5->screen_top;

    if (VAR_4->b_follow_mouse)
        FUNC_13(VAR_4, VAR_9.x, VAR_9.y);

    VAR_7.origin.x = VAR_4->i_left;
    VAR_7.origin.y = VAR_4->i_top;
    VAR_7.size.width = VAR_5->width;
    VAR_7.size.height = VAR_5->height;


    VAR_8 = FUNC_5(VAR_5->display_id, VAR_7);
    if (!VAR_8) {
        FUNC_17(VAR_3, "no image!");
        return ((void*)0);
    }


    if (!VAR_5->offscreen_context) {
        CGColorSpaceRef VAR_11;

        VAR_11 = FUNC_2(VAR_1);

        VAR_5->offscreen_bitmap_size = VAR_4->fmt.video.i_width * VAR_4->fmt.video.i_height * 4;
        VAR_5->offscreen_bitmap = FUNC_15(1, VAR_5->offscreen_bitmap_size);
        if (VAR_5->offscreen_bitmap == ((void*)0)) {
            FUNC_17(VAR_3, "can't allocate offscreen bitmap");
            FUNC_0(VAR_8);
            return ((void*)0);
        }

        VAR_5->offscreen_context = FUNC_1(VAR_5->offscreen_bitmap, VAR_4->fmt.video.i_width, VAR_4->fmt.video.i_height, 8, VAR_4->fmt.video.i_width * 4, VAR_11, VAR_2 | VAR_0);
        if (!VAR_5->offscreen_context) {
            FUNC_17(VAR_3, "can't create offscreen bitmap context");
            FUNC_0(VAR_8);
            return ((void*)0);
        }

        FUNC_3(VAR_11);

        VAR_5->offscreen_rect = FUNC_10(0, 0, VAR_4->fmt.video.i_width, VAR_4->fmt.video.i_height);
    }


    CGImageRef VAR_12;
    int VAR_13 = FUNC_12();
    CGPoint VAR_14;
    VAR_12 = FUNC_11(VAR_13, (char *)"com.apple.coregraphics.GlobalCurrent", &VAR_14);


    CGRect VAR_15;
    VAR_15.size.width = FUNC_9(VAR_12);
    VAR_15.size.height = FUNC_8(VAR_12);
    VAR_15.origin.x = VAR_9.x - VAR_4->i_left - VAR_14.x;
    VAR_15.origin.y = VAR_5->offscreen_rect.size.height
        - (VAR_9.y + VAR_15.size.height - VAR_4->i_top - VAR_14.y);

    FUNC_4(VAR_5->offscreen_context, VAR_5->offscreen_rect, VAR_8);
    FUNC_4(VAR_5->offscreen_context, VAR_15, VAR_12);


    VAR_6 = FUNC_14(VAR_5->offscreen_bitmap_size);
    if (!VAR_6) {
        FUNC_17(VAR_3, "can't get block");
        FUNC_0(VAR_8);
        return ((void*)0);
    }

    FUNC_16(VAR_6->p_buffer, VAR_5->offscreen_bitmap, VAR_5->offscreen_bitmap_size);

    FUNC_0(VAR_8);

    return VAR_6;
}
