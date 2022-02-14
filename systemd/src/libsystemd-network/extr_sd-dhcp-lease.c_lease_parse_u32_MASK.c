
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int be32_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ const*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(const uint8_t *VAR_1, size_t VAR_2, uint32_t *VAR_3, uint32_t VAR_4) {
        FUNC_0(VAR_1);
        FUNC_0(VAR_3);

        if (VAR_2 != 4)
                return -VAR_0;

        *VAR_3 = FUNC_1((be32_t*) VAR_1);
        if (*VAR_3 < VAR_4)
                *VAR_3 = VAR_4;

        return 0;
}
