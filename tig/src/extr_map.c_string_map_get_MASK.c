
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_map {char const* key; scalar_t__ htab; } ;


 void* FUNC_0 (scalar_t__,struct string_map*,int ) ;
 int FUNC_1 (char const*) ;

void *
FUNC_2(struct string_map *VAR_0, const char *VAR_1)
{
 if (VAR_0->htab) {
  VAR_0->key = VAR_1;
  return FUNC_0(VAR_0->htab, VAR_0, FUNC_1(VAR_1));
 }

 return ((void*)0);
}
