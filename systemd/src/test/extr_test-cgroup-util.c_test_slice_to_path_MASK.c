
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("foobar.slice", "foobar.slice", 0);
        FUNC_0("foobar-waldo.slice", "foobar.slice/foobar-waldo.slice", 0);
        FUNC_0("foobar-waldo.service", ((void*)0), -VAR_0);
        FUNC_0(VAR_1, "", 0);
        FUNC_0("--.slice", ((void*)0), -VAR_0);
        FUNC_0("-", ((void*)0), -VAR_0);
        FUNC_0("-foo-.slice", ((void*)0), -VAR_0);
        FUNC_0("-foo.slice", ((void*)0), -VAR_0);
        FUNC_0("foo-.slice", ((void*)0), -VAR_0);
        FUNC_0("foo--bar.slice", ((void*)0), -VAR_0);
        FUNC_0("foo.slice/foo--bar.slice", ((void*)0), -VAR_0);
        FUNC_0("a-b.slice", "a.slice/a-b.slice", 0);
        FUNC_0("a-b-c-d-e.slice", "a.slice/a-b.slice/a-b-c.slice/a-b-c-d.slice/a-b-c-d-e.slice", 0);

        FUNC_0("foobar@.slice", ((void*)0), -VAR_0);
        FUNC_0("foobar@waldo.slice", ((void*)0), -VAR_0);
        FUNC_0("foobar@waldo.service", ((void*)0), -VAR_0);
        FUNC_0("-foo@-.slice", ((void*)0), -VAR_0);
        FUNC_0("-foo@.slice", ((void*)0), -VAR_0);
        FUNC_0("foo@-.slice", ((void*)0), -VAR_0);
        FUNC_0("foo@@bar.slice", ((void*)0), -VAR_0);
        FUNC_0("foo.slice/foo@@bar.slice", ((void*)0), -VAR_0);
}
