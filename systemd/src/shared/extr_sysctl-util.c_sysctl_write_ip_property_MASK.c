
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,char const*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*,char*,int ,char*,char const*) ;
 int FUNC_5 (char const*,char const*,int) ;

int FUNC_6(int VAR_4, const char *VAR_5, const char *VAR_6, const char *VAR_7) {
        const char *VAR_8;

        FUNC_1(FUNC_0(VAR_4, VAR_0, VAR_1));
        FUNC_1(VAR_6);
        FUNC_1(VAR_7);

        VAR_8 = FUNC_4("/proc/sys/net/ipv", VAR_4 == VAR_0 ? "4" : "6",
                     VAR_5 ? "/conf/" : "", FUNC_3(VAR_5),
                     VAR_6[0] == '/' ? "" : "/", VAR_6);

        FUNC_2("Setting '%s' to '%s'", VAR_8, VAR_7);

        return FUNC_5(VAR_8, VAR_7, VAR_3 | VAR_2);
}
