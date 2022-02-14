
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DnsResourceRecord ;


 int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (int **,int **) ;

__attribute__((used)) static int FUNC_3(DnsResourceRecord **VAR_0, unsigned VAR_1, DnsResourceRecord **VAR_2, unsigned VAR_3) {
        unsigned VAR_4;
        int VAR_5;

        VAR_4 = FUNC_1(VAR_1, VAR_3);
        for (unsigned VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
                VAR_5 = FUNC_2(&VAR_0[VAR_6], &VAR_2[VAR_6]);
                if (VAR_5 != 0)
                        return VAR_5;
        }

        return FUNC_0(VAR_1, VAR_3);
}
