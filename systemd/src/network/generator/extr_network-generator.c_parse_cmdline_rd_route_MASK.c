
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;
typedef int Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int,union in_addr_union*,unsigned char*) ;
 int FUNC_1 (int *,char const*,int,unsigned char,union in_addr_union*,union in_addr_union*) ;
 int FUNC_2 (int,char const**,union in_addr_union*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char const*,char) ;
 char* FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*,int) ;

__attribute__((used)) static int FUNC_7(Context *VAR_3, const char *VAR_4, const char *VAR_5) {
        union in_addr_union VAR_6 = {}, VAR_7 = {};
        unsigned char VAR_8;
        const char *VAR_9, *VAR_10;
        int VAR_11, VAR_12;



        if (FUNC_3(VAR_4, VAR_5))
                return -VAR_2;

        if (VAR_5[0] == '[') {
                VAR_10 = FUNC_4(VAR_5, ']');
                if (!VAR_10)
                        return -VAR_2;

                if (VAR_10[1] != ':')
                        return -VAR_2;

                VAR_9 = FUNC_6(VAR_5 + 1, VAR_10 - VAR_5 - 1);
                VAR_5 = VAR_10 + 2;
                VAR_11 = VAR_1;
        } else {
                VAR_10 = FUNC_4(VAR_5, ':');
                if (!VAR_10)
                        return -VAR_2;

                VAR_9 = FUNC_6(VAR_5, VAR_10 - VAR_5);
                VAR_5 = VAR_10 + 1;
                VAR_11 = VAR_0;
        }

        VAR_12 = FUNC_0(VAR_9, VAR_11, &VAR_6, &VAR_8);
        if (VAR_12 < 0)
                return VAR_12;

        VAR_10 = FUNC_4(VAR_5, ':');
        if (!VAR_10)
                VAR_5 = FUNC_5(VAR_5, ":");

        VAR_12 = FUNC_2(VAR_11, &VAR_5, &VAR_7);
        if (VAR_12 < 0)
                return VAR_12;

        return FUNC_1(VAR_3, VAR_5, VAR_11, VAR_8, &VAR_6, &VAR_7);
}
