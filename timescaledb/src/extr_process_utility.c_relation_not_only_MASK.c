
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ inhOpt; int inh; } ;
typedef TYPE_1__ RangeVar ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(RangeVar *VAR_3)
{

 bool VAR_4 = !VAR_3->inh;



 if (VAR_4)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("ONLY option not supported on hypertable operations")));
}
