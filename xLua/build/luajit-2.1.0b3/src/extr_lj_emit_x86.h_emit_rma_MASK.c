
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ x86Op ;
typedef int int32_t ;
struct TYPE_8__ {int * mcp; } ;
typedef int Reg ;
typedef int MCode ;
typedef TYPE_1__ ASMState ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (intptr_t) ;
 intptr_t FUNC_2 (TYPE_1__*,void const*) ;
 int FUNC_3 (TYPE_1__*,int ,uintptr_t) ;
 void* FUNC_4 (scalar_t__,int ,int ,int ,int *,int) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int ,int ,int ) ;
 intptr_t FUNC_6 (TYPE_1__*,void const*) ;
 intptr_t FUNC_7 (TYPE_1__*,void const*) ;
 int FUNC_8 (void const*) ;

__attribute__((used)) static void FUNC_9(ASMState *VAR_8, x86Op VAR_9, Reg VAR_10, const void *VAR_11)
{
  {
    MCode *VAR_12 = VAR_8->mcp;
    *(int32_t *)(VAR_12-4) = FUNC_8(VAR_11);




    VAR_8->mcp = FUNC_4(VAR_9, VAR_4, VAR_10, VAR_1, VAR_12, -4);

  }
}
