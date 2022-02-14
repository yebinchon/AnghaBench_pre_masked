
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int key_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_3, size_t VAR_4, size_t *VAR_5,
    key_code *VAR_6)
{
 u_int VAR_7;

 if (VAR_4 - *VAR_5 < 2)
  return (1);

 if (VAR_3[*VAR_5] < '0' || VAR_3[*VAR_5] > '9')
  return (-1);
 VAR_7 = VAR_3[(*VAR_5)++] - '0';
 if (VAR_3[*VAR_5] >= '0' && VAR_3[*VAR_5] <= '9')
  VAR_7 = (VAR_7 * 10) + (VAR_3[(*VAR_5)++] - '0');
 VAR_7 -= 1;

 *VAR_6 = 0;
 if (VAR_7 & 1)
  *VAR_6 |= VAR_2;
 if (VAR_7 & 2)
  *VAR_6 |= VAR_1;
 if (VAR_7 & 4)
  *VAR_6 |= VAR_0;
 if (VAR_7 & 8)
  *VAR_6 |= VAR_1;
 return (0);
}
