
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* ddrsa_fsname; char const* ddrsa_oldsnapname; char const* ddrsa_newsnapname; int ddrsa_recursive; } ;
typedef TYPE_1__ dsl_dataset_rename_snapshot_arg_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ,int ,TYPE_1__*,int,int ) ;

int
FUNC_1(const char *VAR_3,
    const char *VAR_4, const char *VAR_5, boolean_t VAR_6)
{
 dsl_dataset_rename_snapshot_arg_t VAR_7;

 VAR_7.ddrsa_fsname = VAR_3;
 VAR_7.ddrsa_oldsnapname = VAR_4;
 VAR_7.ddrsa_newsnapname = VAR_5;
 VAR_7.ddrsa_recursive = VAR_6;

 return (FUNC_0(VAR_3, VAR_1,
     VAR_2, &VAR_7,
     1, VAR_0));
}
