
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_v2 {int colors; } ;


 int FUNC_0 (int *,char const*,size_t) ;
 size_t FUNC_1 (int *,char const*) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static size_t
FUNC_4(struct graph_v2 *VAR_0, const char *VAR_1)
{
 size_t VAR_2;

 if (!VAR_1)
  VAR_1 = "";

 FUNC_3(&VAR_0->colors);
 VAR_2 = FUNC_1(&VAR_0->colors, VAR_1);

 if (VAR_2 < (size_t) -1) {
  return VAR_2;
 }

 VAR_2 = FUNC_2(&VAR_0->colors);
 FUNC_0(&VAR_0->colors, VAR_1, VAR_2);

 return VAR_2;
}
