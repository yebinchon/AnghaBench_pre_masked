
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("foo123bar", "foo123bar");
        FUNC_0("foo.bar", "foo_2ebar");
        FUNC_0("foo_2ebar", "foo_5f2ebar");
        FUNC_0("", "_");
        FUNC_0("_", "_5f");
        FUNC_0("1", "_31");
        FUNC_0(":1", "_3a1");
}
