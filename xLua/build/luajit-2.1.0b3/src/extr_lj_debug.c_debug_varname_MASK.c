
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int GCproto ;
typedef int BCReg ;
typedef scalar_t__ BCPos ;


 char* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char const**) ;
 scalar_t__ FUNC_2 (int const*) ;

__attribute__((used)) static const char *FUNC_3(const GCproto *VAR_3, BCPos VAR_4, BCReg VAR_5)
{
  const char *VAR_6 = (const char *)FUNC_2(VAR_3);
  if (VAR_6) {
    BCPos VAR_7 = 0;
    for (;;) {
      const char *VAR_8 = VAR_6;
      uint32_t VAR_9 = *(const uint8_t *)VAR_6;
      BCPos VAR_10, VAR_11;
      if (VAR_9 < VAR_2) {
 if (VAR_9 == VAR_1) break;
      } else {
 do { VAR_6++; } while (*(const uint8_t *)VAR_6);
      }
      VAR_6++;
      VAR_7 = VAR_10 = VAR_7 + FUNC_1(&VAR_6);
      if (VAR_10 > VAR_4) break;
      VAR_11 = VAR_10 + FUNC_1(&VAR_6);
      if (VAR_4 < VAR_11 && VAR_5-- == 0) {
 if (VAR_9 < VAR_2) {

   VAR_8 = FUNC_0(VAR_0);

   if (--VAR_9) while (*VAR_8++ || --VAR_9) ;
 }
 return VAR_8;
      }
    }
  }
  return ((void*)0);
}
