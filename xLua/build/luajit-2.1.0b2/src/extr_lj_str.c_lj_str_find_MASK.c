
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ MSize ;


 scalar_t__ FUNC_0 (char const*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,char const*,scalar_t__) ;

const char *FUNC_2(const char *VAR_0, const char *VAR_1, MSize VAR_2, MSize VAR_3)
{
  if (VAR_3 <= VAR_2) {
    if (VAR_3 == 0) {
      return VAR_0;
    } else {
      int VAR_4 = *(const uint8_t *)VAR_1++;
      VAR_3--; VAR_2 -= VAR_3;
      while (VAR_2) {
 const char *VAR_5 = (const char *)FUNC_0(VAR_0, VAR_4, VAR_2);
 if (!VAR_5) break;
 if (FUNC_1(VAR_5+1, VAR_1, VAR_3) == 0) return VAR_5;
 VAR_5++; VAR_2 -= (MSize)(VAR_5-VAR_0); VAR_0 = VAR_5;
      }
    }
  }
  return ((void*)0);
}
