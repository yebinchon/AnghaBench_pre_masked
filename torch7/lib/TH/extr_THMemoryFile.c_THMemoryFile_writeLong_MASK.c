
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
typedef long int32_t ;
struct TYPE_5__ {scalar_t__ isAutoSpacing; scalar_t__ isBinary; int isWritable; } ;
struct TYPE_7__ {int longSize; size_t position; size_t size; TYPE_2__* storage; TYPE_1__ file; } ;
struct TYPE_6__ {char* data; int size; } ;
typedef TYPE_3__ THMemoryFile ;
typedef int THFile ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,size_t) ;
 int FUNC_3 (char*,long*,size_t) ;
 int FUNC_4 (char*,int,char*,long) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static size_t FUNC_6(THFile *VAR_0, long *VAR_1, size_t VAR_2)
{
  THMemoryFile *VAR_3 = (THMemoryFile*)VAR_0;

  FUNC_0(VAR_3->storage != ((void*)0), 1, "attempt to use a closed file");
  FUNC_0(VAR_3->file.isWritable, 1, "attempt to write in a read-only file");

  if (VAR_2 == 0)
    return 0;

  if(VAR_3->file.isBinary)
  {
    if(VAR_3->longSize == 0 || VAR_3->longSize == sizeof(long))
    {
      size_t VAR_4 = sizeof(long)*VAR_2;
      FUNC_2(VAR_3, VAR_3->position+VAR_4);
      FUNC_3(VAR_3->storage->data+VAR_3->position, VAR_1, VAR_4);
      VAR_3->position += VAR_4;
    } else if(VAR_3->longSize == 4)
    {
      size_t VAR_5 = 4*VAR_2;
      FUNC_2(VAR_3, VAR_3->position+VAR_5);
      int32_t *VAR_6 = (int32_t *)(VAR_3->storage->data + VAR_3->position);
      size_t VAR_7;
      for(VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
        VAR_6[VAR_7] = VAR_1[VAR_7];
      VAR_3->position += VAR_5;
    }
    else
    {
      int VAR_8 = !FUNC_1();
      size_t VAR_9 = 8*VAR_2;
      FUNC_2(VAR_3, VAR_3->position+VAR_9);
      int32_t *VAR_10 = (int32_t *)(VAR_3->storage->data + VAR_3->position);
      size_t VAR_11;
      for(VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
      {
        VAR_10[2*VAR_11 + !VAR_8] = 0;
        VAR_10[2*VAR_11 + VAR_8] = VAR_1[VAR_11];
      }
      VAR_3->position += VAR_9;
    }
    if(VAR_3->position > VAR_3->size)
    {
      VAR_3->size = VAR_3->position;
      VAR_3->storage->data[VAR_3->size] = '\0';
    }
  }
  else
  {
    size_t VAR_12;
    for(VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
    {
      ssize_t VAR_13;
      while (1)
      {
        VAR_13 = FUNC_4(VAR_3->storage->data+VAR_3->position, VAR_3->storage->size-VAR_3->position, "%ld", VAR_1[VAR_12]);
        if( (VAR_13 > -1) && (VAR_13 < VAR_3->storage->size-VAR_3->position) )
        {
          VAR_3->position += VAR_13;
          break;
        }
        FUNC_2(VAR_3, VAR_3->storage->size + (VAR_3->storage->size/2) + 2);
      }
      if(VAR_3->file.isAutoSpacing)
      {
        if(VAR_12 < VAR_2-1)
        {
          FUNC_2(VAR_3, VAR_3->position+1);
          FUNC_5(VAR_3->storage->data+VAR_3->position, " ");
          VAR_3->position++;
        }
        if(VAR_12 == VAR_2-1)
        {
          FUNC_2(VAR_3, VAR_3->position+1);
          FUNC_5(VAR_3->storage->data+VAR_3->position, "\n");
          VAR_3->position++;
        }
      }
    }
    if(VAR_3->position > VAR_3->size)
    {
      VAR_3->size = VAR_3->position;
      VAR_3->storage->data[VAR_3->size] = '\0';
    }
  }

  return VAR_2;
}
