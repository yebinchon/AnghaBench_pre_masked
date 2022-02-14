
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hasError; int isQuiet; } ;
struct TYPE_4__ {TYPE_1__ file; int * handle; } ;
typedef int THFile ;
typedef TYPE_2__ THDiskFile ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(THFile *VAR_1)
{
  THDiskFile *VAR_2 = (THDiskFile*)(VAR_1);

  FUNC_0(VAR_2->handle != ((void*)0), 1, "attempt to use a closed file");






  if(FUNC_4(VAR_2->handle, 0, VAR_0) < 0)

  {
    VAR_2->file.hasError = 1;
    if(!VAR_2->file.isQuiet)
      FUNC_1("unable to seek at end of file");
  }
}
