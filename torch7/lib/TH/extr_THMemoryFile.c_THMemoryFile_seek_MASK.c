
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hasError; int isQuiet; } ;
struct TYPE_4__ {size_t size; size_t position; TYPE_1__ file; int * storage; } ;
typedef TYPE_2__ THMemoryFile ;
typedef int THFile ;


 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (char*,size_t) ;

__attribute__((used)) static void FUNC_2(THFile *VAR_0, size_t VAR_1)
{
  THMemoryFile *VAR_2 = (THMemoryFile*)VAR_0;

  FUNC_0(VAR_2->storage != ((void*)0), 1, "attempt to use a closed file");
  FUNC_0(VAR_1 >= 0, 2, "position must be positive");

  if(VAR_1 <= VAR_2->size)
    VAR_2->position = VAR_1;
  else
  {
    VAR_2->file.hasError = 1;
    if(!VAR_2->file.isQuiet)
      FUNC_1("unable to seek at position %zu", VAR_1);
  }
}
