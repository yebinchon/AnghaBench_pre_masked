
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ztest_ds_t ;
typedef int uint64_t ;
struct TYPE_5__ {scalar_t__ lr_mode; scalar_t__ lr_size; int lr_foid; } ;
typedef TYPE_1__ lr_setattr_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int *) ;
 int FUNC_1 (TYPE_1__*,int,int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(ztest_ds_t *VAR_1, uint64_t VAR_2)
{
 lr_setattr_t *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(sizeof (*VAR_3), ((void*)0));

 VAR_3->lr_foid = VAR_2;
 VAR_3->lr_size = 0;
 VAR_3->lr_mode = 0;

 VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_0);

 FUNC_1(VAR_3, sizeof (*VAR_3), ((void*)0));

 return (VAR_4);
}
