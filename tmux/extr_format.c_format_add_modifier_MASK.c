
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct format_modifier {char* modifier; size_t size; char** argv; int argc; } ;


 int FUNC_0 (char*,char const*,size_t) ;
 struct format_modifier* FUNC_1 (struct format_modifier*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(struct format_modifier **VAR_0, u_int *VAR_1,
    const char *VAR_2, size_t VAR_3, char **VAR_4, int VAR_5)
{
 struct format_modifier *VAR_6;

 *VAR_0 = FUNC_1(*VAR_0, (*VAR_1) + 1, sizeof **VAR_0);
 VAR_6 = &(*VAR_0)[(*VAR_1)++];

 FUNC_0(VAR_6->modifier, VAR_2, VAR_3);
 VAR_6->modifier[VAR_3] = '\0';
 VAR_6->size = VAR_3;

 VAR_6->argv = VAR_4;
 VAR_6->argc = VAR_5;
}
