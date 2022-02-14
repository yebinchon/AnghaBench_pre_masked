
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int repeat; int stop; int start; } ;
typedef TYPE_1__ CalendarComponent ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(CalendarComponent * const *VAR_0, CalendarComponent * const *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_0((*VAR_0)->start, (*VAR_1)->start);
        if (VAR_2 != 0)
                return VAR_2;

        VAR_2 = FUNC_0((*VAR_0)->stop, (*VAR_1)->stop);
        if (VAR_2 != 0)
                return VAR_2;

        return FUNC_0((*VAR_0)->repeat, (*VAR_1)->repeat);
}
