
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int code; } ;
struct TYPE_4__ {TYPE_1__ msr; } ;
struct vm_exit {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct vm_exit *VAR_5, int *VAR_6)
{
 uint64_t VAR_7;
 uint32_t VAR_8, VAR_9;
 int VAR_10;

 VAR_7 = 0;
 VAR_10 = FUNC_1(*VAR_6, VAR_5->u.msr.code, &VAR_7);
 if (VAR_10 != 0) {
  FUNC_2(VAR_3, "rdmsr to register %#x on vcpu %d\n",
      VAR_5->u.msr.code, *VAR_6);
  if (VAR_4) {
   FUNC_3(*VAR_6);
   return (VAR_0);
  }
 }

 VAR_8 = (uint32_t) VAR_7;
 VAR_10 = FUNC_4(*VAR_6, VAR_1, VAR_8);
 FUNC_0(VAR_10 == 0);

 VAR_9 = VAR_7 >> 32;
 VAR_10 = FUNC_4(*VAR_6, VAR_2, VAR_9);
 FUNC_0(VAR_10 == 0);

 return (VAR_0);
}
