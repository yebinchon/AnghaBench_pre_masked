
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int32_t ;
struct TYPE_5__ {int * mcp; } ;
typedef int MCode ;
typedef TYPE_1__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(ASMState *VAR_4, MCode *VAR_5)
{
  MCode *VAR_6 = VAR_4->mcp;
  *(int32_t *)(VAR_6-4) = FUNC_2(VAR_6, VAR_5);
  VAR_6[-5] = VAR_1;
  VAR_4->mcp = VAR_6 - 5;
}
