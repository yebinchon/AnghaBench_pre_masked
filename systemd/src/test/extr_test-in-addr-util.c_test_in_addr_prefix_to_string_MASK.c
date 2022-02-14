
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_1(VAR_0, "0.0.0.0/32");
        FUNC_1(VAR_0, "1.2.3.4/0");
        FUNC_1(VAR_0, "1.2.3.4/24");
        FUNC_1(VAR_0, "1.2.3.4/32");
        FUNC_1(VAR_0, "255.255.255.255/32");

        FUNC_1(VAR_1, "::1/128");
        FUNC_1(VAR_1, "fd00:abcd::1/64");
        FUNC_1(VAR_1, "fd00:abcd::1234:1/64");
        FUNC_1(VAR_1, "1111:2222:3333:4444:5555:6666:7777:8888/128");

        FUNC_0(VAR_0, "0.0.0.0");
        FUNC_0(VAR_0, "192.168.0.1");

        FUNC_0(VAR_1, "fd00:0000:0000:0000:0000:0000:0000:0001/64");
        FUNC_0(VAR_1, "fd00:1111::0000:2222:3333:4444:0001/64");
}
