
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pool_config_ops_t ;
typedef int nvlist_t ;
struct TYPE_8__ {scalar_t__ lpc_open_access_error; int lpc_printerr; int const* lpc_ops; void* lpc_lib_handle; int member_0; } ;
typedef TYPE_1__ libpc_handle_t ;
struct TYPE_9__ {int guid; int * poolname; int * cachefile; } ;
typedef TYPE_2__ importargs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (TYPE_1__*,int *,int *,int ) ;
 int * FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;

nvlist_t *
FUNC_7(void *VAR_3, importargs_t *VAR_4,
    const pool_config_ops_t *VAR_5)
{
 libpc_handle_t VAR_6 = { 0 };
 nvlist_t *VAR_7 = ((void*)0);

 VAR_6.lpc_lib_handle = VAR_3;
 VAR_6.lpc_ops = VAR_5;
 VAR_6.lpc_printerr = VAR_0;

 FUNC_3(VAR_4->poolname == ((void*)0) || VAR_4->guid == 0);

 if (VAR_4->cachefile != ((void*)0))
  VAR_7 = FUNC_4(&VAR_6, VAR_4->cachefile,
      VAR_4->poolname, VAR_4->guid);
 else
  VAR_7 = FUNC_5(&VAR_6, VAR_4);

 if ((VAR_7 == ((void*)0) || FUNC_2(VAR_7)) &&
     VAR_6.lpc_open_access_error && FUNC_1() != 0) {
  (void) FUNC_6(&VAR_6, VAR_1, FUNC_0(VAR_2,
      "no pools found"));
 }

 return (VAR_7);
}
