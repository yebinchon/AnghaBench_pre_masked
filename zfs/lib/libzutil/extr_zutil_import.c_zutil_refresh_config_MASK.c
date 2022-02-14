
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nvlist_t ;
struct TYPE_5__ {int lpc_lib_handle; TYPE_1__* lpc_ops; } ;
typedef TYPE_2__ libpc_handle_t ;
struct TYPE_4__ {int * (* pco_refresh_config ) (int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *) ;

__attribute__((used)) static nvlist_t *
FUNC_2(libpc_handle_t *VAR_0, nvlist_t *VAR_1)
{
 FUNC_0(VAR_0->lpc_ops->pco_refresh_config != ((void*)0));

 return (VAR_0->lpc_ops->pco_refresh_config(VAR_0->lpc_lib_handle,
     VAR_1));
}
