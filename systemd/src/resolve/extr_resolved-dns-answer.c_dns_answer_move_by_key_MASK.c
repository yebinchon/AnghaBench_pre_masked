
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * DnsResourceKey ;
typedef int DnsAnswerFlags ;
typedef int DnsAnswer ;


 int FUNC_0 (int * const*) ;
 int FUNC_1 (int **,int *,int * const*,int ) ;
 int FUNC_2 (int **,int * const*) ;

int FUNC_3(DnsAnswer **VAR_0, DnsAnswer **VAR_1, const DnsResourceKey *VAR_2, DnsAnswerFlags VAR_3) {
        int VAR_4;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        VAR_4 = FUNC_1(VAR_0, *VAR_1, VAR_2, VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        return FUNC_2(VAR_1, VAR_2);
}
