
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct id_color {size_t color; } ;
struct colors {int id_map; } ;


 scalar_t__ FUNC_0 (int ,struct id_color*) ;
 int FUNC_1 (struct id_color*) ;
 struct id_color* FUNC_2 (char const*,int ) ;

__attribute__((used)) static size_t
FUNC_3(struct colors *VAR_0, const char *VAR_1)
{
 struct id_color *VAR_2 = FUNC_2(VAR_1, 0);
 struct id_color *VAR_3 = (struct id_color *) FUNC_0(VAR_0->id_map, VAR_2);

 FUNC_1(VAR_2);

 if (VAR_3 == ((void*)0)) {
  return (size_t) -1;
 }
 return VAR_3->color;
}
