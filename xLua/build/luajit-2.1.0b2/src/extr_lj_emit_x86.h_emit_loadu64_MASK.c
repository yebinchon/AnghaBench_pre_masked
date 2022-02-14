
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {int* mcp; } ;
typedef int Reg ;
typedef int MCode ;
typedef TYPE_1__ ASMState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int,scalar_t__) ;
 int* FUNC_3 (int ,int ,int ,int,int*,int) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_4, Reg VAR_5, uint64_t VAR_6)
{
  if (FUNC_1(VAR_6)) {
    FUNC_2(VAR_4, VAR_5, (int32_t)VAR_6);
  } else if (FUNC_0((int64_t)VAR_6)) {
    MCode *VAR_7 = VAR_4->mcp;
    *(int32_t *)(VAR_7-4) = (int32_t)VAR_6;
    VAR_4->mcp = FUNC_3(VAR_3, VAR_2, VAR_0, VAR_5, VAR_7, -4);
  } else {
    MCode *VAR_8 = VAR_4->mcp;
    *(uint64_t *)(VAR_8-8) = VAR_6;
    VAR_8[-9] = (MCode)(VAR_1+(VAR_5&7));
    VAR_8[-10] = 0x48 + ((VAR_5>>3)&1);
    VAR_8 -= 10;
    VAR_4->mcp = VAR_8;
  }
}
