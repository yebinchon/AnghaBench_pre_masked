
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,char*,char const*) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, JsonVariant *VAR_2, JsonDispatchFlags VAR_3, void *VAR_4) {
        const char *VAR_5;

        VAR_5 = FUNC_1(VAR_2);

        if (FUNC_2(VAR_5, "shared"))
                return 0;

        FUNC_0(VAR_2, VAR_3|VAR_0, 0, "Ignoring rootfsPropagation setting '%s'.", VAR_5);
        return 0;
}
