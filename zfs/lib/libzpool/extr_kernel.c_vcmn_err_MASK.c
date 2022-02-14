
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (char const*,int ) ;

void
FUNC_3(int VAR_5, const char *VAR_6, va_list VAR_7)
{
 if (VAR_5 == VAR_1)
  FUNC_2(VAR_6, VAR_7);
 if (VAR_5 != VAR_0) {
  (void) FUNC_0(VAR_4, "%s", VAR_2[VAR_5]);
  (void) FUNC_1(VAR_4, VAR_6, VAR_7);
  (void) FUNC_0(VAR_4, "%s", VAR_3[VAR_5]);
 }
}
