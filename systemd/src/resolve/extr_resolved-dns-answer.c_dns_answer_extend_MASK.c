
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DnsAnswer ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *,int *,int **) ;
 int FUNC_2 (int *) ;

int FUNC_3(DnsAnswer **VAR_0, DnsAnswer *VAR_1) {
        DnsAnswer *VAR_2;
        int VAR_3;

        FUNC_0(VAR_0);

        VAR_3 = FUNC_1(*VAR_0, VAR_1, &VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        FUNC_2(*VAR_0);
        *VAR_0 = VAR_2;

        return 0;
}
