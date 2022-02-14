
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int xsave_enabled; scalar_t__ xsave_max_size; int xcr0_allowed; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,scalar_t__*) ;
 int FUNC_1 (char*,scalar_t__*,size_t*,int *,int ) ;
 TYPE_1__ VAR_1 ;

void
FUNC_2(void)
{
 uint32_t VAR_2, VAR_3[4];
 size_t VAR_4;

 VAR_1.xsave_enabled = 0;

 VAR_4 = sizeof(uint32_t);
 if (!FUNC_1("hw.optional.avx1_0", &VAR_2, &VAR_4, ((void*)0), 0) && VAR_2) {
  FUNC_0(0xd, 0x0, VAR_3);
  VAR_1.xsave_enabled = 1;
  VAR_1.xcr0_allowed = VAR_0;
  VAR_1.xsave_max_size = VAR_3[1];
 }
}
