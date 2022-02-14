
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run_request_flags {int member_0; } ;
struct run_request {struct keymap* keymap; struct run_request_flags flags; int argv; } ;
struct keymap {int dummy; } ;
struct key {int dummy; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct keymap*,scalar_t__,struct key const*,size_t) ;
 int FUNC_1 (int *,char const**) ;
 int FUNC_2 (struct run_request_flags*,char const**) ;
 int FUNC_3 (struct run_request**,size_t,int) ;
 struct run_request* VAR_3 ;
 size_t VAR_4 ;

enum status_code
FUNC_4(struct keymap *VAR_5, const struct key VAR_6[],
  size_t VAR_7, const char **VAR_8)
{
 struct run_request *VAR_9;
 struct run_request_flags VAR_10 = {0};
 enum status_code VAR_11 = FUNC_2(&VAR_10, VAR_8);

 if (VAR_11 != VAR_2)
  return VAR_11;

 if (!FUNC_3(&VAR_3, VAR_4, 1))
  return VAR_0;

 if (!FUNC_1(&VAR_3[VAR_4].argv, VAR_8))
  return VAR_0;

 VAR_9 = &VAR_3[VAR_4++];
 VAR_9->flags = VAR_10;
 VAR_9->keymap = VAR_5;

 return FUNC_0(VAR_5, VAR_1 + VAR_4, VAR_6, VAR_7);
}
