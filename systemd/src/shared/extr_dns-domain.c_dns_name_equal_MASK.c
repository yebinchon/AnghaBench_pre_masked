
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const**,char*,int,int ) ;

int FUNC_3(const char *VAR_1, const char *VAR_2) {
        int VAR_3, VAR_4;

        FUNC_1(VAR_1);
        FUNC_1(VAR_2);

        for (;;) {
                char VAR_5[VAR_0], VAR_6[VAR_0];

                VAR_3 = FUNC_2(&VAR_1, VAR_5, sizeof VAR_5, 0);
                if (VAR_3 < 0)
                        return VAR_3;

                VAR_4 = FUNC_2(&VAR_2, VAR_6, sizeof VAR_6, 0);
                if (VAR_4 < 0)
                        return VAR_4;

                if (VAR_3 != VAR_4)
                        return 0;
                if (VAR_3 == 0)
                        return 1;

                if (FUNC_0(VAR_5, VAR_6, VAR_3) != 0)
                        return 0;
        }
}
