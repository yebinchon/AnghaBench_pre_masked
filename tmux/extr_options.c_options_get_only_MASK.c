
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_entry {char const* name; } ;
struct options {int tree; } ;


 struct options_entry* FUNC_0 (int ,int *,struct options_entry*) ;
 int VAR_0 ;

struct options_entry *
FUNC_1(struct options *VAR_1, const char *VAR_2)
{
 struct options_entry VAR_3;

 VAR_3.name = VAR_2;
 return (FUNC_0(VAR_0, &VAR_1->tree, &VAR_3));
}
