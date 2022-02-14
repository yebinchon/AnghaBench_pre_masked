
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct nfs_stat_64 {int nfs_mode; int nfs_gid; int nfs_uid; } ;
struct nfs_context {int dummy; } ;
struct TYPE_10__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_11__ {int b_error; TYPE_1__* p_nfs_url; struct nfs_context* p_nfs; struct nfs_stat_64 stat; scalar_t__ b_auto_guid; } ;
typedef TYPE_3__ access_sys_t ;
struct TYPE_9__ {int file; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int,void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct nfs_context*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,char*,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_7 (struct nfs_context*,int ,int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (struct nfs_context*,int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_9 (struct nfs_context*,int ) ;
 int FUNC_10 (struct nfs_context*,int ) ;

__attribute__((used)) static void
FUNC_11(int VAR_3, struct nfs_context *VAR_4, void *VAR_5,
              void *VAR_6)
{
    FUNC_3(VAR_4);
    stream_t *VAR_7 = VAR_6;
    access_sys_t *VAR_8 = VAR_7->p_sys;
    FUNC_4(VAR_8->p_nfs == VAR_4);
    if (FUNC_0(VAR_7, VAR_3, VAR_5))
        return;

    struct nfs_stat_64 *VAR_9 = VAR_5;
    VAR_8->stat = *VAR_9;

    if (VAR_8->b_auto_guid)
    {
        FUNC_10(VAR_8->p_nfs, VAR_8->stat.nfs_uid);
        FUNC_9(VAR_8->p_nfs, VAR_8->stat.nfs_gid);
    }

    if (FUNC_1(VAR_8->stat.nfs_mode))
    {
        FUNC_5(VAR_7, "nfs_opendir: '%s'", VAR_8->p_nfs_url->file);
        if (FUNC_8(VAR_8->p_nfs, VAR_8->p_nfs_url->file,
                              VAR_2, VAR_7) != 0)
        {
            FUNC_6(VAR_7, "nfs_opendir_async failed");
            VAR_8->b_error = 1;
        }
    }
    else if (FUNC_2(VAR_8->stat.nfs_mode))
    {
        FUNC_5(VAR_7, "nfs_open: '%s'", VAR_8->p_nfs_url->file);
        if (FUNC_7(VAR_8->p_nfs, VAR_8->p_nfs_url->file, VAR_0,
                           VAR_1, VAR_7) < 0)
        {
            FUNC_6(VAR_7, "nfs_open_async failed");
            VAR_8->b_error = 1;
        }
    }
    else
    {
        FUNC_6(VAR_7, "nfs_stat64_cb: file type not handled");
        VAR_8->b_error = 1;
    }
}
