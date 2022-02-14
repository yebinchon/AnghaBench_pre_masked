
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keymap {int dummy; } ;
struct key {int dummy; } ;
typedef enum request { ____Placeholder_request } request ;


 int VAR_0 ;
 int VAR_1 ;
 struct keymap const* VAR_2 ;
 int FUNC_0 (struct keymap const*,struct key const*,size_t,int*) ;
 int FUNC_1 (struct keymap const*) ;

enum request
FUNC_2(const struct keymap *VAR_3, const struct key VAR_4[], size_t VAR_5, int *VAR_6)
{
 enum request VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);

 if (!FUNC_1(VAR_3)) {
  int VAR_8 = 0;
  enum request VAR_9 = FUNC_0(VAR_2, VAR_4, VAR_5, &VAR_8);
  if (VAR_6 && (VAR_7 == VAR_1 || VAR_8 > 1))
   (*VAR_6) += VAR_8;
  if (VAR_7 == VAR_1)
   VAR_7 = VAR_9;
 }

 return VAR_7 == VAR_0 ? VAR_1 : VAR_7;
}
