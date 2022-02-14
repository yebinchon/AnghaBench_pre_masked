
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_map {int htab; } ;


 int FUNC_0 (int ,void**) ;
 void** FUNC_1 (struct string_map*,char const*) ;

void *
FUNC_2(struct string_map *VAR_0, const char *VAR_1)
{
 void *VAR_2 = ((void*)0);
 void **VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (VAR_3) {
  VAR_2 = *VAR_3;
  FUNC_0(VAR_0->htab, VAR_3);
 }

 return VAR_2;
}
