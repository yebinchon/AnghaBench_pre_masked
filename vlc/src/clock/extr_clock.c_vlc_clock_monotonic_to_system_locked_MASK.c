
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef double vlc_tick_t ;
struct TYPE_7__ {scalar_t__ priority; TYPE_3__* owner; } ;
typedef TYPE_2__ vlc_clock_t ;
struct TYPE_9__ {double stream; double system; } ;
struct TYPE_6__ {scalar_t__ system; double stream; } ;
struct TYPE_8__ {scalar_t__ wait_sync_ref_priority; double const input_dejitter; TYPE_5__ wait_sync_ref; int output_dejitter; TYPE_1__ first_pcr; } ;
typedef TYPE_3__ vlc_clock_main_t ;


 scalar_t__ VAR_0 ;
 double FUNC_0 (double const,int ) ;
 TYPE_5__ FUNC_1 (double,double) ;

__attribute__((used)) static vlc_tick_t
FUNC_2(vlc_clock_t *VAR_1, vlc_tick_t VAR_2,
                                     vlc_tick_t VAR_3, double VAR_4)
{
    vlc_clock_main_t *VAR_5 = VAR_1->owner;

    if (VAR_1->priority < VAR_5->wait_sync_ref_priority)
    {




        const vlc_tick_t VAR_6 =
            VAR_5->first_pcr.system == VAR_0 ? 0 :
            (VAR_3 - VAR_5->first_pcr.stream) / VAR_4 +
            VAR_5->first_pcr.system - VAR_2;

        const vlc_tick_t VAR_7 = VAR_5->input_dejitter + VAR_6;

        const vlc_tick_t VAR_8 =
            FUNC_0(VAR_7, VAR_5->output_dejitter);

        VAR_5->wait_sync_ref_priority = VAR_1->priority;
        VAR_5->wait_sync_ref = FUNC_1(VAR_2 + VAR_8, VAR_3);
    }
    return (VAR_3 - VAR_5->wait_sync_ref.stream) / VAR_4
        + VAR_5->wait_sync_ref.system;
}
