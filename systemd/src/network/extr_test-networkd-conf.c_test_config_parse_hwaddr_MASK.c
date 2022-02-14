
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_addr {int ether_addr_octet; } ;


 int FUNC_0 (char*,int ,struct ether_addr const*) ;
 int FUNC_1 (char*,struct ether_addr const*,int) ;

__attribute__((used)) static void FUNC_2(void) {
        const struct ether_addr VAR_0[] = {
                { .ether_addr_octet = { 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff } },
                { .ether_addr_octet = { 0x01, 0x23, 0x45, 0x67, 0x89, 0xab } },
        };

        FUNC_0("", 0, ((void*)0));
        FUNC_0("no:ta:ma:ca:dd:re", 0, ((void*)0));
        FUNC_0("aa:bb:cc:dd:ee:fx", 0, ((void*)0));
        FUNC_0("aa:bb:cc:dd:ee:ff", 0, &VAR_0[0]);
        FUNC_0(" aa:bb:cc:dd:ee:ff", 0, &VAR_0[0]);
        FUNC_0("aa:bb:cc:dd:ee:ff \t\n", 0, ((void*)0));
        FUNC_0("aa:bb:cc:dd:ee:ff \t\nxxx", 0, ((void*)0));
        FUNC_0("aa:bb:cc: dd:ee:ff", 0, ((void*)0));
        FUNC_0("aa:bb:cc:d d:ee:ff", 0, ((void*)0));
        FUNC_0("aa:bb:cc:dd:ee", 0, ((void*)0));
        FUNC_0("9:aa:bb:cc:dd:ee:ff", 0, ((void*)0));
        FUNC_0("aa:bb:cc:dd:ee:ff:gg", 0, ((void*)0));
        FUNC_0("aa:Bb:CC:dd:ee:ff", 0, &VAR_0[0]);
        FUNC_0("01:23:45:67:89:aB", 0, &VAR_0[1]);
        FUNC_0("1:23:45:67:89:aB", 0, &VAR_0[1]);
        FUNC_0("aa-bb-cc-dd-ee-ff", 0, &VAR_0[0]);
        FUNC_0("AA-BB-CC-DD-EE-FF", 0, &VAR_0[0]);
        FUNC_0("01-23-45-67-89-ab", 0, &VAR_0[1]);
        FUNC_0("aabb.ccdd.eeff", 0, &VAR_0[0]);
        FUNC_0("0123.4567.89ab", 0, &VAR_0[1]);
        FUNC_0("123.4567.89ab.", 0, ((void*)0));
        FUNC_0("aabbcc.ddeeff", 0, ((void*)0));
        FUNC_0("aabbccddeeff", 0, ((void*)0));
        FUNC_0("aabbccddee:ff", 0, ((void*)0));
        FUNC_0("012345.6789ab", 0, ((void*)0));
        FUNC_0("123.4567.89ab", 0, &VAR_0[1]);

        FUNC_1("", VAR_0, 0);
        FUNC_1("no:ta:ma:ca:dd:re", VAR_0, 0);
        FUNC_1("aa:bb:cc:dd:ee:fx", VAR_0, 0);
        FUNC_1("aa:bb:cc:dd:ee:ff", VAR_0, 1);
        FUNC_1(" aa:bb:cc:dd:ee:ff", VAR_0, 1);
        FUNC_1("aa:bb:cc:dd:ee:ff \t\n", VAR_0, 1);
        FUNC_1("aa:bb:cc:dd:ee:ff \t\nxxx", VAR_0, 1);
        FUNC_1("aa:bb:cc: dd:ee:ff", VAR_0, 0);
        FUNC_1("aa:bb:cc:d d:ee:ff", VAR_0, 0);
        FUNC_1("aa:bb:cc:dd:ee", VAR_0, 0);
        FUNC_1("9:aa:bb:cc:dd:ee:ff", VAR_0, 0);
        FUNC_1("aa:bb:cc:dd:ee:ff:gg", VAR_0, 0);
        FUNC_1("aa:Bb:CC:dd:ee:ff", VAR_0, 1);
        FUNC_1("01:23:45:67:89:aB", &VAR_0[1], 1);
        FUNC_1("1:23:45:67:89:aB", &VAR_0[1], 1);
        FUNC_1("aa-bb-cc-dd-ee-ff", VAR_0, 1);
        FUNC_1("AA-BB-CC-DD-EE-FF", VAR_0, 1);
        FUNC_1("01-23-45-67-89-ab", &VAR_0[1], 1);
        FUNC_1("aabb.ccdd.eeff", VAR_0, 1);
        FUNC_1("0123.4567.89ab", &VAR_0[1], 1);
        FUNC_1("123.4567.89ab.", VAR_0, 0);
        FUNC_1("aabbcc.ddeeff", VAR_0, 0);
        FUNC_1("aabbccddeeff", VAR_0, 0);
        FUNC_1("aabbccddee:ff", VAR_0, 0);
        FUNC_1("012345.6789ab", VAR_0, 0);
        FUNC_1("123.4567.89ab", &VAR_0[1], 1);

        FUNC_1("123.4567.89ab aa:bb:cc:dd:ee:ff 01-23-45-67-89-ab aa:Bb:CC:dd:ee:ff", VAR_0, 2);
        FUNC_1("123.4567.89ab aa:bb:cc:dd:ee:fx hogehoge 01-23-45-67-89-ab aaaa aa:Bb:CC:dd:ee:ff", VAR_0, 2);
}
