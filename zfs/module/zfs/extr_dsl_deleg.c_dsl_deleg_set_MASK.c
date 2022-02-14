
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvlist_t ;
struct TYPE_3__ {char const* dda_name; int * dda_nvlist; } ;
typedef TYPE_1__ dsl_deleg_arg_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int ,int ,TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *) ;

int
FUNC_2(const char *VAR_4, nvlist_t *VAR_5, boolean_t VAR_6)
{
 dsl_deleg_arg_t VAR_7;



 VAR_7.dda_name = VAR_4;
 VAR_7.dda_nvlist = VAR_5;

 return (FUNC_0(VAR_4, VAR_1,
     VAR_6 ? VAR_3 : VAR_2,
     &VAR_7, FUNC_1(VAR_5), VAR_0));
}
