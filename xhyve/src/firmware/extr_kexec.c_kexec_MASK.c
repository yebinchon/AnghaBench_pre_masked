
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {char* kernel; char* cmdline; char* initrd; } ;
struct TYPE_5__ {int base; } ;
struct TYPE_4__ {uintptr_t base; int size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_14 ;
 int FUNC_1 (int ,char*,char*) ;
 TYPE_2__ VAR_15 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 TYPE_1__ VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 void* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,scalar_t__,int,int) ;
 int FUNC_8 (int ,int ,int) ;

uint64_t
FUNC_9(void)
{
 uint64_t *VAR_18;
 void *VAR_19;

 VAR_19 = FUNC_6(0, FUNC_5());
 VAR_16.base = (uintptr_t) VAR_19;
 VAR_16.size = FUNC_5();

 if (FUNC_2(VAR_14.kernel,
  VAR_14.cmdline ? VAR_14.cmdline : "auto"))
 {
  FUNC_1(VAR_17, "kexec: failed to load kernel %s\n", VAR_14.kernel);
  FUNC_0();
 }

 if (VAR_14.initrd && FUNC_3(VAR_14.initrd)) {
  FUNC_1(VAR_17, "kexec: failed to load initrd %s\n", VAR_14.initrd);
  FUNC_0();
 }

 VAR_18 = ((uint64_t *) (VAR_16.base + VAR_0));
 VAR_18[0] = 0x0000000000000000;
 VAR_18[1] = 0x0000000000000000;
 VAR_18[2] = 0x00cf9a000000ffff;
 VAR_18[3] = 0x00cf92000000ffff;

 FUNC_4(0);

 FUNC_7(0, VAR_6, VAR_0, 0x1f, 0);
 FUNC_7(0, VAR_3, 0, 0xffffffff, 0xc09b);
 FUNC_7(0, VAR_4, 0, 0xffffffff, 0xc093);
 FUNC_7(0, VAR_5, 0, 0xffffffff, 0xc093);
 FUNC_7(0, VAR_13, 0, 0xffffffff, 0xc093);
 FUNC_8(0, VAR_3, 0x10);
 FUNC_8(0, VAR_4, 0x18);
 FUNC_8(0, VAR_5, 0x18);
 FUNC_8(0, VAR_13, 0x18);
 FUNC_8(0, VAR_2, 0x21);
 FUNC_8(0, VAR_7, 0);
 FUNC_8(0, VAR_9, 0);
 FUNC_8(0, VAR_8, 0);
 FUNC_8(0, VAR_10, 0x2);
 FUNC_8(0, VAR_12, VAR_1);
 FUNC_8(0, VAR_11, VAR_15.base);

 return VAR_15.base;
}
