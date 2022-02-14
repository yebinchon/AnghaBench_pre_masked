
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct environ_entry {char* name; } ;
struct environ {int dummy; } ;


 struct environ_entry* FUNC_0 (int ,struct environ*,struct environ_entry*) ;
 int VAR_0 ;

struct environ_entry *
FUNC_1(struct environ *VAR_1, const char *VAR_2)
{
 struct environ_entry VAR_3;

 VAR_3.name = (char *) VAR_2;
 return (FUNC_0(VAR_0, VAR_1, &VAR_3));
}
