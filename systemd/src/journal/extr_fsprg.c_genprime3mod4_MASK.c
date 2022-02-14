
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int gcry_mpi_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,size_t,void const*,size_t,int ) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int*,size_t) ;

__attribute__((used)) static gcry_mpi_t FUNC_5(int VAR_0, const void *VAR_1, size_t VAR_2, uint32_t VAR_3) {
        size_t VAR_4 = VAR_0 / 8;
        uint8_t VAR_5[VAR_4];
        gcry_mpi_t VAR_6;

        FUNC_0(VAR_0 % 8 == 0);
        FUNC_0(VAR_4 > 0);

        FUNC_1(VAR_5, VAR_4, VAR_1, VAR_2, VAR_3);
        VAR_5[0] |= 0xc0;
        VAR_5[VAR_4 - 1] |= 0x03;

        VAR_6 = FUNC_4(VAR_5, VAR_4);
        while (FUNC_3(VAR_6, 0))
                FUNC_2(VAR_6, VAR_6, 4);

        return VAR_6;
}
