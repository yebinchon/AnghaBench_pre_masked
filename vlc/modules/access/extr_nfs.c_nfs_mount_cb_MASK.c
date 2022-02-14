
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {char* psz_path; } ;
typedef TYPE_2__ vlc_url_t ;
struct nfs_context {int dummy; } ;
struct TYPE_14__ {int psz_url; TYPE_4__* p_sys; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_15__ {int b_error; TYPE_1__* p_nfs_url; struct nfs_context* p_nfs; int * psz_url_decoded_slash; } ;
typedef TYPE_4__ access_sys_t ;
struct TYPE_12__ {int file; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int,void*) ;
 int * FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (struct nfs_context*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,char*,int ) ;
 scalar_t__ FUNC_6 (struct nfs_context*,int ,int ,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_10(int VAR_2, struct nfs_context *VAR_3, void *VAR_4,
             void *VAR_5)
{
    FUNC_2(VAR_3);
    stream_t *VAR_6 = VAR_5;
    access_sys_t *VAR_7 = VAR_6->p_sys;
    FUNC_3(VAR_7->p_nfs == VAR_3);
    (void) VAR_4;






    if (VAR_2 == -VAR_0 && VAR_7->psz_url_decoded_slash == ((void*)0))
    {
        vlc_url_t VAR_8;
        FUNC_9(&VAR_8, VAR_6->psz_url);
        if (VAR_8.psz_path == ((void*)0) || VAR_8.psz_path[0] == '\0'
         || VAR_8.psz_path[FUNC_7(VAR_8.psz_path) - 1] == '/'
         || (VAR_7->psz_url_decoded_slash = FUNC_1(&VAR_8, "/")) == ((void*)0))
        {
            FUNC_8(&VAR_8);
            FUNC_0(VAR_6, VAR_2, VAR_4);
            return;
        }
        else
        {
            FUNC_8(&VAR_8);
            FUNC_5(VAR_6, "trying to mount '%s' again by adding a '/'",
                     VAR_6->psz_url);
            return;
        }
    }

    if (FUNC_0(VAR_6, VAR_2, VAR_4))
        return;

    if (FUNC_6(VAR_7->p_nfs, VAR_7->p_nfs_url->file, VAR_1,
                         VAR_6) < 0)
    {
        FUNC_4(VAR_6, "nfs_stat64_async failed");
        VAR_7->b_error = 1;
    }
}
