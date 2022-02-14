
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_77__ TYPE_9__ ;
typedef struct TYPE_76__ TYPE_8__ ;
typedef struct TYPE_75__ TYPE_7__ ;
typedef struct TYPE_74__ TYPE_6__ ;
typedef struct TYPE_73__ TYPE_5__ ;
typedef struct TYPE_72__ TYPE_4__ ;
typedef struct TYPE_71__ TYPE_44__ ;
typedef struct TYPE_70__ TYPE_40__ ;
typedef struct TYPE_69__ TYPE_3__ ;
typedef struct TYPE_68__ TYPE_2__ ;
typedef struct TYPE_67__ TYPE_25__ ;
typedef struct TYPE_66__ TYPE_22__ ;
typedef struct TYPE_65__ TYPE_1__ ;
typedef struct TYPE_64__ TYPE_19__ ;
typedef struct TYPE_63__ TYPE_14__ ;
typedef struct TYPE_62__ TYPE_13__ ;
typedef struct TYPE_61__ TYPE_12__ ;
typedef struct TYPE_60__ TYPE_11__ ;
typedef struct TYPE_59__ TYPE_10__ ;


struct TYPE_77__ {TYPE_10__* p; } ;
typedef TYPE_9__ vout_thread_t ;
struct TYPE_72__ {scalar_t__ date; TYPE_40__* current; } ;
struct TYPE_66__ {int avg; int var; } ;
struct TYPE_73__ {scalar_t__ date; scalar_t__ is_on; } ;
struct TYPE_69__ {int lock; int chain_interactive; } ;
struct TYPE_59__ {scalar_t__ spu_blend_chroma; int statistic; int display_lock; int rate; int clock; TYPE_4__ displayed; TYPE_22__ render; TYPE_44__* spu_blend; int snapshot; int private_pool; int spu; TYPE_5__ pause; TYPE_11__* display; TYPE_3__ filter; } ;
typedef TYPE_10__ vout_thread_sys_t ;
struct TYPE_62__ {scalar_t__ orientation; int i_width; int i_height; int i_visible_width; int i_visible_height; scalar_t__ i_chroma; int i_sar_den; int i_sar_num; } ;
struct TYPE_74__ {scalar_t__* subpicture_chromas; int can_scale_spu; } ;
struct TYPE_60__ {int (* prepare ) (TYPE_11__*,TYPE_14__*,int *,scalar_t__) ;TYPE_13__ source; TYPE_6__ info; TYPE_19__* cfg; TYPE_13__ fmt; } ;
typedef TYPE_11__ vout_display_t ;
struct TYPE_61__ {int width; int height; } ;
typedef TYPE_12__ vout_display_place_t ;
typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ vlc_fourcc_t ;
typedef TYPE_13__ video_format_t ;
typedef int subpicture_t ;
struct TYPE_67__ {unsigned int i_frame_rate; unsigned int i_frame_rate_base; } ;
struct TYPE_63__ {int date; TYPE_25__ format; } ;
typedef TYPE_14__ picture_t ;
struct TYPE_75__ {int den; int num; } ;
struct TYPE_76__ {TYPE_7__ sar; } ;
struct TYPE_65__ {scalar_t__ i_chroma; } ;
struct TYPE_68__ {TYPE_1__ video; } ;
struct TYPE_71__ {TYPE_2__ fmt_out; } ;
struct TYPE_70__ {int date; } ;
struct TYPE_64__ {TYPE_8__ display; } ;


 TYPE_14__* FUNC_0 (TYPE_9__*,TYPE_14__*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_9__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_14__*) ;
 int FUNC_3 (TYPE_44__*) ;
 TYPE_44__* FUNC_4 (int ,TYPE_13__*) ;
 TYPE_14__* FUNC_5 (int ,TYPE_14__*) ;
 int FUNC_6 (TYPE_9__*,char*) ;
 int FUNC_7 (TYPE_9__*,char*,int,int) ;
 int FUNC_8 (TYPE_9__*,char*) ;
 scalar_t__ FUNC_9 (TYPE_14__*,TYPE_44__*,int *) ;
 int FUNC_10 (TYPE_14__*,TYPE_14__*) ;
 TYPE_14__* FUNC_11 (TYPE_40__*) ;
 int FUNC_12 (TYPE_14__*) ;
 TYPE_14__* FUNC_13 (int ) ;
 int * FUNC_14 (int ,scalar_t__ const*,TYPE_13__*,TYPE_13__*,scalar_t__,scalar_t__,int const,int ) ;
 int FUNC_15 (TYPE_11__*,TYPE_14__*,int *,scalar_t__) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (TYPE_13__*,TYPE_13__*) ;
 int FUNC_19 (TYPE_25__*,TYPE_25__*) ;
 scalar_t__ FUNC_20 (int ,scalar_t__,scalar_t__ const,int ) ;
 int FUNC_21 (int ,scalar_t__,scalar_t__ const,int ,unsigned int const,unsigned int const) ;
 int FUNC_22 (int ,scalar_t__,scalar_t__ const,int ,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 () ;
 TYPE_14__* FUNC_26 (TYPE_11__*,TYPE_14__*) ;
 int FUNC_27 (TYPE_11__*,TYPE_25__*) ;
 int FUNC_28 (TYPE_22__*) ;
 int FUNC_29 (TYPE_22__*) ;
 int FUNC_30 (TYPE_11__*,TYPE_14__*) ;
 int FUNC_31 (TYPE_12__*,TYPE_13__*,TYPE_19__*) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ,TYPE_13__*,TYPE_14__*) ;
 int FUNC_34 (int *,int) ;

__attribute__((used)) static int FUNC_35(vout_thread_t *VAR_5, bool VAR_6)
{
    vout_thread_sys_t *VAR_7 = VAR_5->p;

    picture_t *VAR_8 = FUNC_11(VAR_7->displayed.current);

    FUNC_28(&VAR_7->render);

    FUNC_23(&VAR_7->filter.lock);
    picture_t *VAR_9 = FUNC_5(VAR_7->filter.chain_interactive, VAR_8);
    FUNC_24(&VAR_7->filter.lock);

    if (!VAR_9)
        return VAR_2;

    if (VAR_9->date != VAR_7->displayed.current->date)
        FUNC_8(VAR_5, "Unsupported timestamp modifications done by chain_interactive");

    vout_display_t *VAR_10 = VAR_7->display;

    FUNC_23(&VAR_7->display_lock);




    const bool VAR_11 = FUNC_32(VAR_7->snapshot);
    vlc_tick_t VAR_12 = FUNC_25();
    vlc_tick_t VAR_13;
    if (VAR_7->pause.is_on)
        VAR_13 = VAR_7->pause.date;
    else
    {
        VAR_13 = VAR_9->date <= 1 ? VAR_12 :
            FUNC_20(VAR_7->clock, VAR_12, VAR_9->date,
                                      VAR_7->rate);




        if (FUNC_17(VAR_13 == VAR_0))
        {
            VAR_13 = VAR_12;
            VAR_6 = 1;
        }
    }




    const bool VAR_14 = !VAR_11 &&
                           VAR_10->info.subpicture_chromas &&
                           *VAR_10->info.subpicture_chromas != 0;





    const bool VAR_15 = !VAR_14 &&
                               VAR_10->source.orientation == VAR_1;

    const vlc_fourcc_t *VAR_16;
    video_format_t VAR_17;
    if (VAR_14) {
        vout_display_place_t VAR_18;
        FUNC_31(&VAR_18, &VAR_10->source, VAR_10->cfg);

        VAR_17 = VAR_10->source;
        if (VAR_17.i_width * VAR_17.i_height < VAR_18.width * VAR_18.height) {
            VAR_17.i_sar_num = VAR_10->cfg->display.sar.num;
            VAR_17.i_sar_den = VAR_10->cfg->display.sar.den;
            VAR_17.i_width =
            VAR_17.i_visible_width = VAR_18.width;
            VAR_17.i_height =
            VAR_17.i_visible_height = VAR_18.height;
        }
        VAR_16 = VAR_10->info.subpicture_chromas;
    } else {
        if (VAR_15) {
            VAR_17 = VAR_10->source;
        } else {
            VAR_17 = VAR_10->fmt;
            VAR_17.i_sar_num = VAR_10->cfg->display.sar.num;
            VAR_17.i_sar_den = VAR_10->cfg->display.sar.den;
        }
        VAR_16 = ((void*)0);

        if (VAR_7->spu_blend &&
            VAR_7->spu_blend->fmt_out.video.i_chroma != VAR_17.i_chroma) {
            FUNC_3(VAR_7->spu_blend);
            VAR_7->spu_blend = ((void*)0);
            VAR_7->spu_blend_chroma = 0;
        }
        if (!VAR_7->spu_blend && VAR_7->spu_blend_chroma != VAR_17.i_chroma) {
            VAR_7->spu_blend_chroma = VAR_17.i_chroma;
            VAR_7->spu_blend = FUNC_4(FUNC_1(VAR_5), &VAR_17);
            if (!VAR_7->spu_blend)
                FUNC_6(VAR_5, "Failed to create blending filter, OSD/Subtitles will not work");
        }
    }

    video_format_t VAR_19;
    FUNC_18(&VAR_19, &VAR_17);
    subpicture_t *VAR_20 = !VAR_7->spu ? ((void*)0) :
                           FUNC_14(VAR_7->spu,
                                      VAR_16, &VAR_19,
                                      &VAR_10->source, VAR_12,
                                      VAR_13,
                                      VAR_11, VAR_10->info.can_scale_spu);







    picture_t *VAR_21 = VAR_9;
    picture_t *VAR_22 = VAR_21;
    if (VAR_15 && VAR_20) {
        if (VAR_7->spu_blend) {
            picture_t *VAR_23 = FUNC_13(VAR_7->private_pool);
            if (VAR_23) {
                FUNC_19(&VAR_23->format, &VAR_9->format);
                FUNC_10(VAR_23, VAR_9);
                if (FUNC_9(VAR_23, VAR_7->spu_blend, VAR_20)) {
                    FUNC_12(VAR_21);
                    VAR_22 = VAR_21 = VAR_23;
                } else
                {



                    if (VAR_11)
                    {
                        picture_t *VAR_24 = FUNC_0(VAR_5, VAR_23, VAR_20);
                        if (VAR_24)
                            VAR_22 = VAR_24;
                    }
                    FUNC_12(VAR_23);
                }
            }
        }
        FUNC_16(VAR_20);
        VAR_20 = ((void*)0);
    }




    if (VAR_11)
    {
        FUNC_2(VAR_22);
        FUNC_33(VAR_7->snapshot, &VAR_10->source, VAR_22);
        if (VAR_22 != VAR_21)
            FUNC_12(VAR_22);
    }


    FUNC_27(VAR_10, &VAR_21->format);

    VAR_21 = FUNC_26(VAR_10, VAR_21);
    if (VAR_21 == ((void*)0)) {
        FUNC_24(&VAR_7->display_lock);

        if (VAR_20 != ((void*)0))
            FUNC_16(VAR_20);
        return VAR_2;
    }

    if (!VAR_14 && VAR_7->spu_blend != ((void*)0) && VAR_20 != ((void*)0))
        FUNC_9(VAR_21, VAR_7->spu_blend, VAR_20);

    VAR_12 = FUNC_25();
    const vlc_tick_t VAR_25 = VAR_21->date;
    vlc_tick_t VAR_26 = VAR_6 ? VAR_12 :
        FUNC_20(VAR_7->clock, VAR_12, VAR_25, VAR_7->rate);
    if (FUNC_17(VAR_26 == VAR_0))
    {



        VAR_26 = VAR_12;
        VAR_6 = 1;
    }

    const unsigned VAR_27 = VAR_21->format.i_frame_rate;
    const unsigned VAR_28 = VAR_21->format.i_frame_rate_base;

    if (VAR_10->prepare != ((void*)0))
        VAR_10->prepare(VAR_10, VAR_21, VAR_14 ? VAR_20 : ((void*)0), VAR_26);

    FUNC_29(&VAR_7->render);
    VAR_12 = FUNC_25();
    if (!VAR_6)
    {
        if (FUNC_17(VAR_12 > VAR_26))
        {


            VAR_26 = VAR_12;
        }
        else
        {

            FUNC_22(VAR_7->clock, VAR_12, VAR_25, VAR_7->rate,
                           VAR_4);



        }
        VAR_7->displayed.date = VAR_26;
    }
    else
    {
        VAR_7->displayed.date = VAR_12;

        VAR_26 = VAR_0;
    }
    FUNC_21(VAR_7->clock, VAR_26, VAR_25, VAR_7->rate,
                          VAR_27, VAR_28);


    FUNC_30(VAR_10, VAR_21);
    FUNC_24(&VAR_7->display_lock);

    if (VAR_20)
        FUNC_16(VAR_20);

    FUNC_34(&VAR_7->statistic, 1);

    return VAR_3;
}
