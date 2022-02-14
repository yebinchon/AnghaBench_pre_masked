
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_entry {int dummy; } ;
struct options {int dummy; } ;


 int FUNC_0 (char*) ;
 struct options_entry* FUNC_1 (struct options*,char*) ;
 struct options_entry* FUNC_2 (struct options*,char*) ;
 char* FUNC_3 (char const*,int*,int*) ;

struct options_entry *
FUNC_4(struct options *VAR_0, const char *VAR_1, int *VAR_2, int VAR_3,
    int* VAR_4)
{
 char *VAR_5;
 struct options_entry *VAR_6;

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_4);
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 *VAR_4 = 0;
 if (VAR_3)
  VAR_6 = FUNC_2(VAR_0, VAR_5);
 else
  VAR_6 = FUNC_1(VAR_0, VAR_5);
 FUNC_0(VAR_5);
 return (VAR_6);
}
