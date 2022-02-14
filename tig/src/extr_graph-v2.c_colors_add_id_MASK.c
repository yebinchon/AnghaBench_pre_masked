
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct id_color {int dummy; } ;
struct colors {int * count; int id_map; } ;


 int VAR_0 ;
 void** FUNC_0 (int ,struct id_color*,int ) ;
 int FUNC_1 (struct id_color*) ;
 struct id_color* FUNC_2 (char const*,size_t const) ;

__attribute__((used)) static void
FUNC_3(struct colors *VAR_1, const char *VAR_2, const size_t VAR_3)
{
 struct id_color *VAR_4 = FUNC_2(VAR_2, VAR_3);
 void **VAR_5 = FUNC_0(VAR_1->id_map, VAR_4, VAR_0);

 if (VAR_5 != ((void*)0) && *VAR_5 == ((void*)0)) {
  *VAR_5 = VAR_4;
  VAR_1->count[VAR_3]++;
 } else {
  FUNC_1(VAR_4);
 }
}
