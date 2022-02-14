
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UnitActiveState ;
typedef int Unit ;
typedef int JobType ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

JobType FUNC_2(JobType VAR_4, Unit *VAR_5) {
        UnitActiveState VAR_6;

        switch (VAR_4) {

        case 128:
                VAR_6 = FUNC_1(VAR_5);
                if (!FUNC_0(VAR_6))
                        return VAR_0;

                return VAR_2;

        case 129:
                VAR_6 = FUNC_1(VAR_5);
                if (!FUNC_0(VAR_6))
                        return VAR_0;

                return VAR_1;

        case 130:
                VAR_6 = FUNC_1(VAR_5);
                if (!FUNC_0(VAR_6))
                        return VAR_3;

                return VAR_1;

        default:
                return VAR_4;
        }
}
