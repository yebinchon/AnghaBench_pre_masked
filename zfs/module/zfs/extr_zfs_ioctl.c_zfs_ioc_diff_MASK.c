
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zc_cookie; int zc_value; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int offset_t ;
struct TYPE_6__ {int f_offset; int f_vnode; } ;
typedef TYPE_2__ file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_1)
{
 file_t *VAR_2;
 offset_t VAR_3;
 int VAR_4;

 VAR_2 = FUNC_3(VAR_1->zc_cookie);
 if (VAR_2 == ((void*)0))
  return (FUNC_0(VAR_0));

 VAR_3 = VAR_2->f_offset;

 VAR_4 = FUNC_2(VAR_1->zc_name, VAR_1->zc_value, VAR_2->f_vnode, &VAR_3);

 if (FUNC_1(VAR_2->f_vnode, VAR_2->f_offset, &VAR_3, ((void*)0)) == 0)
  VAR_2->f_offset = VAR_3;
 FUNC_4(VAR_1->zc_cookie);

 return (VAR_4);
}
