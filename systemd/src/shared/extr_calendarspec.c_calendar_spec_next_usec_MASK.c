
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_10__ {int timezone; } ;
struct TYPE_9__ {int return_value; int next; } ;
typedef TYPE_1__ SpecNextResult ;
typedef TYPE_2__ CalendarSpec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (TYPE_2__ const*,int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *,int,int,int,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,int *) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 char* FUNC_9 (char*,int ) ;
 int FUNC_10 () ;

int FUNC_11(const CalendarSpec *VAR_11, usec_t VAR_12, usec_t *VAR_13) {
        SpecNextResult *VAR_14, VAR_15;
        int VAR_16;

        FUNC_1(VAR_11);

        if (FUNC_3(VAR_11->timezone))
                return FUNC_2(VAR_11, VAR_12, VAR_13);

        VAR_14 = FUNC_4(((void*)0), sizeof *VAR_14, VAR_9|VAR_10, VAR_8|VAR_6, -1, 0);
        if (VAR_14 == VAR_7)
                return FUNC_6();

        VAR_16 = FUNC_7("(sd-calendar)", VAR_4|VAR_2|VAR_3|VAR_5, ((void*)0));
        if (VAR_16 < 0) {
                (void) FUNC_5(VAR_14, sizeof *VAR_14);
                return VAR_16;
        }
        if (VAR_16 == 0) {
                char *VAR_17;


                VAR_17 = FUNC_9(":", VAR_11->timezone);

                if (FUNC_8("TZ", VAR_17, 1) != 0) {
                        VAR_14->return_value = FUNC_6();
                        FUNC_0(VAR_0);
                }

                FUNC_10();

                VAR_14->return_value = FUNC_2(VAR_11, VAR_12, &VAR_14->next);

                FUNC_0(VAR_1);
        }

        VAR_15 = *VAR_14;
        if (FUNC_5(VAR_14, sizeof *VAR_14) < 0)
                return FUNC_6();

        if (VAR_15.return_value == 0 && VAR_13)
                *VAR_13 = VAR_15.next;

        return VAR_15.return_value;
}
