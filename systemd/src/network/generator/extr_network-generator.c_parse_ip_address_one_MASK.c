
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char const*,union in_addr_union*) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (char const*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_2, const char **VAR_3, union in_addr_union *VAR_4) {
        const char *VAR_5 = *VAR_3, *VAR_6, *VAR_7;
        int VAR_8;

        if (VAR_5[0] == ':') {
                *VAR_3 = VAR_5 + 1;
                return 0;
        }

        if (VAR_2 == VAR_0) {
                if (VAR_5[0] != '[')
                        return -VAR_1;

                VAR_6 = FUNC_1(VAR_5 + 1, ']');
                if (!VAR_6)
                        return -VAR_1;

                if (VAR_6[1] != ':')
                        return -VAR_1;

                VAR_7 = FUNC_2(VAR_5 + 1, VAR_6 - VAR_5 - 1);
                VAR_5 = VAR_6 + 2;
        } else {
                VAR_6 = FUNC_1(VAR_5, ':');
                if (!VAR_6)
                        return -VAR_1;

                VAR_7 = FUNC_2(VAR_5, VAR_6 - VAR_5);
                VAR_5 = VAR_6 + 1;
        }

        VAR_8 = FUNC_0(VAR_2, VAR_7, VAR_4);
        if (VAR_8 < 0)
                return VAR_8;

        *VAR_3 = VAR_5;
        return 1;
}
