
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,unsigned long,unsigned long*,char**) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(void) {
        char *VAR_5 = ((void*)0);
        unsigned long VAR_6;

        FUNC_0(FUNC_2(((void*)0), VAR_3|VAR_2, &VAR_6, &VAR_5) == 0);
        FUNC_0(VAR_6 == (VAR_3|VAR_2));
        FUNC_0(VAR_5 == ((void*)0));

        FUNC_0(FUNC_2("", VAR_3|VAR_2, &VAR_6, &VAR_5) == 0);
        FUNC_0(VAR_6 == (VAR_3|VAR_2));
        FUNC_0(VAR_5 == ((void*)0));

        FUNC_0(FUNC_2("ro,nosuid,nodev,noexec", 0, &VAR_6, &VAR_5) == 0);
        FUNC_0(VAR_6 == (VAR_3|VAR_2|VAR_0|VAR_1));
        FUNC_0(VAR_5 == ((void*)0));

        FUNC_0(FUNC_2("ro,nosuid,nodev,noexec,mode=755", 0, &VAR_6, &VAR_5) == 0);
        FUNC_0(VAR_6 == (VAR_3|VAR_2|VAR_0|VAR_1));
        FUNC_0(FUNC_3(VAR_5, "mode=755"));
        VAR_5 = FUNC_1(VAR_5);

        FUNC_0(FUNC_2("rw,nosuid,foo,hogehoge,nodev,mode=755", 0, &VAR_6, &VAR_5) == 0);
        FUNC_0(VAR_6 == (VAR_2|VAR_0));
        FUNC_0(FUNC_3(VAR_5, "foo,hogehoge,mode=755"));
        VAR_5 = FUNC_1(VAR_5);

        FUNC_0(FUNC_2("rw,nosuid,nodev,noexec,relatime,net_cls,net_prio", VAR_3, &VAR_6, &VAR_5) == 0);
        FUNC_0(VAR_6 == (VAR_2|VAR_0|VAR_1|VAR_4));
        FUNC_0(FUNC_3(VAR_5, "net_cls,net_prio"));
        VAR_5 = FUNC_1(VAR_5);

        FUNC_0(FUNC_2("rw,nosuid,nodev,relatime,size=1630748k,mode=700,uid=1000,gid=1000", VAR_3, &VAR_6, &VAR_5) == 0);
        FUNC_0(VAR_6 == (VAR_2|VAR_0|VAR_4));
        FUNC_0(FUNC_3(VAR_5, "size=1630748k,mode=700,uid=1000,gid=1000"));
        VAR_5 = FUNC_1(VAR_5);

        FUNC_0(FUNC_2("size=1630748k,rw,gid=1000,,,nodev,relatime,,mode=700,nosuid,uid=1000", VAR_3, &VAR_6, &VAR_5) == 0);
        FUNC_0(VAR_6 == (VAR_2|VAR_0|VAR_4));
        FUNC_0(FUNC_3(VAR_5, "size=1630748k,gid=1000,mode=700,uid=1000"));
        VAR_5 = FUNC_1(VAR_5);

        FUNC_0(FUNC_2("rw,exec,size=8143984k,nr_inodes=2035996,mode=755", VAR_3|VAR_2|VAR_1|VAR_0, &VAR_6, &VAR_5) == 0);
        FUNC_0(VAR_6 == (VAR_2|VAR_0));
        FUNC_0(FUNC_3(VAR_5, "size=8143984k,nr_inodes=2035996,mode=755"));
        VAR_5 = FUNC_1(VAR_5);

        FUNC_0(FUNC_2("rw,relatime,fmask=0022,,,dmask=0022", VAR_3, &VAR_6, &VAR_5) == 0);
        FUNC_0(VAR_6 == VAR_4);
        FUNC_0(FUNC_3(VAR_5, "fmask=0022,dmask=0022"));
        VAR_5 = FUNC_1(VAR_5);

        FUNC_0(FUNC_2("rw,relatime,fmask=0022,dmask=0022,\"hogehoge", VAR_3, &VAR_6, &VAR_5) < 0);
}
