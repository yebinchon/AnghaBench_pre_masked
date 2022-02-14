
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const sd_device ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int ) ;
 int FUNC_2 (char const*,char const*,char const**) ;

__attribute__((used)) static bool FUNC_3(sd_device *VAR_0, const char *VAR_1, const char *VAR_2) {
        const char *VAR_3;
        int VAR_4;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_3);
        if (VAR_4 < 0)
                return 0;

        if (!VAR_2)
                return 1;

        if (FUNC_1(VAR_2, VAR_3, 0) == 0)
                return 1;

        return 0;
}
