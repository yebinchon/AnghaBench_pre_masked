
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(void *VAR_0, const void *VAR_1, size_t VAR_2, size_t VAR_3)
{
  if(VAR_2 > 1)
  {
    size_t VAR_4 = VAR_2/2;
    char *VAR_5 = (char*)VAR_1;
    char *VAR_6 = (char*)VAR_0;
    size_t VAR_7, VAR_8;
    for(VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    {
      for(VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
      {
        char VAR_9 = VAR_5[VAR_8];
        VAR_6[VAR_8] = VAR_5[VAR_2-1-VAR_8];
        VAR_6[VAR_2-1-VAR_8] = VAR_9;
      }
      VAR_5 += VAR_2;
      VAR_6 += VAR_2;
    }
  }
}
