
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {struct TYPE_21__* current_message; int iteration_counter; } ;
typedef TYPE_1__ sd_bus_message ;
typedef TYPE_1__ sd_bus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(sd_bus *VAR_0, sd_bus_message *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_0->current_message = VAR_1;
        VAR_0->iteration_counter++;

        FUNC_2(VAR_1);

        VAR_2 = FUNC_6(VAR_0, VAR_1);
        if (VAR_2 != 0)
                goto finish;

        VAR_2 = FUNC_8(VAR_0, VAR_1);
        if (VAR_2 != 0)
                goto finish;

        VAR_2 = FUNC_4(VAR_0, VAR_1);
        if (VAR_2 != 0)
                goto finish;

        VAR_2 = FUNC_5(VAR_0, VAR_1);
        if (VAR_2 != 0)
                goto finish;

        VAR_2 = FUNC_7(VAR_0, VAR_1);
        if (VAR_2 != 0)
                goto finish;

        VAR_2 = FUNC_3(VAR_0, VAR_1);
        if (VAR_2 != 0)
                goto finish;

        VAR_2 = FUNC_1(VAR_0, VAR_1);

finish:
        VAR_0->current_message = ((void*)0);
        return VAR_2;
}
