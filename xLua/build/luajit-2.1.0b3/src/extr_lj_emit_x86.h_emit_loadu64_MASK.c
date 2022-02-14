
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_8__ {int* mcp; } ;
typedef int Reg ;
typedef int MCode ;
typedef TYPE_1__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int,scalar_t__) ;
 int* FUNC_4 (int ,int ,int,int,int*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(ASMState *VAR_7, Reg VAR_8, uint64_t VAR_9)
{
  if (FUNC_1(VAR_9)) {
    FUNC_3(VAR_7, VAR_8, (int32_t)VAR_9);
  } else if (FUNC_0((int64_t)VAR_9)) {
    MCode *VAR_10 = VAR_7->mcp;
    *(int32_t *)(VAR_10-4) = (int32_t)VAR_9;
    VAR_7->mcp = FUNC_4(VAR_6, VAR_4, VAR_0, VAR_8, VAR_10, -4);
  } else {
    MCode *VAR_11 = VAR_7->mcp;
    *(uint64_t *)(VAR_11-8) = VAR_9;
    VAR_11[-9] = (MCode)(VAR_3+(VAR_8&7));
    VAR_11[-10] = 0x48 + ((VAR_8>>3)&1);
    VAR_11 -= 10;
    VAR_7->mcp = VAR_11;
  }
}
