
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ax; int cx; } ;
struct TYPE_6__ {int ah; int bh; int bl; int al; } ;
union REGS {TYPE_2__ x; TYPE_1__ h; } ;
struct TYPE_8__ {int ax; } ;
struct TYPE_9__ {TYPE_3__ x; } ;
typedef TYPE_4__ __dpmi_regs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,TYPE_4__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int,union REGS*,union REGS*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 () ;
 int VAR_13 ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int VAR_14 ;

void
FUNC_12(void)
{
    union REGS VAR_15;
    VAR_15.h.ah = 0x08;
    VAR_15.h.bh = 0x00;
    FUNC_4(0x10, &VAR_15, &VAR_15);
    VAR_13 = VAR_15.h.ah;
    FUNC_8();
    if (VAR_9 == 0)
 VAR_9 = (VAR_13 & 0xf) + 1;
    if (VAR_8 == 0)
 VAR_8 = ((VAR_13 >> 4) & 0xf) + 1;

    VAR_14 = VAR_4;
    VAR_5 = VAR_2;
    FUNC_9();
    FUNC_11(VAR_4);
    VAR_15.x.ax = 0x1003;
    VAR_15.h.bl = 0x00;
    VAR_15.h.bh = 0x00;
    FUNC_4(0x10, &VAR_15, &VAR_15);






    VAR_15.h.ah = 0x05;
    VAR_15.x.cx = 0xffff;
    FUNC_4(0x16, &VAR_15, &VAR_15);
    if (VAR_15.h.al != 1)
    {
 int VAR_16;

 for (VAR_16 = 0; VAR_16 < 16; ++VAR_16)
 {
     VAR_15.h.ah = 0x10;
     FUNC_4(0x16, &VAR_15, &VAR_15);
     if (VAR_15.x.ax == 0xffff)
  break;
 }
 if (VAR_16 == 16)
 {
     VAR_6 = 0;
     VAR_7 = 1;
 }
    }
}
