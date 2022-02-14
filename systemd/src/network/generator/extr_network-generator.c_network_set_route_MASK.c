
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;
typedef int Network ;
typedef int Context ;


 scalar_t__ FUNC_0 (int,union in_addr_union*) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char const*,int **) ;
 int FUNC_3 (int *,int,unsigned char,union in_addr_union*,union in_addr_union*,int *) ;

__attribute__((used)) static int FUNC_4(Context *VAR_0, const char *VAR_1, int VAR_2, unsigned char VAR_3,
                             union in_addr_union *VAR_4, union in_addr_union *VAR_5) {
        Network *VAR_6;
        int VAR_7;

        if (FUNC_0(VAR_2, VAR_5) != 0)
                return 0;

        VAR_6 = FUNC_1(VAR_0, VAR_1);
        if (!VAR_6) {
                VAR_7 = FUNC_2(VAR_0, VAR_1, &VAR_6);
                if (VAR_7 < 0)
                        return VAR_7;
        }

        return FUNC_3(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0));
}
