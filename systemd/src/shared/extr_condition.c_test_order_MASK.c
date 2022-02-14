
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OrderOperator ;
 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(int VAR_0, OrderOperator VAR_1) {

        switch (VAR_1) {

        case 130:
                return VAR_0 < 0;

        case 129:
                return VAR_0 <= 0;

        case 133:
                return VAR_0 == 0;

        case 128:
                return VAR_0 != 0;

        case 131:
                return VAR_0 >= 0;

        case 132:
                return VAR_0 > 0;

        default:
                FUNC_0("unknown order");

        }
}
