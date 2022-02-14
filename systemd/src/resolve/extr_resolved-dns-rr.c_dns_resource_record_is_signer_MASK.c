
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DnsResourceRecord ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int *,char const**) ;

int FUNC_3(DnsResourceRecord *VAR_0, const char *VAR_1) {
        const char *VAR_2;
        int VAR_3;

        FUNC_0(VAR_0);

        VAR_3 = FUNC_2(VAR_0, &VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        return FUNC_1(VAR_1, VAR_2);
}
