
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("/user.slice/user-1000.slice/session-2.scope/foobar.service", 0, "foobar.service");
        FUNC_0("/user.slice/user-1000.slice/session-2.scope/waldo.slice/foobar.service", 0, "foobar.service");
        FUNC_0("/user.slice/user-1002.slice/session-2.scope/foobar.service/waldo", 0, "foobar.service");
        FUNC_0("/user.slice/user-1000.slice/session-2.scope/foobar.service/waldo/uuuux", 0, "foobar.service");
        FUNC_0("/user.slice/user-1000.slice/session-2.scope/waldo/waldo/uuuux", -VAR_0, ((void*)0));
        FUNC_0("/user.slice/user-1000.slice/session-2.scope/foobar@pie.service/pa/po", 0, "foobar@pie.service");
        FUNC_0("/session-2.scope/foobar@pie.service/pa/po", 0, "foobar@pie.service");
        FUNC_0("/xyz.slice/xyz-waldo.slice/session-77.scope/foobar@pie.service/pa/po", 0, "foobar@pie.service");
        FUNC_0("/meh.service", -VAR_0, ((void*)0));
        FUNC_0("/session-3.scope/_cpu.service", 0, "cpu.service");
        FUNC_0("/user.slice/user-1000.slice/user@1000.service/server.service", 0, "server.service");
        FUNC_0("/user.slice/user-1000.slice/user@1000.service/foobar.slice/foobar@pie.service", 0, "foobar@pie.service");
        FUNC_0("/user.slice/user-1000.slice/user@.service/server.service", -VAR_0, ((void*)0));
}
