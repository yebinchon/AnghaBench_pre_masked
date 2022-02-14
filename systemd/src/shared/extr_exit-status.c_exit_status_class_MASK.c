
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int class; } ;


 size_t FUNC_0 (TYPE_1__*) ;




 TYPE_1__* VAR_0 ;

const char* FUNC_1(int VAR_1) {
        if (VAR_1 < 0 || (size_t) VAR_1 >= FUNC_0(VAR_0))
                return ((void*)0);

        switch (VAR_0[VAR_1].class) {
        case 130:
                return "libc";
        case 128:
                return "systemd";
        case 129:
                return "LSB";
        case 131:
                return "BSD";
        default: return ((void*)0);
        }
}
