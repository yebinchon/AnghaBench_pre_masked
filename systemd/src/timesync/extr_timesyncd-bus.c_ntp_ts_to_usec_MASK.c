
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct ntp_ts {int frac; int sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static usec_t FUNC_1(const struct ntp_ts *VAR_2) {
        return (FUNC_0(VAR_2->sec) - VAR_0) * VAR_1 + (FUNC_0(VAR_2->frac) * VAR_1) / (usec_t) 0x100000000ULL;
}
