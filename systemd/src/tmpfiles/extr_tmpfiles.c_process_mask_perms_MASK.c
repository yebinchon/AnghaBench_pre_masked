
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static mode_t FUNC_1(mode_t VAR_0, mode_t VAR_1) {

        if ((VAR_1 & 0111) == 0)
                VAR_0 &= ~0111;
        if ((VAR_1 & 0222) == 0)
                VAR_0 &= ~0222;
        if ((VAR_1 & 0444) == 0)
                VAR_0 &= ~0444;
        if (!FUNC_0(VAR_1))
                VAR_0 &= ~07000;

        return VAR_0;
}
