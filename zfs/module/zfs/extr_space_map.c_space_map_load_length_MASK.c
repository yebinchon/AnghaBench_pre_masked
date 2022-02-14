
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int sm_size; int sm_start; } ;
typedef TYPE_1__ space_map_t ;
struct TYPE_7__ {scalar_t__ smla_type; TYPE_1__* smla_sm; int * smla_rt; } ;
typedef TYPE_2__ space_map_load_arg_t ;
typedef int range_tree_t ;
typedef scalar_t__ maptype_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ,TYPE_2__*) ;
 int VAR_1 ;

int
FUNC_5(space_map_t *VAR_2, range_tree_t *VAR_3, maptype_t VAR_4,
    uint64_t VAR_5)
{
 space_map_load_arg_t VAR_6;

 FUNC_0(FUNC_2(VAR_3));

 if (VAR_4 == VAR_0)
  FUNC_1(VAR_3, VAR_2->sm_start, VAR_2->sm_size);

 VAR_6.smla_rt = VAR_3;
 VAR_6.smla_sm = VAR_2;
 VAR_6.smla_type = VAR_4;
 int VAR_7 = FUNC_4(VAR_2, VAR_5,
     VAR_1, &VAR_6);

 if (VAR_7 != 0)
  FUNC_3(VAR_3, ((void*)0), ((void*)0));

 return (VAR_7);
}
