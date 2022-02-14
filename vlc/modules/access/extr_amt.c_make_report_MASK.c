
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nGroupRecord; scalar_t__ resv2; scalar_t__ checksum; scalar_t__ resv; int type; } ;
typedef TYPE_1__ amt_igmpv3_membership_report_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1( amt_igmpv3_membership_report_t *VAR_1 )
{
    VAR_1->type = VAR_0;
    VAR_1->resv = 0;
    VAR_1->checksum = 0;
    VAR_1->resv2 = 0;
    VAR_1->nGroupRecord = FUNC_0(1);
}
