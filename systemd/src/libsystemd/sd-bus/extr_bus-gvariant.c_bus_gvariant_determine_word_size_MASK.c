
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0(size_t VAR_0, size_t VAR_1) {
        if (VAR_0 + VAR_1 <= 0xFF)
                return 1;
        else if (VAR_0 + VAR_1*2 <= 0xFFFF)
                return 2;
        else if (VAR_0 + VAR_1*4 <= 0xFFFFFFFF)
                return 4;
        else
                return 8;
}
