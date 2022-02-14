
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(char *VAR_0, const char *VAR_1)
{
  char *VAR_2 = VAR_0;
  while (*VAR_1) {
    *VAR_2++ = (*VAR_1 >= 'A' && *VAR_1 <= 'Z') ? *VAR_1+0x20 : *VAR_1;
    VAR_1++;
  }
  *VAR_2 = '\0';
  return VAR_0;
}
