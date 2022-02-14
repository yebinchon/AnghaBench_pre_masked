
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *,int ,int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_1, JsonVariant *VAR_2, JsonDispatchFlags VAR_3, void *VAR_4) {
        const char *VAR_5;
        int VAR_6, *VAR_7 = VAR_4;

        FUNC_1(VAR_7);

        VAR_5 = FUNC_5(FUNC_3(VAR_2), "RLIMIT_");
        if (!VAR_5)
                return FUNC_2(VAR_2, VAR_3, FUNC_0(VAR_0),
                                "rlimit entry's name does not begin with 'RLIMIT_', refusing: %s",
                                FUNC_3(VAR_2));

        VAR_6 = FUNC_4(VAR_5);
        if (VAR_6 < 0)
                return FUNC_2(VAR_2, VAR_3, FUNC_0(VAR_0),
                                "rlimit name unknown: %s", FUNC_3(VAR_2));

        *VAR_7 = VAR_6;
        return 0;
}
