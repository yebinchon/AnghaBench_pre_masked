
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntp_ts_short {int frac; int sec; } ;


 double FUNC_0 (int ) ;

__attribute__((used)) static double FUNC_1(const struct ntp_ts_short *VAR_0) {
        return FUNC_0(VAR_0->sec) + (FUNC_0(VAR_0->frac) / 65536.0);
}
