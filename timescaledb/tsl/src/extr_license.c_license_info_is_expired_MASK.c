
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TimestampTz ;
struct TYPE_3__ {int end_time; } ;
typedef TYPE_1__ LicenseInfo ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;

bool
FUNC_2(const LicenseInfo *VAR_0)
{
 TimestampTz VAR_1 = FUNC_0();

 return FUNC_1(VAR_0->end_time, VAR_1) < 0;
}
