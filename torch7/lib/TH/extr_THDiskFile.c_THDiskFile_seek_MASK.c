
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
typedef int __int64 ;
struct TYPE_3__ {int hasError; int isQuiet; } ;
struct TYPE_4__ {TYPE_1__ file; int * handle; } ;
typedef int THFile ;
typedef TYPE_2__ THDiskFile ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (char*,size_t) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *,long,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(THFile *VAR_4, size_t VAR_5)
{
  THDiskFile *VAR_6 = (THDiskFile*)(VAR_4);

  FUNC_0(VAR_6->handle != ((void*)0), 1, "attempt to use a closed file");
  FUNC_0(VAR_5 <= (size_t)VAR_1, 2, "position must be smaller than LLONG_MAX");
  if(FUNC_4(VAR_6->handle, (off_t)VAR_5, VAR_3) < 0)

  {
    VAR_6->file.hasError = 1;
    if(!VAR_6->file.isQuiet)
      FUNC_1("unable to seek to position %zu", VAR_5);
  }
}
