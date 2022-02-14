
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_13__ {scalar_t__ i_chroma; scalar_t__ transfer; scalar_t__ primaries; scalar_t__ space; scalar_t__ color_range; } ;
struct TYPE_16__ {scalar_t__ p_text; TYPE_1__ fmt; } ;
typedef TYPE_4__ subpicture_region_t ;
struct TYPE_17__ {TYPE_6__* p; } ;
typedef TYPE_5__ spu_t ;
struct TYPE_18__ {int textlock; TYPE_7__* text; } ;
typedef TYPE_6__ spu_private_t ;
struct TYPE_14__ {int i_width; int i_visible_width; int i_height; int i_visible_height; } ;
struct TYPE_15__ {TYPE_2__ video; } ;
struct TYPE_19__ {int (* pf_render ) (TYPE_7__*,TYPE_4__*,TYPE_4__*,int const*) ;TYPE_3__ fmt_out; } ;
typedef TYPE_7__ filter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*,TYPE_4__*,TYPE_4__*,int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(spu_t *VAR_9,
                          subpicture_region_t *VAR_10,
                          int VAR_11,
                          int VAR_12,
                          const vlc_fourcc_t *VAR_13)
{
    spu_private_t *VAR_14 = VAR_9->p;
    filter_t *VAR_15 = VAR_14->text;
    FUNC_0(VAR_10->fmt.i_chroma == VAR_8);

    FUNC_2(&VAR_14->textlock);
    if(VAR_15)
    {

        if (VAR_10->fmt.transfer == VAR_7)
            VAR_10->fmt.transfer = VAR_6;
        if (VAR_10->fmt.primaries == VAR_1)
            VAR_10->fmt.primaries = VAR_0;
        if (VAR_10->fmt.space == VAR_5)
            VAR_10->fmt.space = VAR_4;
        if (VAR_10->fmt.color_range == VAR_3)
            VAR_10->fmt.color_range = VAR_2;


        VAR_15->fmt_out.video.i_width =
        VAR_15->fmt_out.video.i_visible_width = VAR_11;

        VAR_15->fmt_out.video.i_height =
        VAR_15->fmt_out.video.i_visible_height = VAR_12;

        if ( VAR_10->p_text )
            VAR_15->pf_render(VAR_15, VAR_10, VAR_10, VAR_13);
    }
    FUNC_3(&VAR_14->textlock);
}
