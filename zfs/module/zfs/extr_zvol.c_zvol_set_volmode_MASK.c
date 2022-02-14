
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* zsda_name; int zsda_value; int zsda_source; } ;
typedef TYPE_1__ zvol_set_prop_int_arg_t ;
typedef int zprop_source_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int ,TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(const char *VAR_3, zprop_source_t VAR_4, uint64_t VAR_5)
{
 zvol_set_prop_int_arg_t VAR_6;

 VAR_6.zsda_name = VAR_3;
 VAR_6.zsda_source = VAR_4;
 VAR_6.zsda_value = VAR_5;

 return (FUNC_0(VAR_3, VAR_1,
     VAR_2, &VAR_6, 0, VAR_0));
}
