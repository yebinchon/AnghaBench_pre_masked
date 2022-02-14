
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void) {

        FUNC_1("/dev/null");
        FUNC_1("/dev/zero");
        FUNC_1("/dev/full");
        FUNC_1("/dev/random");
        FUNC_1("/dev/urandom");
        FUNC_1("/dev/tty");

        if (FUNC_0("/run/systemd/inaccessible/chr") > 0) {
                FUNC_1("/run/systemd/inaccessible/chr");
                FUNC_1("/run/systemd/inaccessible/blk");
        }
}
