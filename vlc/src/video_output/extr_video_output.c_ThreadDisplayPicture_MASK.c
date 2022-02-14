
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* p; } ;
typedef TYPE_3__ vout_thread_t ;
struct TYPE_10__ {scalar_t__ date; TYPE_5__* current; TYPE_5__* next; } ;
struct TYPE_9__ {int is_on; } ;
struct TYPE_12__ {TYPE_2__ displayed; int rate; int clock; int render; TYPE_1__ pause; } ;
typedef TYPE_4__ vout_thread_sys_t ;
typedef scalar_t__ vlc_tick_t ;
struct TYPE_13__ {scalar_t__ b_force; int date; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int,int,int*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ const VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,scalar_t__ const,int ,int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(vout_thread_t *VAR_5, vlc_tick_t *VAR_6)
{
    vout_thread_sys_t *VAR_7 = VAR_5->p;
    bool VAR_8 = !VAR_6;
    bool VAR_9 = VAR_7->pause.is_on;
    bool VAR_10 = !VAR_7->displayed.current;

    FUNC_2(VAR_7->clock);

    if (VAR_10)
        if (FUNC_0(VAR_5, 1, VAR_8, &VAR_9))
            return VAR_1;

    if (!VAR_9 || VAR_8)
        while (!VAR_7->displayed.next
            && !FUNC_0(VAR_5, 0, VAR_8, &VAR_9))
            ;

    const vlc_tick_t VAR_11 = FUNC_6();
    const vlc_tick_t VAR_12 = FUNC_7(&VAR_7->render) + VAR_3;

    bool VAR_13 = VAR_8;
    vlc_tick_t VAR_14 = VAR_2;

    if (!VAR_9 && VAR_7->displayed.next) {
        const vlc_tick_t VAR_15 =
            FUNC_5(VAR_7->clock, VAR_11,
                                      VAR_7->displayed.next->date, VAR_7->rate);
        if (FUNC_4(VAR_15 == VAR_0))
        {


            VAR_9 = 1;
        }
        {
            VAR_14 = VAR_15 - VAR_12;
            if (VAR_14 <= VAR_11)
                VAR_13 = 1;
        }
    }
    bool VAR_16 = 0;

    vlc_tick_t VAR_17 = VAR_2;
    if (VAR_7->displayed.date != VAR_2) {
        VAR_17 = VAR_7->displayed.date + VAR_4 - VAR_12;
        VAR_16 = VAR_17 <= VAR_11;
    }
    bool VAR_18 = !VAR_13 && VAR_16;

    if (!VAR_8) {
        if (VAR_17 != VAR_2)
            *VAR_6 = VAR_17;
        if (VAR_14 != VAR_2 && VAR_14 < *VAR_6)
            *VAR_6 = VAR_14;
    }

    if (!VAR_10 && !VAR_16 && !VAR_13) {
        return VAR_1;
    }

    if (VAR_13) {
        FUNC_3(VAR_7->displayed.current);
        VAR_7->displayed.current = VAR_7->displayed.next;
        VAR_7->displayed.next = ((void*)0);
    }

    if (!VAR_7->displayed.current)
        return VAR_1;


    bool VAR_19 = VAR_8 || VAR_18 || VAR_7->displayed.current->b_force;
    int VAR_20 = FUNC_1(VAR_5, VAR_19);
    return VAR_18 ? VAR_1 : VAR_20;
}
