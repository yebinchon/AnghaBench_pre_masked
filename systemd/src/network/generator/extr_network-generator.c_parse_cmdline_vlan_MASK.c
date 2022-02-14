
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NetDev ;
typedef int Context ;


 int VAR_0 ;
 int * FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char*,char const*,int **) ;
 int FUNC_2 (int *,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char const*,char) ;
 char* FUNC_5 (char const*,int) ;

__attribute__((used)) static int FUNC_6(Context *VAR_1, const char *VAR_2, const char *VAR_3) {
        const char *VAR_4, *VAR_5;
        NetDev *VAR_6;
        int VAR_7;

        if (FUNC_3(VAR_2, VAR_3))
                return -VAR_0;

        VAR_5 = FUNC_4(VAR_3, ':');
        if (!VAR_5)
                return -VAR_0;

        VAR_4 = FUNC_5(VAR_3, VAR_5 - VAR_3);

        VAR_6 = FUNC_0(VAR_1, VAR_4);
        if (!VAR_6) {
                VAR_7 = FUNC_1(VAR_1, "vlan", VAR_4, &VAR_6);
                if (VAR_7 < 0)
                        return VAR_7;
        }

        return FUNC_2(VAR_1, VAR_5 + 1, VAR_4);
}
