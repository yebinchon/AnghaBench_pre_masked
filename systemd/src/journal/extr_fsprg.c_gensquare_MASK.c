
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int gcry_mpi_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,size_t,void const*,size_t,int ) ;
 scalar_t__ FUNC_2 (int ,int const) ;
 int FUNC_3 (int ,int ,int ,int const) ;
 int FUNC_4 (int*,size_t) ;

__attribute__((used)) static gcry_mpi_t FUNC_5(const gcry_mpi_t VAR_0, const void *VAR_1, size_t VAR_2, uint32_t VAR_3, unsigned VAR_4) {
        size_t VAR_5 = VAR_4 / 8;
        uint8_t VAR_6[VAR_5];
        gcry_mpi_t VAR_7;

        FUNC_1(VAR_6, VAR_5, VAR_1, VAR_2, VAR_3);
        VAR_6[0] &= 0x7f;
        VAR_7 = FUNC_4(VAR_6, VAR_5);
        FUNC_0(FUNC_2(VAR_7, VAR_0) < 0);
        FUNC_3(VAR_7, VAR_7, VAR_7, VAR_0);
        return VAR_7;
}
