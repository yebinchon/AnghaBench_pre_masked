
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* ddra_oldname; char const* ddra_newname; int ddra_cred; } ;
typedef TYPE_1__ dsl_dir_rename_arg_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int ,int ,TYPE_1__*,int,int ) ;

int
FUNC_2(const char *VAR_3, const char *VAR_4)
{
 dsl_dir_rename_arg_t VAR_5;

 VAR_5.ddra_oldname = VAR_3;
 VAR_5.ddra_newname = VAR_4;
 VAR_5.ddra_cred = FUNC_0();

 return (FUNC_1(VAR_3,
     VAR_1, VAR_2, &VAR_5,
     3, VAR_0));
}
