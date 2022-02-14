
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * handle; } ;
typedef int THFile ;
typedef TYPE_1__ THDiskFile ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ) ;

void FUNC_3(THFile *VAR_1)
{
  THDiskFile *VAR_2 = (THDiskFile*)(VAR_1);
  FUNC_0(VAR_2->handle != ((void*)0), 1, "attempt to use a closed file");
  if (FUNC_2(VAR_2->handle, ((void*)0), VAR_0, 0)) {
    FUNC_1("error: cannot disable buffer");
  }
}
