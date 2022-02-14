
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DnsScopeMatch ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static DnsScopeMatch FUNC_2(const char *VAR_2) {
        FUNC_0(VAR_2);

        if (FUNC_1(VAR_2, "254.169.in-addr.arpa") > 0)
                return VAR_0 + 4;

        if (FUNC_1(VAR_2, "8.e.f.ip6.arpa") > 0 ||
            FUNC_1(VAR_2, "9.e.f.ip6.arpa") > 0 ||
            FUNC_1(VAR_2, "a.e.f.ip6.arpa") > 0 ||
            FUNC_1(VAR_2, "b.e.f.ip6.arpa") > 0)
                return VAR_0 + 5;

        return VAR_1;
}
