
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int option_type ;


 int FUNC_0 (int ) ;




__attribute__((used)) static char const* FUNC_1(option_type VAR_0) {
    switch (VAR_0) {
        case 128:
            return "[required]";
        case 129:
            return "[optional]";
        case 130:
            return "";
        default:
            FUNC_0(0);
            return ((void*)0);
    }
}
