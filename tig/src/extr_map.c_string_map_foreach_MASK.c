
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_map_iterator {void* member_1; int member_0; } ;
struct string_map {scalar_t__ htab; } ;
typedef int string_map_iterator_fn ;


 int FUNC_0 (scalar_t__,int ,struct string_map_iterator*) ;
 int VAR_0 ;

void
FUNC_1(struct string_map *VAR_1, string_map_iterator_fn VAR_2, void *VAR_3)
{
 if (VAR_1->htab) {
  struct string_map_iterator VAR_4 = { VAR_2, VAR_3 };

  FUNC_0(VAR_1->htab, VAR_0, &VAR_4);
 }
}
