
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int longSize; int * handle; } ;
typedef int THFile ;
typedef TYPE_1__ THDiskFile ;


 int FUNC_0 (int,int,char*) ;

void FUNC_1(THFile *VAR_0, int VAR_1)
{
  THDiskFile *VAR_2 = (THDiskFile*)(VAR_0);
  FUNC_0(VAR_2->handle != ((void*)0), 1, "attempt to use a closed file");
  FUNC_0(VAR_1 == 0 || VAR_1 == 4 || VAR_1 == 8, 1, "Invalid long size specified");
  VAR_2->longSize = VAR_1;
}
