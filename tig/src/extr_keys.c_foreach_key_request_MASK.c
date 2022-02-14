
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_info {int request; } ;
struct key_visitor_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct key_visitor_state*,char const*,int ,struct request_info const*,int *) ;

__attribute__((used)) static bool
FUNC_1(void *VAR_1, const struct request_info *VAR_2, const char *VAR_3)
{
 struct key_visitor_state *VAR_4 = VAR_1;

 if (VAR_2->request == VAR_0)
  return 1;

 return FUNC_0(VAR_4, VAR_3, VAR_2->request, VAR_2, ((void*)0));
}
