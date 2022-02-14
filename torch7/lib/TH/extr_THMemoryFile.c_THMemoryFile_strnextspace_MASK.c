
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(char *VAR_0, char *VAR_1)
{
  char VAR_2;

  while( (VAR_2 = *VAR_0) )
  {
    if( (VAR_2 != ' ') && (VAR_2 != '\n') && (VAR_2 != ':') && (VAR_2 != ';') )
      break;
    VAR_0++;
  }

  while( (VAR_2 = *VAR_0) )
  {
    if( (VAR_2 == ' ') || (VAR_2 == '\n') || (VAR_2 == ':') || (VAR_2 == ';') )
    {
      *VAR_1 = VAR_2;
      *VAR_0 = '\0';
      return(VAR_0);
    }
    VAR_0++;
  }
  return ((void*)0);
}
