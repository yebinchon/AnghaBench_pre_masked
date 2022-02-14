
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_5__ {size_t size; struct report_timer* data; } ;
typedef TYPE_2__ vec_report_timer ;
struct timer_state {scalar_t__ delay; TYPE_2__ vec; } ;
struct TYPE_4__ {scalar_t__ system_date; scalar_t__ ts; scalar_t__ position; unsigned int rate; scalar_t__ length; } ;
struct report_timer {scalar_t__ type; scalar_t__ discontinuity_date; TYPE_1__ point; } ;
struct media_params {size_t* track_count; unsigned int video_frame_rate; int video_frame_rate_base; scalar_t__ audio_sample_length; } ;
struct ctx {int dummy; } ;


 size_t VAR_0 ;
 struct media_params FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ctx*,char*,struct media_params*,int) ;
 int FUNC_3 (struct ctx*,unsigned int) ;
 int FUNC_4 (struct ctx*) ;
 int FUNC_5 (struct ctx*) ;
 int FUNC_6 (struct timer_state*,scalar_t__,unsigned int,int,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct ctx*,int ) ;

__attribute__((used)) static void
FUNC_9(struct ctx *VAR_16, struct timer_state VAR_17[],
                     size_t VAR_18, vlc_tick_t VAR_19, unsigned VAR_20,
                     unsigned VAR_21)
{



    struct media_params VAR_22 = FUNC_0(VAR_19);

    VAR_22.track_count[VAR_11] = VAR_18;
    VAR_22.track_count[VAR_0] = VAR_18;
    VAR_22.track_count[VAR_9] = VAR_18;
    VAR_22.audio_sample_length = FUNC_0(1);
    VAR_22.video_frame_rate = VAR_20;
    VAR_22.video_frame_rate_base = 1;

    FUNC_2(VAR_16, "media1", &VAR_22, 0);
    FUNC_3(VAR_16, VAR_21);
    FUNC_4(VAR_16);

    FUNC_8(VAR_16, VAR_12);
    FUNC_8(VAR_16, VAR_13);


    for (size_t VAR_23 = 0; VAR_23 < VAR_8; ++VAR_23)
    {
        struct timer_state *VAR_24 = &VAR_17[VAR_23];
        vec_report_timer *VAR_25 = &VAR_24->vec;

        for (size_t VAR_26 = 1; VAR_26 < VAR_25->size; ++VAR_26)
        {
            struct report_timer *VAR_27 = &VAR_25->data[VAR_26 - 1];
            struct report_timer *VAR_28 = &VAR_25->data[VAR_26];



            if (VAR_26 < VAR_25->size - 1)
            {
                if (VAR_26 == 1)
                    FUNC_1(VAR_27->point.system_date == VAR_1);

                FUNC_1(VAR_28->type == VAR_6);

                FUNC_1(VAR_28->point.ts >= VAR_27->point.ts);
                FUNC_1(VAR_28->point.system_date != VAR_15);
                FUNC_1(VAR_28->point.position >= VAR_27->point.position);
                FUNC_1(VAR_28->point.rate == VAR_21);
                FUNC_1(VAR_28->point.length == VAR_19);
            }
            else
            {
                FUNC_1(VAR_28->type == VAR_5);
                FUNC_1(VAR_28->discontinuity_date == VAR_15);
            }
        }
    }


    if (VAR_18 != 0)
    {
        struct timer_state *VAR_29 = &VAR_17[VAR_4];
        vec_report_timer *VAR_30 = &VAR_29->vec;


        FUNC_1(VAR_30->size > 1);
        size_t VAR_31 = 1;
        for (size_t VAR_32 = 1; VAR_32 < VAR_30->size - 1; ++VAR_32)
        {
            struct report_timer *VAR_33 = &VAR_30->data[VAR_32 - 1];
            struct report_timer *VAR_34 = &VAR_30->data[VAR_32];


            if (VAR_34->point.ts != VAR_33->point.ts)
            {
                FUNC_1(VAR_34->point.ts == VAR_33->point.ts + FUNC_0(1));
                VAR_31++;
            }
        }
        FUNC_1(VAR_30->data[VAR_30->size - 2].point.ts
               == VAR_19 - FUNC_0(1) + VAR_14);
        FUNC_1(VAR_31 == (size_t)(VAR_19 / FUNC_0(1)));
    }


    {
        struct timer_state *VAR_35 = &VAR_17[VAR_3];
        vec_report_timer *VAR_36 = &VAR_35->vec;


        FUNC_1(VAR_36->size < (size_t)(VAR_19 / FUNC_0(1)));

        for (size_t VAR_37 = 1; VAR_37 < VAR_36->size; ++VAR_37)
        {
            struct report_timer *VAR_38 = &VAR_36->data[VAR_37 - 1];
            struct report_timer *VAR_39 = &VAR_36->data[VAR_37];
            if (VAR_37 < VAR_36->size - 1)
            {
                if (VAR_37 == 1)
                    FUNC_1(VAR_38->point.system_date == VAR_1);
                else
                    FUNC_1(VAR_39->point.system_date - VAR_38->point.system_date
                           >= VAR_35->delay);
            }
        }
    }

    if (VAR_18 > 0)
        FUNC_6(&VAR_17[VAR_8], VAR_19, VAR_20, 0, 3);
    else
    {
        struct timer_state *VAR_40 = &VAR_17[VAR_8];
        vec_report_timer *VAR_41 = &VAR_40->vec;
        FUNC_1(VAR_41->size == 0);
    }
    FUNC_5(VAR_16);

    for (size_t VAR_42 = 0; VAR_42 < VAR_10; ++VAR_42)
    {
        struct timer_state *VAR_43 = &VAR_17[VAR_42];
        FUNC_7(&VAR_43->vec);
    }
}
