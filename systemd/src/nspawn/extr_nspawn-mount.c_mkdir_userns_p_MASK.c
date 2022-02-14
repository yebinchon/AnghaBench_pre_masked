
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*,int ,int ) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_1, const char *VAR_2, mode_t VAR_3, uid_t VAR_4) {
        const char *VAR_5, *VAR_6;
        int VAR_7;

        FUNC_0(VAR_2);

        if (VAR_1 && !FUNC_3(VAR_2, VAR_1))
                return -VAR_0;


        VAR_5 = VAR_2 + FUNC_6(VAR_2, "/");
        for (;;) {
                char VAR_8[FUNC_5(VAR_2) + 1];

                VAR_6 = VAR_5 + FUNC_4(VAR_5, "/");
                VAR_5 = VAR_6 + FUNC_6(VAR_6, "/");


                if (*VAR_5 == 0)
                        break;

                FUNC_1(VAR_8, VAR_2, VAR_6 - VAR_2);
                VAR_8[VAR_6-VAR_2] = 0;

                if (VAR_1 && FUNC_3(VAR_1, VAR_8))
                        continue;

                VAR_7 = FUNC_2(VAR_8, VAR_3, VAR_4);
                if (VAR_7 < 0)
                        return VAR_7;
        }

        return FUNC_2(VAR_2, VAR_3, VAR_4);
}
