
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;
typedef int Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int *,char const*,int,unsigned char,union in_addr_union*,union in_addr_union*) ;
 int FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 (int *,char const*,char const*) ;
 int FUNC_4 (int *,char const*,char const*) ;
 int FUNC_5 (int *,char const*,int,int ,int *,union in_addr_union*) ;
 int FUNC_6 (int *,char const*,int ,char const*) ;
 int FUNC_7 (int,char const**,union in_addr_union*) ;
 int FUNC_8 (int,char const**,unsigned char*) ;
 char* FUNC_9 (char const*,char) ;
 char* FUNC_10 (char const*,int) ;

__attribute__((used)) static int FUNC_11(Context *VAR_2, int VAR_3, const char *VAR_4) {
        union in_addr_union VAR_5 = {}, VAR_6 = {}, VAR_7 = {};
        const char *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;
        unsigned char VAR_13;
        int VAR_14;




        VAR_14 = FUNC_7(VAR_3, &VAR_4, &VAR_5);
        if (VAR_14 < 0)
                return VAR_14;
        VAR_14 = FUNC_7(VAR_3, &VAR_4, &VAR_6);
        if (VAR_14 < 0)
                return VAR_14;
        VAR_14 = FUNC_7(VAR_3, &VAR_4, &VAR_7);
        if (VAR_14 < 0)
                return VAR_14;
        VAR_14 = FUNC_8(VAR_3, &VAR_4, &VAR_13);
        if (VAR_14 < 0)
                return VAR_14;


        VAR_12 = FUNC_9(VAR_4, ':');
        if (!VAR_12)
                return -VAR_1;

        VAR_8 = FUNC_10(VAR_4, VAR_12 - VAR_4);
        if (!FUNC_0(VAR_8, 0))
                return -VAR_1;

        VAR_4 = VAR_12 + 1;


        VAR_12 = FUNC_9(VAR_4, ':');
        if (!VAR_12)
                return -VAR_1;

        VAR_9 = FUNC_10(VAR_4, VAR_12 - VAR_4);

        VAR_4 = VAR_12 + 1;


        VAR_12 = FUNC_9(VAR_4, ':');
        if (!VAR_12)
                VAR_10 = VAR_4;
        else
                VAR_10 = FUNC_10(VAR_4, VAR_12 - VAR_4);

        VAR_14 = FUNC_2(VAR_2, VAR_9, VAR_10);
        if (VAR_14 < 0)
                return VAR_14;


        VAR_14 = FUNC_4(VAR_2, VAR_9, VAR_8);
        if (VAR_14 < 0)
                return VAR_14;

        VAR_14 = FUNC_1(VAR_2, VAR_9, VAR_3, VAR_13, &VAR_5, &VAR_6);
        if (VAR_14 < 0)
                return VAR_14;

        VAR_14 = FUNC_5(VAR_2, VAR_9, VAR_3, 0, ((void*)0), &VAR_7);
        if (VAR_14 < 0)
                return VAR_14;

        if (!VAR_12)
                return 0;


        VAR_14 = FUNC_6(VAR_2, VAR_9, VAR_0, VAR_12 + 1);
        if (VAR_14 >= 0)
                return 0;


        VAR_4 = VAR_12 + 1;
        VAR_12 = FUNC_9(VAR_4, ':');
        if (!VAR_12) {
                VAR_14 = FUNC_3(VAR_2, VAR_9, VAR_4);
                if (VAR_14 < 0)
                        return VAR_14;
        } else {
                VAR_11 = FUNC_10(VAR_4, VAR_12 - VAR_4);
                VAR_14 = FUNC_3(VAR_2, VAR_9, VAR_11);
                if (VAR_14 < 0)
                        return VAR_14;
                VAR_14 = FUNC_3(VAR_2, VAR_9, VAR_12 + 1);
                if (VAR_14 < 0)
                        return VAR_14;
        }

        return 0;
}
