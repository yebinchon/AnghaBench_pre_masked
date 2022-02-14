
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int audio; } ;
struct TYPE_14__ {TYPE_1__ fmt_in; TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_15__ {scalar_t__ time_window; int started; scalar_t__ lastAlarm; scalar_t__ repetition_time; float alarm_threshold; scalar_t__ bargraph_repetition; scalar_t__ counter; scalar_t__ bargraph; TYPE_5__* first; TYPE_5__* last; scalar_t__ silence; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_16__ {size_t i_nb_samples; scalar_t__ i_pts; scalar_t__ p_buffer; } ;
typedef TYPE_4__ block_t ;
struct TYPE_17__ {double value; scalar_t__ date; struct TYPE_17__* next; } ;
typedef TYPE_5__ ValueDate_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,float*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*) ;
 float FUNC_3 (float) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_5__* FUNC_6 (int) ;

__attribute__((used)) static block_t *FUNC_7( filter_t *VAR_1, block_t *VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_1->p_sys;
    float *VAR_4 = (float *)VAR_2->p_buffer;
    float VAR_5[VAR_0];

    int VAR_6 = FUNC_1(&VAR_1->fmt_in.audio);

    for (int VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
        VAR_5[VAR_7] = 0.;


    for (size_t VAR_8 = 0; VAR_8 < VAR_2->i_nb_samples; VAR_8++)
        for (int VAR_9 = 0; VAR_9<VAR_6; VAR_9++) {
            float VAR_10 = *VAR_4++;
            if (VAR_10 > VAR_5[VAR_9])
                VAR_5[VAR_9] = VAR_10;
        }

    if (VAR_3->silence) {

        ValueDate_t *VAR_11 = FUNC_6(sizeof(*VAR_11));
        VAR_11->value = 0.0;
        for (int VAR_12 = 0; VAR_12<VAR_6; VAR_12++) {
            float VAR_13 = VAR_5[VAR_12];
            if (VAR_13 > VAR_11->value)
                VAR_11->value = VAR_13;
        }
        VAR_11->value *= VAR_11->value;
        VAR_11->date = VAR_2->i_pts;
        VAR_11->next = ((void*)0);
        if (VAR_3->last != ((void*)0))
            VAR_3->last->next = VAR_11;
        VAR_3->last = VAR_11;
        if (VAR_3->first == ((void*)0))
            VAR_3->first = VAR_11;


        while (VAR_3->first->date < VAR_11->date - VAR_3->time_window) {
            VAR_3->started = 1;
            ValueDate_t *VAR_14 = VAR_3->first;
            VAR_3->first = VAR_3->first->next;
            FUNC_2(VAR_14);
        }


        if (VAR_3->started && VAR_2->i_pts > VAR_3->lastAlarm + VAR_3->repetition_time) {


            ValueDate_t *VAR_15 = VAR_3->first;
            float VAR_16 = 0.0;
            int VAR_17 = 0;
            while (VAR_15 != ((void*)0)) {
                VAR_16 += VAR_15->value;
                VAR_17++;
                VAR_15 = VAR_15->next;
            }
            VAR_16 /= VAR_17;
            VAR_16 = FUNC_3(VAR_16);


            FUNC_4(FUNC_5(VAR_1), "audiobargraph_v-alarm",
                        VAR_16 < VAR_3->alarm_threshold);

            VAR_3->lastAlarm = VAR_2->i_pts;
        }
    }

    if (VAR_3->bargraph && VAR_6 > 0 && VAR_3->counter++ > VAR_3->bargraph_repetition) {
        FUNC_0(VAR_1, VAR_5, VAR_6);
        VAR_3->counter = 0;
    }

    return VAR_2;
}
