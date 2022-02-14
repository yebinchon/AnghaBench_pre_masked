
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
typedef int gcry_mpi_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int,int ) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,int,int ) ;
 int FUNC_7 (void*,int) ;

void FUNC_8(void *VAR_0) {
        gcry_mpi_t VAR_1, VAR_2;
        uint16_t VAR_3;
        uint64_t VAR_4;

        FUNC_2(0);

        VAR_3 = FUNC_5(VAR_0 + 0);
        VAR_1 = FUNC_4(VAR_0 + 2 + 0 * VAR_3 / 8, VAR_3 / 8);
        VAR_2 = FUNC_4(VAR_0 + 2 + 1 * VAR_3 / 8, VAR_3 / 8);
        VAR_4 = FUNC_7(VAR_0 + 2 + 2 * VAR_3 / 8, 8);

        FUNC_0(VAR_2, VAR_2, VAR_2, VAR_1);
        VAR_4++;

        FUNC_3(VAR_0 + 2 + 1 * VAR_3 / 8, VAR_3 / 8, VAR_2);
        FUNC_6(VAR_0 + 2 + 2 * VAR_3 / 8, 8, VAR_4);

        FUNC_1(VAR_1);
        FUNC_1(VAR_2);
}
