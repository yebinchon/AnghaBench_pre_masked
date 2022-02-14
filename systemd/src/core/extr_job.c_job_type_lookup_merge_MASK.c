
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JobType ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int* VAR_1 ;

JobType FUNC_3(JobType VAR_2, JobType VAR_3) {
        FUNC_2(FUNC_0(VAR_1) == VAR_0 * (VAR_0 - 1) / 2);
        FUNC_1(VAR_2 >= 0 && VAR_2 < VAR_0);
        FUNC_1(VAR_3 >= 0 && VAR_3 < VAR_0);

        if (VAR_2 == VAR_3)
                return VAR_2;

        if (VAR_2 < VAR_3) {
                JobType VAR_4 = VAR_2;
                VAR_2 = VAR_3;
                VAR_3 = VAR_4;
        }

        return VAR_1[(VAR_2 - 1) * VAR_2 / 2 + VAR_3];
}
