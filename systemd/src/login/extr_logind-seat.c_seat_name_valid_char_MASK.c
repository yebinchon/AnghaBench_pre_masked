
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char,char,char) ;

__attribute__((used)) static bool FUNC_1(char VAR_0) {
        return
                (VAR_0 >= 'a' && VAR_0 <= 'z') ||
                (VAR_0 >= 'A' && VAR_0 <= 'Z') ||
                (VAR_0 >= '0' && VAR_0 <= '9') ||
                FUNC_0(VAR_0, '-', '_');
}
