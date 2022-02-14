
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int longSize; } ;
typedef TYPE_1__ THMemoryFile ;
typedef int THFile ;


 int FUNC_0 (int,int,char*) ;

void FUNC_1(THFile *VAR_0, int VAR_1)
{
  THMemoryFile *VAR_2 = (THMemoryFile*)(VAR_0);
  FUNC_0(VAR_1 == 0 || VAR_1 == 4 || VAR_1 == 8, 1, "Invalid long size specified");
  VAR_2->longSize = VAR_1;
}
