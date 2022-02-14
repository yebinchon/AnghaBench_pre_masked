
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,int ,int ,char*,char const*) ;
 char* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_5, JsonVariant *VAR_6, JsonDispatchFlags VAR_7, void *VAR_8) {
        mode_t *VAR_9 = VAR_8;
        const char *VAR_10;

        FUNC_2(VAR_9);
        FUNC_3(VAR_10 = FUNC_5(VAR_6));

        if (FUNC_0(VAR_10, "c", "u"))
                *VAR_9 = (*VAR_9 & ~VAR_4) | VAR_2;
        else if (FUNC_6(VAR_10, "b"))
                *VAR_9 = (*VAR_9 & ~VAR_4) | VAR_1;
        else if (FUNC_6(VAR_10, "p"))
                *VAR_9 = (*VAR_9 & ~VAR_4) | VAR_3;
        else
                return FUNC_4(VAR_6, VAR_7, FUNC_1(VAR_0),
                                "Unknown device type: %s", VAR_10);

        return 0;
}
