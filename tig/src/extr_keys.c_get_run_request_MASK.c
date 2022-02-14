
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run_request {int dummy; } ;
typedef enum request { ____Placeholder_request } request ;


 int VAR_0 ;
 struct run_request* VAR_1 ;
 int VAR_2 ;

struct run_request *
FUNC_0(enum request VAR_3)
{
 if (VAR_3 <= VAR_0 || VAR_3 > VAR_0 + VAR_2)
  return ((void*)0);
 return &VAR_1[VAR_3 - VAR_0 - 1];
}
