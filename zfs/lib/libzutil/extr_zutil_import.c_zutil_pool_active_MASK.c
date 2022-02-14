
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int lpc_lib_handle; TYPE_1__* lpc_ops; } ;
typedef TYPE_2__ libpc_handle_t ;
typedef int boolean_t ;
struct TYPE_4__ {int (* pco_pool_active ) (int ,char const*,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int ,int *) ;

__attribute__((used)) static int
FUNC_2(libpc_handle_t *VAR_0, const char *VAR_1, uint64_t VAR_2,
    boolean_t *VAR_3)
{
 FUNC_0(VAR_0->lpc_ops->pco_pool_active != ((void*)0));

 int VAR_4 = VAR_0->lpc_ops->pco_pool_active(VAR_0->lpc_lib_handle, VAR_1,
     VAR_2, VAR_3);

 return (VAR_4);
}
