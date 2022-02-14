
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const sd_device ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,char const*,int) ;

int FUNC_2(sd_device *VAR_0, const char *VAR_1, const char *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, 0);
        if (VAR_3 < 0)
                return VAR_3;

        if (VAR_1[0] != '.') {
                VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, 1);
                if (VAR_3 < 0)
                        return VAR_3;
        }

        return 0;
}
