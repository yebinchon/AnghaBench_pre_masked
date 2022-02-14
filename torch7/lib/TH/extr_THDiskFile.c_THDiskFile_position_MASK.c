
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
typedef int __int64 ;
struct TYPE_3__ {int isQuiet; } ;
struct TYPE_4__ {TYPE_1__ file; int * handle; } ;
typedef int THFile ;
typedef TYPE_2__ THDiskFile ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 long FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static size_t FUNC_5(THFile *VAR_0)
{
  THDiskFile *VAR_1 = (THDiskFile*)(VAR_0);
  FUNC_0(VAR_1->handle != ((void*)0), 1, "attempt to use a closed file");






  off_t VAR_2 = FUNC_4(VAR_1->handle);

  if (VAR_2 > -1)
      return (size_t)VAR_2;
  else if(!VAR_1->file.isQuiet)
      FUNC_1("unable to obtain disk file offset (maybe a long overflow occurred)");

  return 0;
}
