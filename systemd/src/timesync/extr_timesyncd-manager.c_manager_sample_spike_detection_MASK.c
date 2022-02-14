
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {double offset; double delay; } ;
struct TYPE_5__ {int packet_count; unsigned int samples_idx; double samples_jitter; TYPE_4__* samples; scalar_t__ poll_resync; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (double) ;
 scalar_t__ FUNC_3 (double,int) ;
 double FUNC_4 (double) ;

__attribute__((used)) static bool FUNC_5(Manager *VAR_0, double VAR_1, double VAR_2) {
        unsigned VAR_3, VAR_4, VAR_5, VAR_6;
        double VAR_7;
        double VAR_8;

        FUNC_1(VAR_0);

        VAR_0->packet_count++;


        if (VAR_0->packet_count == 1)
                return 0;


        VAR_4 = VAR_0->samples_idx;
        VAR_5 = (VAR_4 + 1) % FUNC_0(VAR_0->samples);
        VAR_0->samples_idx = VAR_5;
        VAR_0->samples[VAR_5].offset = VAR_1;
        VAR_0->samples[VAR_5].delay = VAR_2;


        VAR_7 = VAR_0->samples_jitter;
        for (VAR_6 = VAR_4, VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->samples); VAR_3++)
                if (VAR_0->samples[VAR_3].delay > 0 && VAR_0->samples[VAR_3].delay < VAR_0->samples[VAR_6].delay)
                        VAR_6 = VAR_3;

        VAR_8 = 0;
        for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->samples); VAR_3++)
                VAR_8 += FUNC_3(VAR_0->samples[VAR_3].offset - VAR_0->samples[VAR_6].offset, 2);
        VAR_0->samples_jitter = FUNC_4(VAR_8 / (FUNC_0(VAR_0->samples) - 1));


        if (VAR_0->poll_resync)
                return 0;


        if (FUNC_2(VAR_1) > VAR_2)
                return 0;


        if (VAR_0->packet_count < 4)
                return 0;


        if (FUNC_2(VAR_1) > VAR_0->samples[VAR_6].delay)
                return 1;


        return FUNC_2(VAR_1 - VAR_0->samples[VAR_4].offset) > 3 * VAR_7;
}
