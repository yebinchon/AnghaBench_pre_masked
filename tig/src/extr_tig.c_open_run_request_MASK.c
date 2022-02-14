
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct run_request {int dummy; } ;
typedef enum request { ____Placeholder_request } request ;


 int VAR_0 ;
 int FUNC_0 (struct view*,struct run_request*) ;
 struct run_request* FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static enum request
FUNC_3(struct view *VAR_1, enum request VAR_2)
{
 struct run_request *VAR_3 = FUNC_1(VAR_2);

 if (!VAR_3) {
  FUNC_2("Unknown run request");
  return VAR_0;
 }

 return FUNC_0(VAR_1, VAR_3);
}
