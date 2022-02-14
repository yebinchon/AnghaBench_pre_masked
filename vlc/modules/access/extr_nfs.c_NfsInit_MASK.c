
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {int * p_nfs; TYPE_3__* p_nfs_url; } ;
typedef TYPE_2__ access_sys_t ;
struct TYPE_8__ {int * server; } ;


 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 TYPE_3__* FUNC_3 (int *,char const*) ;

__attribute__((used)) static int
FUNC_4(stream_t *VAR_0, const char *VAR_1)
{
    access_sys_t *VAR_2 = VAR_0->p_sys;
    VAR_2->p_nfs = FUNC_2();
    if (VAR_2->p_nfs == ((void*)0))
    {
        FUNC_0(VAR_0, "nfs_init_context failed");
        return -1;
    }

    VAR_2->p_nfs_url = FUNC_3(VAR_2->p_nfs, VAR_1);
    if (VAR_2->p_nfs_url == ((void*)0) || VAR_2->p_nfs_url->server == ((void*)0))
    {
        FUNC_0(VAR_0, "nfs_parse_url_incomplete failed: '%s'",
                FUNC_1(VAR_2->p_nfs));
        return -1;
    }
    return 0;
}
