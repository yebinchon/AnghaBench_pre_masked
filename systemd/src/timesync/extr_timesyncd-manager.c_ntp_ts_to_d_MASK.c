
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntp_ts {int frac; int sec; } ;


 double VAR_0 ;
 double FUNC_0 (int ) ;

__attribute__((used)) static double FUNC_1(const struct ntp_ts *VAR_1) {
        return FUNC_0(VAR_1->sec) + ((double)FUNC_0(VAR_1->frac) / VAR_0);
}
