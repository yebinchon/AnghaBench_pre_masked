
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_6__ {int denom; int numer; } ;
typedef TYPE_1__ mach_timebase_info_data_t ;
struct TYPE_7__ {scalar_t__ rem; scalar_t__ quot; } ;
typedef TYPE_2__ lldiv_t ;
struct TYPE_8__ {int divider; void* remainder; void* quotient; } ;


 int FUNC_0 () ;
 TYPE_2__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_4 (void)
{
    mach_timebase_info_data_t VAR_1;
    if (FUNC_3(FUNC_2 (&VAR_1) != 0))
        FUNC_0 ();
    lldiv_t VAR_2 = FUNC_1 (VAR_1.numer, VAR_1.denom);
    VAR_0.quotient = (uint32_t)VAR_2.quot;
    VAR_0.remainder = (uint32_t)VAR_2.rem;
    VAR_0.divider = VAR_1.denom;
}
