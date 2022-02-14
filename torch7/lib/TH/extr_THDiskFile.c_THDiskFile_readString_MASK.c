
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int isReadable; int hasError; int isQuiet; } ;
struct TYPE_4__ {TYPE_1__ file; int * handle; } ;
typedef int THFile ;
typedef TYPE_2__ THDiskFile ;


 size_t VAR_0 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (int,int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,size_t) ;
 int * FUNC_5 (char*,size_t,int *) ;
 scalar_t__ FUNC_6 (char*,int,size_t,int *) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static size_t FUNC_8(THFile *VAR_1, const char *VAR_2, char **VAR_3)
{
  THDiskFile *VAR_4 = (THDiskFile*)(VAR_1);
  FUNC_1(VAR_4->handle != ((void*)0), 1, "attempt to use a closed file");
  FUNC_1(VAR_4->file.isReadable, 1, "attempt to read in a write-only file");
  FUNC_1((FUNC_7(VAR_2) >= 2 ? (VAR_2[0] == '*') && (VAR_2[1] == 'a' || VAR_2[1] == 'l') : 0), 2, "format must be '*a' or '*l'");





  if(VAR_2[1] == 'a')
  {
    char *VAR_5 = FUNC_0(1024L);
    size_t VAR_6 = 1024L;
    size_t VAR_7 = 0;

    for (;;)
    {
      if(VAR_6-VAR_7 == 0)
      {
        VAR_6 += 1024L;
        VAR_5 = FUNC_4(VAR_5, VAR_6);
      }
      VAR_7 += FUNC_6(VAR_5+VAR_7, 1, VAR_6-VAR_7, VAR_4->handle);
      if (VAR_7 < VAR_6)
      {
        if(VAR_7 == 0)
        {
          FUNC_3(VAR_5);
          VAR_4->file.hasError = 1;
          if(!VAR_4->file.isQuiet)
            FUNC_2("read error: read 0 blocks instead of 1");

          *VAR_3 = ((void*)0);
          return 0;
        }
        *VAR_3 = VAR_5;
        return VAR_7;
      }
    }
  }
  else
  {
    char *VAR_8 = FUNC_0(1024L);
    size_t VAR_9 = 1024L;
    size_t VAR_10 = 0;
    size_t VAR_11;

    for (;;)
    {
      if(VAR_9-VAR_10 <= 1)
      {
        VAR_9 += 1024L;
        VAR_8 = FUNC_4(VAR_8, VAR_9);
      }
      if (FUNC_5(VAR_8+VAR_10, VAR_9-VAR_10, VAR_4->handle) == ((void*)0))
      {
        if(VAR_10 == 0)
        {
          FUNC_3(VAR_8);
          VAR_4->file.hasError = 1;
          if(!VAR_4->file.isQuiet)
            FUNC_2("read error: read 0 blocks instead of 1");

          *VAR_3 = ((void*)0);
          return 0;
        }
        *VAR_3 = VAR_8;
        return VAR_10;
      }
      VAR_11 = FUNC_7(VAR_8+VAR_10);
      if (VAR_11 == 0 || (VAR_8+VAR_10)[VAR_11-1] != '\n')
      {
        VAR_10 += VAR_11;
      }
      else
      {
        VAR_10 += VAR_11-1;
        *VAR_3 = VAR_8;
        return VAR_10;
      }
    }
  }

  *VAR_3 = ((void*)0);
  return 0;
}
