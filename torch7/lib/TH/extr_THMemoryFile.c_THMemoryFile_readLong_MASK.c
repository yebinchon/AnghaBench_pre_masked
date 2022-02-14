
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long int32_t ;
struct TYPE_5__ {int hasError; int isQuiet; scalar_t__ isAutoSpacing; scalar_t__ isBinary; int isReadable; } ;
struct TYPE_6__ {int longSize; scalar_t__ position; scalar_t__ size; TYPE_2__ file; TYPE_1__* storage; } ;
struct TYPE_4__ {char* data; } ;
typedef TYPE_3__ THMemoryFile ;
typedef int THFile ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,size_t,size_t) ;
 char* FUNC_3 (char*,char*) ;
 int FUNC_4 (long*,char*,size_t) ;
 int FUNC_5 (char*,char*,long*,int*) ;

__attribute__((used)) static size_t FUNC_6(THFile *VAR_1, long *VAR_2, size_t VAR_3)
{
  THMemoryFile *VAR_4 = (THMemoryFile*)VAR_1;
  size_t VAR_5 = 0L;

  FUNC_0(VAR_4->storage != ((void*)0), 1, "attempt to use a closed file");
  FUNC_0(VAR_4->file.isReadable, 1, "attempt to read in a write-only file");

  if (VAR_3 == 0)
    return 0;

  if(VAR_4->file.isBinary)
  {
    if(VAR_4->longSize == 0 || VAR_4->longSize == sizeof(long))
    {
      size_t VAR_6 = sizeof(long)*VAR_3;
      size_t VAR_7 = (VAR_4->position + VAR_6 <= VAR_4->size ? VAR_6 : VAR_4->size-VAR_4->position);
      VAR_5 = VAR_7/sizeof(long);
      FUNC_4(VAR_2, VAR_4->storage->data+VAR_4->position, VAR_5*sizeof(long));
      VAR_4->position += VAR_5*sizeof(long);
    } else if(VAR_4->longSize == 4)
    {
      size_t VAR_8 = 4*VAR_3;
      size_t VAR_9 = (VAR_4->position + VAR_8 <= VAR_4->size ? VAR_8 : VAR_4->size-VAR_4->position);
      int32_t *VAR_10 = (int32_t *)(VAR_4->storage->data + VAR_4->position);
      VAR_5 = VAR_9/4;
      size_t VAR_11;
      for(VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
        VAR_2[VAR_11] = VAR_10[VAR_11];
      VAR_4->position += VAR_5*4;
    }
    else
    {
      int VAR_12 = !FUNC_1();
      size_t VAR_13 = 8*VAR_3;
      int32_t *VAR_14 = (int32_t *)(VAR_4->storage->data + VAR_4->position);
      size_t VAR_15 = (VAR_4->position + VAR_13 <= VAR_4->size ? VAR_13 : VAR_4->size-VAR_4->position);
      VAR_5 = VAR_15/8;
      size_t VAR_16;
      for(VAR_16 = 0; VAR_16 < VAR_5; VAR_16++)
        VAR_2[VAR_16] = VAR_14[2*VAR_16 + VAR_12];
      VAR_4->position += VAR_5*8;
    }
  }
  else
  {
    size_t VAR_17;
    for(VAR_17 = 0; VAR_17 < VAR_3; VAR_17++)
    {
      size_t VAR_18 = 0;
      char VAR_19 = 0;
      char *VAR_20 = FUNC_3(VAR_4->storage->data+VAR_4->position, &VAR_19);
      int VAR_21; int VAR_22 = FUNC_5(VAR_4->storage->data+VAR_4->position, "%ld%n", &VAR_2[VAR_17], &VAR_21); VAR_18 = VAR_21; if(VAR_22 <= 0) break; else VAR_5++;
      if(VAR_22 == VAR_0)
      {
        while(VAR_4->storage->data[VAR_4->position])
          VAR_4->position++;
      }
      else
        VAR_4->position += VAR_18;
      if(VAR_20)
        *VAR_20 = VAR_19;
    }
    if(VAR_4->file.isAutoSpacing && (VAR_3 > 0))
    {
      if( (VAR_4->position < VAR_4->size) && (VAR_4->storage->data[VAR_4->position] == '\n') )
        VAR_4->position++;
    }
  }

  if(VAR_5 != VAR_3)
  {
    VAR_4->file.hasError = 1;
    if(!VAR_4->file.isQuiet)
      FUNC_2("read error: read %d blocks instead of %d", VAR_5, VAR_3);
  }

  return VAR_5;
}
