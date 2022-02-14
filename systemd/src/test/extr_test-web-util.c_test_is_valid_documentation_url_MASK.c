
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_0(FUNC_1("http://www.freedesktop.org/wiki/Software/systemd"));
        FUNC_0(FUNC_1("https://www.kernel.org/doc/Documentation/binfmt_misc.txt"));
        FUNC_0(FUNC_1("https://www.kernel.org/doc/Documentation/admin-guide/binfmt-misc.rst"));
        FUNC_0(FUNC_1("https://www.kernel.org/doc/html/latest/admin-guide/binfmt-misc.html"));
        FUNC_0(FUNC_1("file:/foo/foo"));
        FUNC_0(FUNC_1("man:systemd.special(7)"));
        FUNC_0(FUNC_1("info:bar"));

        FUNC_0(!FUNC_1("foo:"));
        FUNC_0(!FUNC_1("info:"));
        FUNC_0(!FUNC_1(""));
}
