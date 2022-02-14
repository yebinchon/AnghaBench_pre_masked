
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct id_color {size_t color; } ;
struct colors {int id_map; int * count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void**) ;
 void** FUNC_1 (int ,struct id_color*,int ) ;
 int FUNC_2 (struct id_color*) ;
 struct id_color* FUNC_3 (char const*,int ) ;

__attribute__((used)) static void
FUNC_4(struct colors *VAR_1, const char *VAR_2)
{
 struct id_color *VAR_3 = FUNC_3(VAR_2, 0);
 void **VAR_4 = FUNC_1(VAR_1->id_map, VAR_3, VAR_0);

 if (VAR_4 != ((void*)0) && *VAR_4 != ((void*)0)) {
  VAR_1->count[((struct id_color *) *VAR_4)->color]--;
  FUNC_0(VAR_1->id_map, VAR_4);
 }

 FUNC_2(VAR_3);
}
