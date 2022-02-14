
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int ,char const**) ;
 struct window* FUNC_1 (int ) ;

struct window *
FUNC_2(const char *VAR_1)
{
 const char *VAR_2;
 u_int VAR_3;

 if (*VAR_1 != '@')
  return (((void*)0));

 VAR_3 = FUNC_0(VAR_1 + 1, 0, VAR_0, &VAR_2);
 if (VAR_2 != ((void*)0))
  return (((void*)0));
 return (FUNC_1(VAR_3));
}
