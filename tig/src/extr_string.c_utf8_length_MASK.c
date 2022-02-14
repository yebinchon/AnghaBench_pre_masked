
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (char const*,char) ;
 size_t FUNC_1 (unsigned long,int) ;
 unsigned char FUNC_2 (char const*) ;
 unsigned long FUNC_3 (char const*,unsigned char) ;

size_t
FUNC_4(const char **VAR_0, int VAR_1, size_t VAR_2, int *VAR_3, size_t VAR_4, int *VAR_5, bool VAR_6, int VAR_7)
{
 const char *VAR_8 = *VAR_0;
 const char *VAR_9 = VAR_1 < 0 ? FUNC_0(VAR_8, '\0') : VAR_8 + VAR_1;
 unsigned char VAR_10 = 0;
 size_t VAR_11 = 0;

 *VAR_3 = 0;
 *VAR_5 = 0;

 while (VAR_8 < VAR_9) {
  unsigned char VAR_12 = FUNC_2(VAR_8);
  size_t VAR_13;
  unsigned long VAR_14;

  if (VAR_8 + VAR_12 > VAR_9)
   break;




  VAR_14 = FUNC_3(VAR_8, VAR_12);

  if (!VAR_14)
   break;

  VAR_13 = FUNC_1(VAR_14, VAR_7);
  if (VAR_2 > 0) {
   VAR_2 -= VAR_13 <= VAR_2 ? VAR_13 : VAR_2;
   *VAR_0 += VAR_12;
  }
  *VAR_3 += VAR_13;
  if (VAR_4 > 0 && *VAR_3 > VAR_4) {
   *VAR_5 = 1;
   *VAR_3 -= VAR_13;
   if (VAR_6 && *VAR_3 == VAR_4) {
    VAR_8 -= VAR_10;
    *VAR_3 -= VAR_11;
   }
   break;
  }

  VAR_8 += VAR_12;
  if (VAR_13) {
   VAR_10 = VAR_12;
   VAR_11 = VAR_13;
  } else {
   VAR_10 += VAR_12;
  }
 }

 return VAR_8 - *VAR_0;
}
