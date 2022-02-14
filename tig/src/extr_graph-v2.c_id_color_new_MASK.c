
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct id_color {char* id; size_t color; } ;


 struct id_color* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;

struct id_color *
FUNC_3(const char *VAR_0, size_t VAR_1)
{
 struct id_color *VAR_2 = FUNC_0(sizeof(struct id_color));

 VAR_2->id = (char *) FUNC_0(FUNC_2(VAR_0) + 1);
 FUNC_1(VAR_2->id, VAR_0);
 VAR_2->color = VAR_1;

 return VAR_2;
}
