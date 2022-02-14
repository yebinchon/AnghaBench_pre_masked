
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int pt; TYPE_1__* rbchash; int pc; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_4__ {int pt; int pc; int ref; } ;
typedef int TRef ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static TRef FUNC_6(jit_State *VAR_3, uint32_t VAR_4)
{
  uint32_t VAR_5 = VAR_4 & 0x7ff;
  uint32_t VAR_6 = VAR_4 >> 11;
  TRef VAR_7;
  if (VAR_5 == 0x7ff) VAR_5 = 0x801;
  VAR_7 = FUNC_1(FUNC_0(VAR_1, VAR_0), VAR_5, VAR_6);





  return VAR_7;
}
