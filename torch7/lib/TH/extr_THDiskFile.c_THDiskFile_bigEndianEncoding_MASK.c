
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int isNativeEncoding; int * handle; } ;
typedef int THFile ;
typedef TYPE_1__ THDiskFile ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 () ;

void FUNC_2(THFile *VAR_0)
{
  THDiskFile *VAR_1 = (THDiskFile*)(VAR_0);
  FUNC_0(VAR_1->handle != ((void*)0), 1, "attempt to use a closed file");
  VAR_1->isNativeEncoding = !FUNC_1();
}
