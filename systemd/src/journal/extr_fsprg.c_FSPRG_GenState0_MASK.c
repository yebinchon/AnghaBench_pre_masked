
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int gcry_mpi_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void const*,size_t,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,void const*,int) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (void*,int,int ) ;
 int FUNC_6 (void const*,int) ;
 int FUNC_7 (void const*) ;

void FUNC_8(void *VAR_1, const void *VAR_2, const void *VAR_3, size_t VAR_4) {
        gcry_mpi_t VAR_5, VAR_6;
        uint16_t VAR_7;

        FUNC_2(0);

        VAR_7 = FUNC_7(VAR_2 + 0);
        VAR_5 = FUNC_6(VAR_2 + 2, VAR_7 / 8);
        VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_4, VAR_0, VAR_7);

        FUNC_3(VAR_1, VAR_2, 2 + VAR_7 / 8);
        FUNC_5(VAR_1 + 2 + 1 * VAR_7 / 8, VAR_7 / 8, VAR_6);
        FUNC_4(VAR_1 + 2 + 2 * VAR_7 / 8, 8);

        FUNC_0(VAR_5);
        FUNC_0(VAR_6);
}
