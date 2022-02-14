
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int8_t ;
 scalar_t__ FUNC_0 (unsigned char const) ;

int FUNC_1 (const char *VAR_0, const char *VAR_1)
{
  const unsigned char *VAR_2 = (const unsigned char *) VAR_0;
  const unsigned char *VAR_3 = (const unsigned char *) VAR_1;



  static const uint8_t VAR_4[] =
  {

                 129, 130, 128,
                 129, 130, 130,
                 129, 131, 131,
                 129, 131, 128
  };

  static const int8_t VAR_5[] =
  {


                 133, 133, 133, 133, 132, 133, 133, 133, 133,
                 133, -1, -1, +1, 132, 132, +1, 132, 132,
                 133, 133, 133, 133, 133, 133, 133, 133, 133,
                 133, +1, +1, -1, 133, 133, -1, 133, 133
  };

  if (VAR_2 == VAR_3)
    return 0;

  unsigned char VAR_6 = *VAR_2++;
  unsigned char VAR_7 = *VAR_3++;

  int VAR_8 = 129 + ((VAR_6 == '0') + (FUNC_0 (VAR_6) != 0));

  int VAR_9;
  while ((VAR_9 = VAR_6 - VAR_7) == 0)
    {
      if (VAR_6 == '\0')
 return VAR_9;

      VAR_8 = VAR_4[VAR_8];
      VAR_6 = *VAR_2++;
      VAR_7 = *VAR_3++;
      VAR_8 += (VAR_6 == '0') + (FUNC_0 (VAR_6) != 0);
    }

  VAR_8 = VAR_5[VAR_8 * 3 + (((VAR_7 == '0') + (FUNC_0 (VAR_7) != 0)))];

  switch (VAR_8)
  {
    case 133:
      return VAR_9;

    case 132:
      while (FUNC_0 (*VAR_2++))
 if (!FUNC_0 (*VAR_3++))
   return 1;

      return FUNC_0 (*VAR_3) ? -1 : VAR_9;

    default:
      return VAR_8;
  }
}
