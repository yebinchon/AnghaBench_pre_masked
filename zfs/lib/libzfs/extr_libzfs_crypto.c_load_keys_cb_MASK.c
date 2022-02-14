
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int cb_numfailed; int cb_numattempted; } ;
typedef TYPE_1__ loadkey_cbdata_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int (*) (int *,void*),TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(zfs_handle_t *VAR_3, void *VAR_4)
{
 int VAR_5;
 boolean_t VAR_6;
 loadkey_cbdata_t *VAR_7 = VAR_4;
 uint64_t VAR_8 = FUNC_4(VAR_3, VAR_2);


 VAR_5 = FUNC_1(VAR_3, &VAR_6, ((void*)0));
 if (VAR_5 != 0 || !VAR_6)
  goto out;


 if (VAR_8 == VAR_1)
  goto out;


 VAR_7->cb_numattempted++;

 VAR_5 = FUNC_2(VAR_3, VAR_0, ((void*)0));
 if (VAR_5)
  VAR_7->cb_numfailed++;

out:
 (void) FUNC_3(VAR_3, FUNC_5, VAR_7);
 FUNC_0(VAR_3);


 return (0);
}
