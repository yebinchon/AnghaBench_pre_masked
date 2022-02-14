
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ storage; } ;
typedef TYPE_1__ THMemoryFile ;
typedef int THFile ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(THFile *VAR_0)
{
  THMemoryFile *VAR_1 = (THMemoryFile*)VAR_0;

  if(VAR_1->storage)
    FUNC_0(VAR_1->storage);

  FUNC_1(VAR_1);
}
