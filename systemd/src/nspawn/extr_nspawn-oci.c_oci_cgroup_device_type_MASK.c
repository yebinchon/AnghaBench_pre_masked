
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,int ,int ,char*,char const*) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, JsonVariant *VAR_4, JsonDispatchFlags VAR_5, void *VAR_6) {
        mode_t *VAR_7 = VAR_6;
        const char *VAR_8;

        FUNC_1(VAR_8 = FUNC_3(VAR_4));

        if (FUNC_4(VAR_8, "c"))
                *VAR_7 = VAR_2;
        else if (FUNC_4(VAR_8, "b"))
                *VAR_7 = VAR_1;
        else
                return FUNC_2(VAR_4, VAR_5, FUNC_0(VAR_0),
                                "Control group device type unknown: %s", VAR_8);

        return 0;
}
