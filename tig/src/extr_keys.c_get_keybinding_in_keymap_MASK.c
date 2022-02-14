
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keymap {size_t size; TYPE_1__** data; } ;
struct key {int dummy; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_2__ {scalar_t__ request; size_t keys; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct key const*,size_t,int *) ;

__attribute__((used)) static enum request
FUNC_1(const struct keymap *VAR_2, const struct key VAR_3[], size_t VAR_4, int *VAR_5)
{
 enum request VAR_6 = VAR_1;
 size_t VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2->size; VAR_7++)
  if (FUNC_0(VAR_2->data[VAR_7], VAR_3, VAR_4, ((void*)0))) {
   if (VAR_5 && VAR_2->data[VAR_7]->request != VAR_0)
    (*VAR_5)++;



   if (VAR_2->data[VAR_7]->keys == VAR_4)
    VAR_6 = VAR_2->data[VAR_7]->request;
  }

 return VAR_6;
}
