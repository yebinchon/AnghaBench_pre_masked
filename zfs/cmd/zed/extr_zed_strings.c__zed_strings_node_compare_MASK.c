
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* key; } ;
typedef TYPE_1__ zed_strings_node_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const char *VAR_2;
 const char *VAR_3;
 int VAR_4;

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));

 VAR_2 = ((const zed_strings_node_t *) VAR_0)->key;
 FUNC_0(VAR_2 != ((void*)0));
 VAR_3 = ((const zed_strings_node_t *) VAR_1)->key;
 FUNC_0(VAR_3 != ((void*)0));
 VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (VAR_4 < 0)
  return (-1);

 if (VAR_4 > 0)
  return (1);

 return (0);
}
