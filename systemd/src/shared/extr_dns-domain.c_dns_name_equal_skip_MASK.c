
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,unsigned int,char const**) ;

int FUNC_3(const char *VAR_0, unsigned VAR_1, const char *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_2);

        VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_0);
        if (VAR_3 <= 0)
                return VAR_3;

        return FUNC_1(VAR_0, VAR_2);
}
