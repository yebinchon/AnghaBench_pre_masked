
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hasError; int isQuiet; int isWritable; } ;
struct TYPE_4__ {TYPE_1__ file; int * handle; } ;
typedef int THFile ;
typedef TYPE_2__ THDiskFile ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (char*,size_t,size_t) ;
 size_t FUNC_2 (char const*,int,size_t,int *) ;

__attribute__((used)) static size_t FUNC_3(THFile *VAR_0, const char *VAR_1, size_t VAR_2)
{
  THDiskFile *VAR_3 = (THDiskFile*)(VAR_0);
  size_t VAR_4;

  FUNC_0(VAR_3->handle != ((void*)0), 1, "attempt to use a closed file");
  FUNC_0(VAR_3->file.isWritable, 1, "attempt to write in a read-only file");

  VAR_4 = FUNC_2(VAR_1, 1, VAR_2, VAR_3->handle);
  if(VAR_4 != VAR_2)
  {
    VAR_3->file.hasError = 1;
    if(!VAR_3->file.isQuiet)
      FUNC_1("write error: wrote %zu blocks instead of %zu", VAR_4, VAR_2);
  }

  return VAR_4;
}
