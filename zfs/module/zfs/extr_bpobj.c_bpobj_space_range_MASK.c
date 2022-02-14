
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct space_range_arg {scalar_t__ used; scalar_t__ comp; scalar_t__ uncomp; scalar_t__ maxtxg; scalar_t__ mintxg; int spa; int member_0; } ;
struct TYPE_6__ {int bpo_os; scalar_t__ bpo_havecomp; } ;
typedef TYPE_1__ bpobj_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,struct space_range_arg*,int *) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;

int
FUNC_5(bpobj_t *VAR_3, uint64_t VAR_4, uint64_t VAR_5,
    uint64_t *VAR_6, uint64_t *VAR_7, uint64_t *VAR_8)
{
 struct space_range_arg VAR_9 = { 0 };
 int VAR_10;

 FUNC_0(FUNC_1(VAR_3));





 if (VAR_4 < VAR_0 && VAR_5 == VAR_1 && VAR_3->bpo_havecomp)
  return (FUNC_3(VAR_3, VAR_6, VAR_7, VAR_8));

 VAR_9.spa = FUNC_4(VAR_3->bpo_os);
 VAR_9.mintxg = VAR_4;
 VAR_9.maxtxg = VAR_5;

 VAR_10 = FUNC_2(VAR_3, VAR_2, &VAR_9, ((void*)0));
 *VAR_6 = VAR_9.used;
 *VAR_7 = VAR_9.comp;
 *VAR_8 = VAR_9.uncomp;
 return (VAR_10);
}
