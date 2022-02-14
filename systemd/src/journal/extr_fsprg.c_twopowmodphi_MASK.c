
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef int gcry_mpi_t ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int const,int) ;

__attribute__((used)) static gcry_mpi_t FUNC_8(uint64_t VAR_0, const gcry_mpi_t VAR_1) {
        gcry_mpi_t VAR_2, VAR_3;
        int VAR_4;

        VAR_2 = FUNC_3(0);
        FUNC_7(VAR_2, VAR_1, 1);


        for (VAR_4 = 0; (1ULL << VAR_4) <= VAR_0; VAR_4++)
                ;

        VAR_3 = FUNC_3(0);
        FUNC_5(VAR_3, 1);
        while (VAR_4) {
                VAR_4--;
                FUNC_2(VAR_3, VAR_3, VAR_3, VAR_2);
                if (VAR_0 & ((uint64_t)1 << VAR_4)) {
                        FUNC_0(VAR_3, VAR_3, VAR_3);
                        if (FUNC_1(VAR_3, VAR_2) >= 0)
                                FUNC_6(VAR_3, VAR_3, VAR_2);
                }
        }

        FUNC_4(VAR_2);
        return VAR_3;
}
