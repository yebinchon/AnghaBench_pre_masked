
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,int ,int ,char*,char const*) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_8, JsonVariant *VAR_9, JsonDispatchFlags VAR_10, void *VAR_11) {
        unsigned long *VAR_12 = VAR_11;
        const char *VAR_13;

        FUNC_1(VAR_12);
        FUNC_2(VAR_13 = FUNC_4(VAR_9));



        if (FUNC_5(VAR_13, "pid"))
                *VAR_12 = VAR_4;
        else if (FUNC_5(VAR_13, "network"))
                *VAR_12 = VAR_2;
        else if (FUNC_5(VAR_13, "mount"))
                *VAR_12 = VAR_3;
        else if (FUNC_5(VAR_13, "ipc"))
                *VAR_12 = VAR_1;
        else if (FUNC_5(VAR_13, "uts"))
                *VAR_12 = VAR_6;
        else if (FUNC_5(VAR_13, "user"))
                *VAR_12 = VAR_5;
        else if (FUNC_5(VAR_13, "cgroup"))
                *VAR_12 = VAR_0;
        else
                return FUNC_3(VAR_9, VAR_10, FUNC_0(VAR_7),
                                "Unknown cgroup type, refusing: %s", VAR_13);

        return 0;
}
