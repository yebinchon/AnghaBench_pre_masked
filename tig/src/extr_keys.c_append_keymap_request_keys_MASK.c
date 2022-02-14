
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keymap {int size; TYPE_1__** data; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_2__ {int request; } ;


 int FUNC_0 (char*,size_t*,TYPE_1__*,int) ;

__attribute__((used)) static bool
FUNC_1(char *VAR_0, size_t *VAR_1, enum request VAR_2,
      const struct keymap *VAR_3, bool VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->size; VAR_5++) {
  if (VAR_3->data[VAR_5]->request == VAR_2) {
   if (!FUNC_0(VAR_0, VAR_1, VAR_3->data[VAR_5], VAR_4))
    return 0;
   if (!VAR_4)
    break;
  }
 }

 return 1;
}
