
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pl_prop; struct TYPE_4__* pl_next; int pl_all; int pl_fixed; int pl_width; } ;
typedef TYPE_1__ zprop_list_t ;
struct TYPE_5__ {TYPE_1__** last; int type; int hdl; } ;
typedef TYPE_2__ expand_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int,int *,int ) ;

int
FUNC_2(int VAR_3, void *VAR_4)
{
 zprop_list_t *VAR_5;
 expand_data_t *VAR_6 = VAR_4;

 if ((VAR_5 = FUNC_0(VAR_6->hdl, sizeof (zprop_list_t))) == ((void*)0))
  return (VAR_2);

 VAR_5->pl_prop = VAR_3;
 VAR_5->pl_width = FUNC_1(VAR_3, &VAR_5->pl_fixed, VAR_6->type);
 VAR_5->pl_all = VAR_0;

 *(VAR_6->last) = VAR_5;
 VAR_6->last = &VAR_5->pl_next;

 return (VAR_1);
}
