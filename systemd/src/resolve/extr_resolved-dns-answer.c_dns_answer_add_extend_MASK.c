
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * DnsResourceRecord ;
typedef int DnsAnswerFlags ;
typedef int DnsAnswer ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *,int **,int,int ) ;
 int FUNC_2 (int **,int) ;

int FUNC_3(DnsAnswer **VAR_0, DnsResourceRecord *VAR_1, int VAR_2, DnsAnswerFlags VAR_3) {
        int VAR_4;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_4 = FUNC_2(VAR_0, 1);
        if (VAR_4 < 0)
                return VAR_4;

        return FUNC_1(*VAR_0, VAR_1, VAR_2, VAR_3);
}
