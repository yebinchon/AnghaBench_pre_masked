
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Unit ;
typedef scalar_t__ JobType ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

int FUNC_2(JobType *VAR_1, JobType VAR_2, Unit *VAR_3) {
        JobType VAR_4;

        VAR_4 = FUNC_1(*VAR_1, VAR_2);
        if (VAR_4 < 0)
                return -VAR_0;

        *VAR_1 = FUNC_0(VAR_4, VAR_3);
        return 0;
}
