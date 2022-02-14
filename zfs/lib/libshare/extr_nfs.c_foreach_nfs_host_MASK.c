
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* sa_share_impl_t ;
struct TYPE_8__ {char* security; void* cookie; int sharepath; int callback; } ;
typedef TYPE_2__ nfs_host_cookie_t ;
typedef int nfs_host_callback_t ;
struct TYPE_9__ {char* shareopts; } ;
struct TYPE_7__ {int sharepath; } ;


 TYPE_5__* FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(sa_share_impl_t VAR_2, nfs_host_callback_t VAR_3,
    void *VAR_4)
{
 nfs_host_cookie_t VAR_5;
 char *VAR_6;

 VAR_5.callback = VAR_3;
 VAR_5.sharepath = VAR_2->sharepath;
 VAR_5.cookie = VAR_4;
 VAR_5.security = "sys";

 VAR_6 = FUNC_0(VAR_2, VAR_1)->shareopts;

 return FUNC_1(VAR_6, VAR_0,
     &VAR_5);
}
