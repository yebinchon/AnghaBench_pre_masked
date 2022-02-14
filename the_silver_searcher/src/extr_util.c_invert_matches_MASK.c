
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t start; size_t end; } ;
typedef TYPE_1__ match_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,...) ;

size_t FUNC_1(const char *VAR_2, const size_t VAR_3, match_t VAR_4[], size_t VAR_5) {
    size_t VAR_6;
    size_t VAR_7 = 0;
    size_t VAR_8 = 0;
    size_t VAR_9 = 0;
    size_t VAR_10 = 0;
    int VAR_11 = VAR_1;
    match_t VAR_12;

    FUNC_0("Inverting %u matches.", VAR_5);

    if (VAR_5 > 0) {
        VAR_12 = VAR_4[0];
    } else {
        VAR_12.start = VAR_3 + 1;
    }


    if (VAR_5 == 0) {
        VAR_4[0].start = 0;
        VAR_4[0].end = VAR_3 - 1;
        return 1;
    }

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        if (VAR_6 == VAR_12.start) {
            VAR_6 = VAR_12.end - 1;

            VAR_7++;

            if (VAR_7 < VAR_5) {
                VAR_12 = VAR_4[VAR_7];
            }

            if (VAR_11 && VAR_10 > VAR_9) {
                VAR_4[VAR_8].start = VAR_9;
                VAR_4[VAR_8].end = VAR_10 - 1;

                VAR_8++;
            }

            VAR_11 = VAR_0;
        } else if (VAR_6 == VAR_3 - 1 && VAR_11) {
            VAR_4[VAR_8].start = VAR_9;
            VAR_4[VAR_8].end = VAR_6;

            VAR_8++;
        } else if (VAR_2[VAR_6] == '\n') {
            VAR_10 = VAR_6 + 1;

            if (!VAR_11) {
                VAR_9 = VAR_10;
            }

            VAR_11 = VAR_1;
        }
    }

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        FUNC_0("Inverted match %i start %i end %i.", VAR_6, VAR_4[VAR_6].start, VAR_4[VAR_6].end);
    }

    return VAR_8;
}
