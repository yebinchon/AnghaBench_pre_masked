
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* pl_next; int pl_all; int pl_fixed; int pl_prop; int pl_width; } ;
typedef TYPE_1__ zprop_list_t ;
typedef int zfs_type_t ;
typedef int libzfs_handle_t ;
struct TYPE_7__ {int type; int * hdl; TYPE_1__** last; } ;
typedef TYPE_2__ expand_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;

int
FUNC_3(libzfs_handle_t *VAR_7, zprop_list_t **VAR_8, zfs_type_t VAR_9)
{
 zprop_list_t *VAR_10;
 zprop_list_t **VAR_11;
 expand_data_t VAR_12;

 if (*VAR_8 == ((void*)0)) {





  VAR_11 = VAR_8;

  VAR_12.last = VAR_11;
  VAR_12.hdl = VAR_7;
  VAR_12.type = VAR_9;

  if (FUNC_1(VAR_6, &VAR_12, VAR_0,
      VAR_0, VAR_9) == VAR_5)
   return (-1);





  if ((VAR_10 = FUNC_0(VAR_7, sizeof (zprop_list_t))) == ((void*)0))
   return (-1);

  VAR_10->pl_prop = (VAR_9 == VAR_3) ? VAR_4 :
      VAR_2;
  VAR_10->pl_width = FUNC_2(VAR_10->pl_prop,
      &VAR_10->pl_fixed, VAR_9);
  VAR_10->pl_all = VAR_1;
  VAR_10->pl_next = *VAR_8;
  *VAR_8 = VAR_10;
 }
 return (0);
}
