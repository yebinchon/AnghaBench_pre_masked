
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int isReadable; int hasError; int isQuiet; } ;
struct TYPE_6__ {scalar_t__ position; scalar_t__ size; TYPE_2__* storage; TYPE_1__ file; } ;
struct TYPE_5__ {char* data; } ;
typedef TYPE_3__ THMemoryFile ;
typedef int THFile ;


 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,size_t) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static size_t FUNC_4(THFile *VAR_0, const char *VAR_1, char **VAR_2)
{
  THMemoryFile *VAR_3 = (THMemoryFile*)VAR_0;

  FUNC_0(VAR_3->storage != ((void*)0), 1, "attempt to use a closed file");
  FUNC_0(VAR_3->file.isReadable, 1, "attempt to read in a write-only file");
  FUNC_0((FUNC_3(VAR_1) >= 2 ? (VAR_1[0] == '*') && (VAR_1[1] == 'a' || VAR_1[1] == 'l') : 0), 2, "format must be '*a' or '*l'");

  if(VAR_3->position == VAR_3->size)
  {
    VAR_3->file.hasError = 1;
    if(!VAR_3->file.isQuiet)
      FUNC_1("read error: read 0 blocks instead of 1");

    *VAR_2 = ((void*)0);
    return 0;
  }

  if(VAR_1[1] == 'a')
  {
    size_t VAR_4 = VAR_3->size-VAR_3->position;

    *VAR_2 = FUNC_2(VAR_3->storage->data+VAR_3->position, VAR_4);
    VAR_3->position = VAR_3->size;

    return VAR_4;
  }
  else
  {
    char *VAR_5 = VAR_3->storage->data+VAR_3->position;
    int VAR_6 = 0;
    size_t VAR_7;
    size_t VAR_8;
    for(VAR_8 = 0; VAR_8 < VAR_3->size-VAR_3->position; VAR_8++)
    {
      if(VAR_5[VAR_8] == '\n')
      {
        VAR_7 = VAR_8;
        VAR_6 = 1;
        break;
      }
    }

    if(VAR_6)
    {
      *VAR_2 = FUNC_2(VAR_3->storage->data+VAR_3->position, VAR_7);
      VAR_3->position += VAR_7+1;
      return VAR_7;
    }
    else
    {
      size_t VAR_9 = VAR_3->size-VAR_3->position;

      *VAR_2 = FUNC_2(VAR_3->storage->data+VAR_3->position, VAR_9);
      VAR_3->position = VAR_3->size;

      return VAR_9;
    }
  }

  *VAR_2 = ((void*)0);
  return 0;
}
