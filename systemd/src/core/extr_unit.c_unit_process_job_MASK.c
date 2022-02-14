
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UnitNotifyFlags ;
typedef int UnitActiveState ;
struct TYPE_6__ {scalar_t__ state; int type; } ;
typedef int JobResult ;
typedef TYPE_1__ Job ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int VAR_3 ;





 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int,int) ;

__attribute__((used)) static bool FUNC_8(Job *VAR_12, UnitActiveState VAR_13, UnitNotifyFlags VAR_14) {
        bool VAR_15 = 0;
        JobResult VAR_16;

        FUNC_4(VAR_12);

        if (VAR_12->state == VAR_4)



                FUNC_6(VAR_12);




        switch (VAR_12->type) {

        case 132:
        case 128:

                if (FUNC_2(VAR_13))
                        FUNC_7(VAR_12, VAR_0, 1, 0);
                else if (VAR_12->state == VAR_2 && VAR_13 != VAR_5) {
                        VAR_15 = 1;

                        if (FUNC_3(VAR_13)) {
                                if (VAR_13 == VAR_8)
                                        VAR_16 = VAR_1;
                                else if (FUNC_0(VAR_14, VAR_10))
                                        VAR_16 = VAR_3;
                                else
                                        VAR_16 = VAR_0;

                                FUNC_7(VAR_12, VAR_16, 1, 0);
                        }
                }

                break;

        case 135:
        case 134:
        case 130:

                if (VAR_12->state == VAR_2) {
                        if (VAR_13 == VAR_6)
                                FUNC_7(VAR_12, (VAR_14 & VAR_9) ? VAR_1 : VAR_0, 1, 0);
                        else if (!FUNC_1(VAR_13, VAR_5, VAR_11)) {
                                VAR_15 = 1;

                                if (FUNC_3(VAR_13))
                                        FUNC_7(VAR_12, VAR_13 == VAR_8 ? VAR_1 : VAR_0, 1, 0);
                        }
                }

                break;

        case 131:
        case 133:
        case 129:

                if (FUNC_3(VAR_13))
                        FUNC_7(VAR_12, VAR_0, 1, 0);
                else if (VAR_12->state == VAR_2 && VAR_13 != VAR_7) {
                        VAR_15 = 1;
                        FUNC_7(VAR_12, VAR_1, 1, 0);
                }

                break;

        default:
                FUNC_5("Job type unknown");
        }

        return VAR_15;
}
