
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gcry_mpi_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const,int ) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int ,void*,unsigned int,size_t*,int const) ;
 int FUNC_4 (void*,size_t) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, size_t VAR_2, const gcry_mpi_t VAR_3) {
        unsigned VAR_4;
        size_t VAR_5;

        FUNC_0(FUNC_1(VAR_3, 0) >= 0);
        VAR_4 = (FUNC_2(VAR_3) + 7) / 8;
        FUNC_0(VAR_4 <= VAR_2);
        FUNC_4(VAR_1, VAR_2);
        FUNC_3(VAR_0, VAR_1 + (VAR_2 - VAR_4), VAR_4, &VAR_5, VAR_3);
        FUNC_0(VAR_5 == VAR_4);
}
