
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BusWaitForJobs ;


 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 () ;

int FUNC_3(BusWaitForJobs *VAR_0, const char *VAR_1, bool VAR_2) {
        int VAR_3;

        VAR_3 = FUNC_1(VAR_0, VAR_1);
        if (VAR_3 < 0)
                return FUNC_2();

        return FUNC_0(VAR_0, VAR_2, ((void*)0));
}
