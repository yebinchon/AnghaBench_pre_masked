
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ddt_key_t ;
struct TYPE_5__ {int dde_key; int dde_cv; } ;
typedef TYPE_1__ ddt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int ,int ) ;

__attribute__((used)) static ddt_entry_t *
FUNC_3(const ddt_key_t *VAR_3)
{
 ddt_entry_t *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 FUNC_0(VAR_4, sizeof (ddt_entry_t));
 FUNC_1(&VAR_4->dde_cv, ((void*)0), VAR_0, ((void*)0));

 VAR_4->dde_key = *VAR_3;

 return (VAR_4);
}
