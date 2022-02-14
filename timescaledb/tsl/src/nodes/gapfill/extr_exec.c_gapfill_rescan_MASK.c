
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ps_TupFromTlist; } ;
struct TYPE_6__ {TYPE_1__ ps; } ;
struct TYPE_7__ {scalar_t__ custom_ps; TYPE_2__ ss; } ;
typedef TYPE_3__ CustomScanState ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(CustomScanState *VAR_1)
{



 if (VAR_1->custom_ps != VAR_0)
 {
  FUNC_0(FUNC_1(VAR_1->custom_ps));
 }
}
