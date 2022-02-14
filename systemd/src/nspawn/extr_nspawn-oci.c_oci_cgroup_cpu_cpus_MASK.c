
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_data {int cpu_set; } ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;
typedef int CPUSet ;


 int FUNC_0 (struct cpu_data*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int,char*,char const*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char const*,int *) ;

__attribute__((used)) static int FUNC_6(const char *VAR_0, JsonVariant *VAR_1, JsonDispatchFlags VAR_2, void *VAR_3) {
        struct cpu_data *VAR_4 = VAR_3;
        CPUSet VAR_5;
        const char *VAR_6;
        int VAR_7;

        FUNC_0(VAR_4);

        FUNC_1(VAR_6 = FUNC_4(VAR_1));

        VAR_7 = FUNC_5(VAR_6, &VAR_5);
        if (VAR_7 < 0)
                return FUNC_3(VAR_1, VAR_2, VAR_7, "Failed to parse CPU set specification: %s", VAR_6);

        FUNC_2(&VAR_4->cpu_set);
        VAR_4->cpu_set = VAR_5;

        return 0;
}
