
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct view {scalar_t__ has_scrolled; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ,int,char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,char const*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static bool
FUNC_8(struct view *VAR_4, const char *VAR_5, const char *VAR_6, va_list VAR_7)
{
 if (VAR_0)
  return 0;

 if (!VAR_1 || *VAR_6) {
  FUNC_7(VAR_2, 0, 0);
  if (VAR_4 && VAR_4->has_scrolled && VAR_3)
   FUNC_5(VAR_2);
  if (*VAR_6) {
   FUNC_4(VAR_2, VAR_6, VAR_7);
   VAR_1 = 0;
  } else {
   VAR_1 = 1;
  }
  FUNC_6(VAR_2);

  if (VAR_5 && *VAR_5) {
   size_t VAR_8 = FUNC_3(VAR_5);
   int VAR_9, VAR_10, VAR_11, VAR_12;

   FUNC_1(VAR_2, VAR_10, VAR_9);
   FUNC_0(VAR_2, VAR_12, VAR_11);
   (void) VAR_12;
   if (VAR_8 < VAR_11 - VAR_9) {
    FUNC_2(VAR_2, 0, VAR_11 - VAR_8, "%s", VAR_5);
    FUNC_7(VAR_2, VAR_10, VAR_9);
   }
  }

  return 1;
 }

 return 0;
}
