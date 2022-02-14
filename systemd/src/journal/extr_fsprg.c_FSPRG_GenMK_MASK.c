
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int gcry_mpi_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int,void const*,size_t,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (void*,int,int ) ;
 int FUNC_10 (void*,int) ;

void FUNC_11(void *VAR_4, void *VAR_5, const void *VAR_6, size_t VAR_7, unsigned VAR_8) {
        uint8_t VAR_9[VAR_0];
        gcry_mpi_t VAR_10, VAR_11, VAR_12;
        uint16_t VAR_13;

        FUNC_0(VAR_8);
        VAR_13 = VAR_8;

        FUNC_8(0);

        if (!VAR_6) {
                FUNC_6(VAR_9, VAR_0, VAR_1);
                VAR_6 = VAR_9;
                VAR_7 = VAR_0;
        }

        VAR_11 = FUNC_7(VAR_13 / 2, VAR_6, VAR_7, VAR_2);
        VAR_12 = FUNC_7(VAR_13 / 2, VAR_6, VAR_7, VAR_3);

        if (VAR_4) {
                FUNC_10(VAR_4 + 0, VAR_13);
                FUNC_9(VAR_4 + 2 + 0 * (VAR_13 / 2) / 8, (VAR_13 / 2) / 8, VAR_11);
                FUNC_9(VAR_4 + 2 + 1 * (VAR_13 / 2) / 8, (VAR_13 / 2) / 8, VAR_12);
        }

        if (VAR_5) {
                VAR_10 = FUNC_4(0);
                FUNC_3(VAR_10, VAR_11, VAR_12);
                FUNC_1(FUNC_2(VAR_10) == VAR_13);

                FUNC_10(VAR_5 + 0, VAR_13);
                FUNC_9(VAR_5 + 2, VAR_13 / 8, VAR_10);

                FUNC_5(VAR_10);
        }

        FUNC_5(VAR_11);
        FUNC_5(VAR_12);
}
