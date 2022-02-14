
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct ntp_ts_short {int frac; int sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static usec_t FUNC_1(const struct ntp_ts_short *VAR_1) {
        return FUNC_0(VAR_1->sec) * VAR_0 + (FUNC_0(VAR_1->frac) * VAR_0) / (usec_t) 0x10000ULL;
}
