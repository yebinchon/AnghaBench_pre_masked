
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void) {



        if (FUNC_0("/usr") <= 0)
                return;

        FUNC_1("/usr appears to be on its own filesystem and is not already mounted. This is not a supported setup. "
                    "Some things will probably break (sometimes even silently) in mysterious ways. "
                    "Consult http://freedesktop.org/wiki/Software/systemd/separate-usr-is-broken for more information.");
}
