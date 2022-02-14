
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zc_guid; int zc_inject_record; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;


 int FUNC_0 (int ,int,int*,int *) ;

__attribute__((used)) static int
FUNC_1(zfs_cmd_t *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_2 = FUNC_0(VAR_0->zc_name, (int)VAR_0->zc_guid, &VAR_1,
     &VAR_0->zc_inject_record);

 if (VAR_2 == 0)
  VAR_0->zc_guid = (uint64_t)VAR_1;

 return (VAR_2);
}
