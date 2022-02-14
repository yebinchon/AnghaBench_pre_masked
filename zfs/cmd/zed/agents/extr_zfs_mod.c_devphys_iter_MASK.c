
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_process_func_t ;
struct TYPE_3__ {char const* dd_compare; char const* dd_new_devid; int dd_found; int dd_islabeled; int dd_prop; int dd_func; int member_0; } ;
typedef TYPE_1__ dev_data_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_1(const char *VAR_4, const char *VAR_5, zfs_process_func_t VAR_6,
    boolean_t VAR_7)
{
 dev_data_t VAR_8 = { 0 };

 VAR_8.dd_compare = VAR_4;
 VAR_8.dd_func = VAR_6;
 VAR_8.dd_prop = VAR_1;
 VAR_8.dd_found = VAR_0;
 VAR_8.dd_islabeled = VAR_7;
 VAR_8.dd_new_devid = VAR_5;

 (void) FUNC_0(VAR_2, VAR_3, &VAR_8);

 return (VAR_8.dd_found);
}
