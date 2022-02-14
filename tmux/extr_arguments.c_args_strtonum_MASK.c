
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct args_value {int value; } ;
struct args_entry {int values; } ;
struct args {int dummy; } ;


 struct args_value* FUNC_0 (int *,int ) ;
 struct args_entry* FUNC_1 (struct args*,int ) ;
 int VAR_0 ;
 long long FUNC_2 (int ,long long,long long,char const**) ;
 char* FUNC_3 (char const*) ;

long long
FUNC_4(struct args *VAR_1, u_char VAR_2, long long VAR_3, long long VAR_4,
    char **VAR_5)
{
 const char *VAR_6;
 long long VAR_7;
 struct args_entry *VAR_8;
 struct args_value *VAR_9;

 if ((VAR_8 = FUNC_1(VAR_1, VAR_2)) == ((void*)0)) {
  *VAR_5 = FUNC_3("missing");
  return (0);
 }
 VAR_9 = FUNC_0(&VAR_8->values, VAR_0);

 VAR_7 = FUNC_2(VAR_9->value, VAR_3, VAR_4, &VAR_6);
 if (VAR_6 != ((void*)0)) {
  *VAR_5 = FUNC_3(VAR_6);
  return (0);
 }

 *VAR_5 = ((void*)0);
 return (VAR_7);
}
