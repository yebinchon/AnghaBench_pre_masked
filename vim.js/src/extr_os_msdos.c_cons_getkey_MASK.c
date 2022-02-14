
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ah; int dl; int al; } ;
struct TYPE_3__ {int flags; } ;
union REGS {TYPE_2__ h; TYPE_1__ x; } ;


 int VAR_0 ;
 int FUNC_0 (union REGS*,union REGS*) ;

__attribute__((used)) static void
FUNC_1(void)
{
    union REGS VAR_1;


    VAR_1.h.ah = 0x06;
    VAR_1.h.dl = 0xff;
    (void)FUNC_0(&VAR_1, &VAR_1);
    if ((VAR_1.x.flags & 0x40) == 0)
 VAR_0 = (VAR_1.h.al & 0xff);
}
