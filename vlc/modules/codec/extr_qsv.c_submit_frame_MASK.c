
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
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_28__ {scalar_t__ date; scalar_t__ b_top_field_first; scalar_t__ b_progressive; } ;
typedef TYPE_7__ picture_t ;
struct TYPE_29__ {TYPE_9__* p_sys; } ;
typedef TYPE_8__ encoder_t ;
struct TYPE_24__ {int PicStruct; } ;
struct TYPE_22__ {TYPE_3__ FrameInfo; } ;
struct TYPE_23__ {TYPE_1__ mfx; } ;
struct TYPE_30__ {scalar_t__ offset_pts; TYPE_2__ params; int input_pool; } ;
typedef TYPE_9__ encoder_sys_t ;
struct TYPE_26__ {int PitchLow; scalar_t__ Y; scalar_t__ UV; int TimeStamp; } ;
struct TYPE_27__ {TYPE_5__ Data; TYPE_3__ Info; } ;
struct TYPE_25__ {scalar_t__ p_pixels; int i_pitch; int i_lines; } ;
struct TYPE_21__ {TYPE_4__* p; } ;
struct TYPE_20__ {TYPE_6__ surface; TYPE_14__* pic; scalar_t__ used; } ;
typedef TYPE_10__ QSVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_9__*,TYPE_10__**) ;
 int FUNC_3 (TYPE_8__*,char*) ;
 int FUNC_4 (TYPE_14__*,TYPE_7__*) ;
 TYPE_14__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(encoder_t *VAR_4, picture_t *VAR_5, QSVFrame **VAR_6)
{
    encoder_sys_t *VAR_7 = VAR_4->p_sys;
    QSVFrame *VAR_8 = ((void*)0);
    int VAR_9 = FUNC_2(VAR_7, &VAR_8);
    if (VAR_9 != VAR_3) {
        FUNC_3(VAR_4, "Unable to find an unlocked surface in the pool");
        return VAR_9;
    }

    VAR_8->pic = FUNC_5( VAR_7->input_pool );
    if (FUNC_6(!VAR_8->pic))
    {
        FUNC_3(VAR_4, "Unable to find an unlocked surface in the pool");
        VAR_8->used = 0;
        return VAR_9;
    }
    FUNC_4( VAR_8->pic, VAR_5 );

    FUNC_1(VAR_8->pic->p[0].p_pixels + (VAR_8->pic->p[0].i_pitch * VAR_8->pic->p[0].i_lines) == VAR_8->pic->p[1].p_pixels);

    VAR_8->surface.Info = VAR_7->params.mfx.FrameInfo;


    if (VAR_5->b_progressive)
        VAR_8->surface.Info.PicStruct = VAR_2;
    else if (VAR_5->b_top_field_first)
        VAR_8->surface.Info.PicStruct = VAR_1;
    else
        VAR_8->surface.Info.PicStruct = VAR_0;



    VAR_8->surface.Data.PitchLow = VAR_8->pic->p[0].i_pitch;
    VAR_8->surface.Data.Y = VAR_8->pic->p[0].p_pixels;
    VAR_8->surface.Data.UV = VAR_8->pic->p[1].p_pixels;

    VAR_8->surface.Data.TimeStamp = FUNC_0(VAR_5->date - VAR_7->offset_pts);

    *VAR_6 = VAR_8;

    return VAR_3;
}
