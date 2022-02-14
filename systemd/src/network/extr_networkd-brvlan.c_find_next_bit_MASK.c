
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_0, uint32_t VAR_1) {
        int VAR_2;

        if (VAR_0 >= 32)
                return -1;


        if (VAR_0 < 0)
                return FUNC_0(VAR_1);


        VAR_2 = FUNC_1(VAR_1 >> VAR_0);
        return VAR_2 ? VAR_2 + VAR_0 : 0;
}
