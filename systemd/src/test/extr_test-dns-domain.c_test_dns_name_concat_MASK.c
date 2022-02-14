
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int ,char*) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("", "", 0, ".");
        FUNC_0(".", "", 0, ".");
        FUNC_0("", ".", 0, ".");
        FUNC_0(".", ".", 0, ".");
        FUNC_0("foo", "bar", 0, "foo.bar");
        FUNC_0("foo.foo", "bar.bar", 0, "foo.foo.bar.bar");
        FUNC_0("foo", ((void*)0), 0, "foo");
        FUNC_0("foo", ".", 0, "foo");
        FUNC_0("foo.", "bar.", 0, "foo.bar");
        FUNC_0(((void*)0), ((void*)0), 0, ".");
        FUNC_0(((void*)0), ".", 0, ".");
        FUNC_0(((void*)0), "foo", 0, "foo");
}
