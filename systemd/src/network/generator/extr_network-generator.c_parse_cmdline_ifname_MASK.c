
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_addr {int dummy; } ;
typedef int Context ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct ether_addr*) ;
 int FUNC_1 (int *,char const*,struct ether_addr*,int *) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 char* FUNC_3 (char const*,char) ;
 char* FUNC_4 (char const*,int) ;

__attribute__((used)) static int FUNC_5(Context *VAR_1, const char *VAR_2, const char *VAR_3) {
        struct ether_addr VAR_4;
        const char *VAR_5, *VAR_6;
        int VAR_7;



        if (FUNC_2(VAR_2, VAR_3))
                return -VAR_0;

        VAR_6 = FUNC_3(VAR_3, ':');
        if (!VAR_6)
                return -VAR_0;

        VAR_5 = FUNC_4(VAR_3, VAR_6 - VAR_3);

        VAR_7 = FUNC_0(VAR_6 + 1, &VAR_4);
        if (VAR_7 < 0)
                return VAR_7;

        return FUNC_1(VAR_1, VAR_5, &VAR_4, ((void*)0));
}
