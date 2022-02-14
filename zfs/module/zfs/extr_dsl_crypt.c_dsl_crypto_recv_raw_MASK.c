
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int nvlist_t ;
struct TYPE_3__ {int dcrka_do_key; int * dcrka_nvl; int dcrka_ostype; void* dcrka_fromobj; void* dcrka_dsobj; } ;
typedef TYPE_1__ dsl_crypto_recv_key_arg_t ;
typedef int dmu_objset_type_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ,int ,TYPE_1__*,int,int ) ;

int
FUNC_1(const char *VAR_3, uint64_t VAR_4, uint64_t VAR_5,
    dmu_objset_type_t VAR_6, nvlist_t *VAR_7, boolean_t VAR_8)
{
 dsl_crypto_recv_key_arg_t VAR_9;

 VAR_9.dcrka_dsobj = VAR_4;
 VAR_9.dcrka_fromobj = VAR_5;
 VAR_9.dcrka_ostype = VAR_6;
 VAR_9.dcrka_nvl = VAR_7;
 VAR_9.dcrka_do_key = VAR_8;

 return (FUNC_0(VAR_3, VAR_1,
     VAR_2, &VAR_9, 1, VAR_0));
}
