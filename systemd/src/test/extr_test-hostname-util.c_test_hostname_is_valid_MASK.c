
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_0(FUNC_1("foobar", 0));
        FUNC_0(FUNC_1("foobar.com", 0));
        FUNC_0(!FUNC_1("foobar.com.", 0));
        FUNC_0(FUNC_1("fooBAR", 0));
        FUNC_0(FUNC_1("fooBAR.com", 0));
        FUNC_0(!FUNC_1("fooBAR.", 0));
        FUNC_0(!FUNC_1("fooBAR.com.", 0));
        FUNC_0(!FUNC_1("fööbar", 0));
        FUNC_0(!FUNC_1("", 0));
        FUNC_0(!FUNC_1(".", 0));
        FUNC_0(!FUNC_1("..", 0));
        FUNC_0(!FUNC_1("foobar.", 0));
        FUNC_0(!FUNC_1(".foobar", 0));
        FUNC_0(!FUNC_1("foo..bar", 0));
        FUNC_0(!FUNC_1("foo.bar..", 0));
        FUNC_0(!FUNC_1("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 0));
        FUNC_0(!FUNC_1("au-xph5-rvgrdsb5hcxc-47et3a5vvkrc-server-wyoz4elpdpe3.openstack.local", 0));

        FUNC_0(FUNC_1("foobar", 1));
        FUNC_0(FUNC_1("foobar.com", 1));
        FUNC_0(FUNC_1("foobar.com.", 1));
        FUNC_0(FUNC_1("fooBAR", 1));
        FUNC_0(FUNC_1("fooBAR.com", 1));
        FUNC_0(!FUNC_1("fooBAR.", 1));
        FUNC_0(FUNC_1("fooBAR.com.", 1));
        FUNC_0(!FUNC_1("fööbar", 1));
        FUNC_0(!FUNC_1("", 1));
        FUNC_0(!FUNC_1(".", 1));
        FUNC_0(!FUNC_1("..", 1));
        FUNC_0(!FUNC_1("foobar.", 1));
        FUNC_0(!FUNC_1(".foobar", 1));
        FUNC_0(!FUNC_1("foo..bar", 1));
        FUNC_0(!FUNC_1("foo.bar..", 1));
        FUNC_0(!FUNC_1("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 1));
}
