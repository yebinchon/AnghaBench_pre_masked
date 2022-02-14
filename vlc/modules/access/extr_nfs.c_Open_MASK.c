
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int vlc_object_t ;
struct TYPE_18__ {void* pf_control; int * pf_seek; int pf_readdir; int pf_read; int psz_url; TYPE_4__* p_sys; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_16__ {int i_count; int * ppsz_names; } ;
struct TYPE_17__ {TYPE_1__ exports; } ;
struct TYPE_20__ {scalar_t__ psz_option; } ;
struct TYPE_19__ {int b_auto_guid; TYPE_10__* p_nfs_url; int * p_mount; TYPE_2__ res; int * p_nfs; int * p_nfsdir; int * p_nfsfh; int * psz_url_decoded_slash; int * psz_url_decoded; TYPE_8__ encoded_url; } ;
typedef TYPE_4__ access_sys_t ;
struct TYPE_15__ {int server; int * path; int * file; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int *,int ,int ,TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_3 (TYPE_3__*,char*,int ,int *) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_10__*) ;
 scalar_t__ FUNC_7 (int *,int ,int *,int ,TYPE_3__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_8 () ;
 scalar_t__ FUNC_9 (scalar_t__,char*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (TYPE_8__*,int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_15 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_16 (int *,int,int) ;
 int * FUNC_17 (int ) ;

__attribute__((used)) static int
FUNC_18(vlc_object_t *VAR_14)
{
    stream_t *VAR_15 = (stream_t *)VAR_14;
    access_sys_t *VAR_16 = FUNC_16(VAR_14, 1, sizeof (*VAR_16));

    if (FUNC_10(VAR_16 == ((void*)0)))
        return VAR_6;
    VAR_15->p_sys = VAR_16;

    VAR_16->b_auto_guid = FUNC_11(VAR_14, "nfs-auto-guid");


    VAR_16->psz_url_decoded = FUNC_17(VAR_15->psz_url);
    if (VAR_16->psz_url_decoded == ((void*)0))
        goto error;


    if (FUNC_12(&VAR_16->encoded_url, VAR_15->psz_url) != 0)
        goto error;
    if (VAR_16->encoded_url.psz_option)
    {
        if (FUNC_9(VAR_16->encoded_url.psz_option, "uid")
         || FUNC_9(VAR_16->encoded_url.psz_option, "gid"))
            VAR_16->b_auto_guid = 0;
    }

    if (FUNC_1(VAR_15, VAR_16->psz_url_decoded) == -1)
        goto error;

    if (VAR_16->p_nfs_url->path != ((void*)0) && VAR_16->p_nfs_url->file != ((void*)0))
    {


        FUNC_3(VAR_15, "nfs_mount: server: '%s', path: '%s'",
                VAR_16->p_nfs_url->server, VAR_16->p_nfs_url->path);

        if (FUNC_7(VAR_16->p_nfs, VAR_16->p_nfs_url->server,
                            VAR_16->p_nfs_url->path, VAR_11, VAR_15) < 0)
        {
            FUNC_4(VAR_15, "nfs_mount_async failed");
            goto error;
        }

        if (FUNC_15(VAR_15, VAR_12) < 0)
            goto error;

        if (VAR_16->psz_url_decoded_slash != ((void*)0))
        {


            FUNC_6(VAR_16->p_nfs_url);
            FUNC_5(VAR_16->p_nfs);
            VAR_16->p_nfs_url = ((void*)0);
            VAR_16->p_nfs = ((void*)0);

            if (FUNC_1(VAR_15, VAR_16->psz_url_decoded_slash) == -1
             || VAR_16->p_nfs_url->path == ((void*)0) || VAR_16->p_nfs_url->file == ((void*)0))
                goto error;

            if (FUNC_7(VAR_16->p_nfs, VAR_16->p_nfs_url->server,
                                VAR_16->p_nfs_url->path, VAR_11, VAR_15) < 0)
            {
                FUNC_4(VAR_15, "nfs_mount_async failed");
                goto error;
            }

            if (FUNC_15(VAR_15, VAR_13) < 0)
                goto error;
        }

        if (VAR_16->p_nfsfh != ((void*)0))
        {
            VAR_15->pf_read = VAR_2;
            VAR_15->pf_seek = VAR_3;
            VAR_15->pf_control = VAR_1;
        }
        else if (VAR_16->p_nfsdir != ((void*)0))
        {
            VAR_15->pf_readdir = VAR_0;
            VAR_15->pf_seek = ((void*)0);
            VAR_15->pf_control = VAR_8;
        }
        else
            FUNC_13();
    }
    else
    {

        FUNC_5(VAR_16->p_nfs);
        VAR_16->p_nfs = ((void*)0);

        VAR_16->p_mount = FUNC_8();
        if (VAR_16->p_mount == ((void*)0))
        {
            FUNC_4(VAR_15, "rpc_init_context failed");
            goto error;
        }

        VAR_16->res.exports.ppsz_names = ((void*)0);
        VAR_16->res.exports.i_count = -1;

        if (FUNC_2(VAR_16->p_mount, VAR_16->p_nfs_url->server,
                                   VAR_9, VAR_15) < 0)
        {
            FUNC_4(VAR_15, "mount_getexports_async failed");
            goto error;
        }

        if (FUNC_14(VAR_15, VAR_10) < 0)
            goto error;

        VAR_15->pf_readdir = VAR_4;
        VAR_15->pf_seek = ((void*)0);
        VAR_15->pf_control = VAR_8;
    }

    return VAR_7;

error:
    FUNC_0(VAR_14);
    return VAR_5;
}
