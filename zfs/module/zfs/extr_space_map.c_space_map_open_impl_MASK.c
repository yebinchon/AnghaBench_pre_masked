
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_longlong_t ;
struct TYPE_6__ {TYPE_3__* sm_dbuf; int sm_phys; int sm_blksz; int sm_object; int sm_os; } ;
typedef TYPE_1__ space_map_t ;
struct TYPE_7__ {int db_data; } ;


 int FUNC_0 (int ,int ,TYPE_1__*,TYPE_3__**) ;
 int FUNC_1 (TYPE_3__*,int *,int *) ;

__attribute__((used)) static int
FUNC_2(space_map_t *VAR_0)
{
 int VAR_1;
 u_longlong_t VAR_2;

 VAR_1 = FUNC_0(VAR_0->sm_os, VAR_0->sm_object, VAR_0, &VAR_0->sm_dbuf);
 if (VAR_1)
  return (VAR_1);

 FUNC_1(VAR_0->sm_dbuf, &VAR_0->sm_blksz, &VAR_2);
 VAR_0->sm_phys = VAR_0->sm_dbuf->db_data;
 return (0);
}
