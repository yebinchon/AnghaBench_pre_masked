
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef unsigned int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char**,int ) ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_4, uint64_t *VAR_5)
{
 char *VAR_6;
 uintmax_t VAR_7;
 uint64_t VAR_8;
 unsigned VAR_9;
 int VAR_10;

 VAR_10 = VAR_3;
 VAR_3 = 0;
 VAR_7 = FUNC_0(VAR_4, &VAR_6, 0);
 if (VAR_7 > VAR_2)
  VAR_3 = VAR_1;
 if (VAR_3 != 0)
  return (-1);
 VAR_3 = VAR_10;
 VAR_8 = VAR_7;

 switch (FUNC_1((unsigned char)*VAR_6)) {
 case 'e':
  VAR_9 = 60;
  break;
 case 'p':
  VAR_9 = 50;
  break;
 case 't':
  VAR_9 = 40;
  break;
 case 'g':
  VAR_9 = 30;
  break;
 case 'm':
  VAR_9 = 20;
  break;
 case 'k':
  VAR_9 = 10;
  break;
 case 'b':
 case '\0':
  *VAR_5 = VAR_8;
  return (0);
 default:

  VAR_3 = VAR_0;
  return (-1);
 }

 if ((VAR_8 << VAR_9) >> VAR_9 != VAR_8) {

  VAR_3 = VAR_1;
  return (-1);
 }
 *VAR_5 = VAR_8 << VAR_9;
 return (0);
}
