
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Context ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(Context *VAR_0, const char *VAR_1, const char *VAR_2) {
        int VAR_3;

        if (FUNC_2(VAR_1, VAR_2))
                return FUNC_0(VAR_0, "", 1);

        VAR_3 = FUNC_1(VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        return FUNC_0(VAR_0, "", VAR_3);
}
