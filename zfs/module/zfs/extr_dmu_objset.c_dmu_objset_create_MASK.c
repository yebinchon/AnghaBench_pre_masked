
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ dsl_crypto_params_t ;
typedef int dmu_objset_type_t ;
typedef int dmu_objset_create_sync_func_t ;
struct TYPE_6__ {char const* doca_name; TYPE_1__* doca_dcp; int doca_type; void* doca_userarg; int doca_userfunc; int doca_flags; int doca_cred; } ;
typedef TYPE_2__ dmu_objset_create_arg_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int ,int ,TYPE_2__*,int,int ) ;

int
FUNC_2(const char *VAR_3, dmu_objset_type_t VAR_4, uint64_t VAR_5,
    dsl_crypto_params_t *VAR_6, dmu_objset_create_sync_func_t VAR_7, void *VAR_8)
{
 dmu_objset_create_arg_t VAR_9;
 dsl_crypto_params_t VAR_10 = { 0 };

 VAR_9.doca_name = VAR_3;
 VAR_9.doca_cred = FUNC_0();
 VAR_9.doca_flags = VAR_5;
 VAR_9.doca_userfunc = VAR_7;
 VAR_9.doca_userarg = VAR_8;
 VAR_9.doca_type = VAR_4;
 VAR_9.doca_dcp = (VAR_6 != ((void*)0)) ? VAR_6 : &VAR_10;

 return (FUNC_1(VAR_3,
     VAR_1, VAR_2, &VAR_9,
     6, VAR_0));
}
