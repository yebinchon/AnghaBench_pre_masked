
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
typedef int gcry_mpi_t ;


 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int *,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,void const*,size_t,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (void*,int,int ) ;
 int FUNC_9 (void const*,int) ;
 int FUNC_10 (void const*) ;
 int FUNC_11 (void*,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (void*,int,int ) ;

void FUNC_14(void *VAR_1, uint64_t VAR_2, const void *VAR_3, const void *VAR_4, size_t VAR_5) {
        gcry_mpi_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
        uint16_t VAR_15;

        FUNC_7(0);

        VAR_15 = FUNC_10(VAR_3 + 0);
        VAR_6 = FUNC_9(VAR_3 + 2 + 0 * (VAR_15 / 2) / 8, (VAR_15 / 2) / 8);
        VAR_7 = FUNC_9(VAR_3 + 2 + 1 * (VAR_15 / 2) / 8, (VAR_15 / 2) / 8);

        VAR_8 = FUNC_3(0);
        FUNC_2(VAR_8, VAR_6, VAR_7);

        VAR_9 = FUNC_6(VAR_8, VAR_4, VAR_5, VAR_0, VAR_15);
        FUNC_1(&VAR_10, &VAR_11, VAR_9, VAR_6, VAR_7);

        VAR_12 = FUNC_12(VAR_2, VAR_6);
        VAR_13 = FUNC_12(VAR_2, VAR_7);

        FUNC_4(VAR_10, VAR_10, VAR_12, VAR_6);
        FUNC_4(VAR_11, VAR_11, VAR_13, VAR_7);

        FUNC_0(&VAR_14, VAR_10, VAR_11, VAR_6, VAR_7);

        FUNC_11(VAR_1 + 0, VAR_15);
        FUNC_8(VAR_1 + 2 + 0 * VAR_15 / 8, VAR_15 / 8, VAR_8);
        FUNC_8(VAR_1 + 2 + 1 * VAR_15 / 8, VAR_15 / 8, VAR_14);
        FUNC_13(VAR_1 + 2 + 2 * VAR_15 / 8, 8, VAR_2);

        FUNC_5(VAR_6);
        FUNC_5(VAR_7);
        FUNC_5(VAR_8);
        FUNC_5(VAR_9);
        FUNC_5(VAR_10);
        FUNC_5(VAR_11);
        FUNC_5(VAR_12);
        FUNC_5(VAR_13);
        FUNC_5(VAR_14);
}
