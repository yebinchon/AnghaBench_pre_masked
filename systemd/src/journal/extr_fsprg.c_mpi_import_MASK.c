
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gcry_mpi_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,void const*,size_t,int *) ;

__attribute__((used)) static gcry_mpi_t FUNC_5(const void *VAR_1, size_t VAR_2) {
        gcry_mpi_t VAR_3;
        unsigned VAR_4;

        FUNC_1(FUNC_4(&VAR_3, VAR_0, VAR_1, VAR_2, ((void*)0)) == 0);
        VAR_4 = (FUNC_3(VAR_3) + 7) / 8;
        FUNC_0(VAR_4 <= VAR_2);
        FUNC_0(FUNC_2(VAR_3, 0) >= 0);

        return VAR_3;
}
