
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hashval_t ;
typedef scalar_t__ PTR ;



hashval_t
FUNC_0 (const PTR VAR_0)
{
  const unsigned char *VAR_1 = (const unsigned char *) VAR_0;
  hashval_t VAR_2 = 0;
  unsigned char VAR_3;

  while ((VAR_3 = *VAR_1++) != 0)
    VAR_2 = VAR_2 * 67 + VAR_3 - 113;

  return VAR_2;
}
