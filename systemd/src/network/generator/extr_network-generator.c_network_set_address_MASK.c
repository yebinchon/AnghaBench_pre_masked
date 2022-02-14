
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;
typedef int Network ;
typedef int Context ;


 int VAR_0 ;
 int FUNC_0 (int *,int,unsigned char,union in_addr_union*,union in_addr_union*,int *) ;
 scalar_t__ FUNC_1 (int,union in_addr_union*) ;
 int * FUNC_2 (int *,char const*) ;

__attribute__((used)) static int FUNC_3(Context *VAR_1, const char *VAR_2, int VAR_3, unsigned char VAR_4,
                               union in_addr_union *VAR_5, union in_addr_union *VAR_6) {
        Network *VAR_7;

        if (FUNC_1(VAR_3, VAR_5) != 0)
                return 0;

        VAR_7 = FUNC_2(VAR_1, VAR_2);
        if (!VAR_7)
                return -VAR_0;

        return FUNC_0(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6, ((void*)0));
}
