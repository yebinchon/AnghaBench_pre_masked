
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int z_domain_cnt; int z_domain_table; } ;
typedef TYPE_1__ zfs_fuid_info_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (TYPE_1__*,void*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static zfs_fuid_info_t *
FUNC_5(void *VAR_1, void **VAR_2, uint64_t VAR_3, uint64_t VAR_4)
{
 int VAR_5;

 zfs_fuid_info_t *VAR_6;

 VAR_6 = FUNC_1();

 VAR_5 = FUNC_2(VAR_3, VAR_4);

 if (VAR_5 == 0)
  return (VAR_6);

 VAR_6->z_domain_table =
     FUNC_0(VAR_5 * sizeof (char *), VAR_0);

 FUNC_4(VAR_6, VAR_3, VAR_4);

 VAR_6->z_domain_cnt = VAR_5;
 *VAR_2 = FUNC_3(VAR_6, VAR_1, VAR_5);
 return (VAR_6);
}
