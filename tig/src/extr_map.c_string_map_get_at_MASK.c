
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_map {char const* key; scalar_t__ htab; } ;


 int VAR_0 ;
 void** FUNC_0 (scalar_t__,struct string_map*,int ,int ) ;
 int FUNC_1 (char const*) ;

void **
FUNC_2(struct string_map *VAR_1, const char *VAR_2)
{
 if (VAR_1->htab) {
  VAR_1->key = VAR_2;
  return FUNC_0(VAR_1->htab, VAR_1, FUNC_1(VAR_2), VAR_0);
 }

 return ((void*)0);
}
