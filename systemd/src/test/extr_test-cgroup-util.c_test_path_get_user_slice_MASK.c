
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,int ,char*) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("/user.slice", -VAR_0, ((void*)0));
        FUNC_0("/foobar", -VAR_0, ((void*)0));
        FUNC_0("/user.slice/user-waldo.slice", -VAR_0, ((void*)0));
        FUNC_0("", -VAR_0, ((void*)0));
        FUNC_0("foobar", -VAR_0, ((void*)0));
        FUNC_0("foobar.slice", -VAR_0, ((void*)0));
        FUNC_0("foo.slice/foo-bar.slice/waldo.service", -VAR_0, ((void*)0));

        FUNC_0("foo.slice/foo-bar.slice/user@1000.service", 0, VAR_1);
        FUNC_0("foo.slice/foo-bar.slice/user@1000.service/", 0, VAR_1);
        FUNC_0("foo.slice/foo-bar.slice/user@1000.service///", 0, VAR_1);
        FUNC_0("foo.slice/foo-bar.slice/user@1000.service/waldo.service", 0, VAR_1);
        FUNC_0("foo.slice/foo-bar.slice/user@1000.service/piep.slice/foo.service", 0, "piep.slice");
        FUNC_0("/foo.slice//foo-bar.slice/user@1000.service/piep.slice//piep-pap.slice//foo.service", 0, "piep-pap.slice");
}
