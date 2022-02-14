
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long int32_t ;
struct TYPE_3__ {int hasError; int isQuiet; scalar_t__ isAutoSpacing; scalar_t__ isBinary; int isReadable; } ;
struct TYPE_4__ {int longSize; TYPE_1__ file; int * handle; int isNativeEncoding; } ;
typedef int THFile ;
typedef TYPE_2__ THDiskFile ;


 int VAR_0 ;
 long* FUNC_0 (int) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (long*,long*,int,size_t) ;
 int FUNC_4 (char*,size_t,size_t) ;
 int FUNC_5 (long*) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (long*,int,size_t,int *) ;
 int FUNC_8 (int *,char*,long*) ;
 int FUNC_9 (int,int *) ;

__attribute__((used)) static size_t FUNC_10(THFile *VAR_1, long *VAR_2, size_t VAR_3)
{
  THDiskFile *VAR_4 = (THDiskFile*)(VAR_1);
  size_t VAR_5 = 0L;

  FUNC_1(VAR_4->handle != ((void*)0), 1, "attempt to use a closed file");
  FUNC_1(VAR_4->file.isReadable, 1, "attempt to read in a write-only file");

  if(VAR_4->file.isBinary)
  {
    if(VAR_4->longSize == 0 || VAR_4->longSize == sizeof(long))
    {
      VAR_5 = FUNC_7(VAR_2, sizeof(long), VAR_3, VAR_4->handle);
      if(!VAR_4->isNativeEncoding && (sizeof(long) > 1) && (VAR_5 > 0))
        FUNC_3(VAR_2, VAR_2, sizeof(long), VAR_5);
    } else if(VAR_4->longSize == 4)
    {
      VAR_5 = FUNC_7(VAR_2, 4, VAR_3, VAR_4->handle);
      if(!VAR_4->isNativeEncoding && (VAR_5 > 0))
        FUNC_3(VAR_2, VAR_2, 4, VAR_5);
      size_t VAR_6;
      for(VAR_6 = VAR_5; VAR_6 > 0; VAR_6--)
        VAR_2[VAR_6-1] = ((int *)VAR_2)[VAR_6-1];
    }
    else
    {
      int VAR_7 = !FUNC_2();
      int32_t *VAR_8 = FUNC_0(8*VAR_3);
      VAR_5 = FUNC_7(VAR_8, 8, VAR_3, VAR_4->handle);
      size_t VAR_9;
      for(VAR_9 = VAR_5; VAR_9 > 0; VAR_9--)
        VAR_2[VAR_9-1] = VAR_8[2*(VAR_9-1) + VAR_7];
      FUNC_5(VAR_8);
      if(!VAR_4->isNativeEncoding && (VAR_5 > 0))
        FUNC_3(VAR_2, VAR_2, 4, VAR_5);
     }
  }
  else
  {
    size_t VAR_10;
    for(VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
    {
      int VAR_11 = FUNC_8(VAR_4->handle, "%ld", &VAR_2[VAR_10]); if(VAR_11 <= 0) break; else VAR_5++;
    }
    if(VAR_4->file.isAutoSpacing && (VAR_3 > 0))
    {
      int VAR_12 = FUNC_6(VAR_4->handle);
      if( (VAR_12 != '\n') && (VAR_12 != VAR_0) )
        FUNC_9(VAR_12, VAR_4->handle);
    }
  }

  if(VAR_5 != VAR_3)
  {
    VAR_4->file.hasError = 1;
    if(!VAR_4->file.isQuiet)
      FUNC_4("read error: read %d blocks instead of %d", VAR_5, VAR_3);
  }

  return VAR_5;
}
