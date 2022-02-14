
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,int) ;

__attribute__((used)) static void FUNC_1(void) {



        FUNC_0("example", "a.example", "yljkjljk.a.example", 1);
        FUNC_0("a.example", "yljkjljk.a.example", "Z.a.example", 1);
        FUNC_0("yljkjljk.a.example", "Z.a.example", "zABC.a.EXAMPLE", 1);
        FUNC_0("Z.a.example", "zABC.a.EXAMPLE", "z.example", 1);
        FUNC_0("zABC.a.EXAMPLE", "z.example", "\\033.z.example", 1);
        FUNC_0("z.example", "\\033.z.example", "*.z.example", 1);
        FUNC_0("\\033.z.example", "*.z.example", "\\200.z.example", 1);
        FUNC_0("*.z.example", "\\200.z.example", "example", 1);
        FUNC_0("\\200.z.example", "example", "a.example", 1);

        FUNC_0("example", "a.example", "example", 1);
        FUNC_0("example", "example", "example", 0);
        FUNC_0("example", "example", "yljkjljk.a.example", 0);
        FUNC_0("example", "yljkjljk.a.example", "yljkjljk.a.example", 0);
        FUNC_0("hkps.pool.sks-keyservers.net", "_pgpkey-https._tcp.hkps.pool.sks-keyservers.net", "ipv4.pool.sks-keyservers.net", 1);
}
