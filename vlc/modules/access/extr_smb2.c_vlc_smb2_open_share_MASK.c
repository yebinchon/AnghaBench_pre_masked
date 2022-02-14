
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {char* psz_username; char* psz_password; char* psz_realm; } ;
typedef TYPE_1__ vlc_credential ;
struct smb2_url {char* share; int path; int server; } ;
struct smb2_stat_64 {scalar_t__ smb2_type; int smb2_size; } ;
struct access_sys {int smb2_connected; int error_status; int smb2; int smb2_size; } ;
struct TYPE_15__ {struct access_sys* p_sys; } ;
typedef TYPE_2__ stream_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ,int ,char const*,char const*,int ,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ,TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ,int ,TYPE_2__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ,int ,struct smb2_stat_64*,int ,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_11(stream_t *VAR_7, const struct smb2_url *VAR_8,
                    const vlc_credential *VAR_9)
{
    struct access_sys *VAR_10 = VAR_7->p_sys;

    const bool VAR_11 = VAR_8->share[0] == '\0';
    const char *VAR_12 = VAR_9->psz_username;
    const char *VAR_13 = VAR_9->psz_password;
    const char *VAR_14 = VAR_9->psz_realm;
    const char *VAR_15 = VAR_11 ? "IPC$" : VAR_8->share;

    if (!VAR_12)
    {
        VAR_12 = "Guest";

        VAR_13 = ((void*)0);
    }

    FUNC_6(VAR_10->smb2, VAR_13);
    FUNC_5(VAR_10->smb2, VAR_14 ? VAR_14 : "");

    int VAR_16 = FUNC_2(VAR_10->smb2, VAR_8->server, VAR_15,
                                       VAR_12, VAR_3, VAR_7);
    if (VAR_16 < 0)
    {
        FUNC_0(VAR_7, "smb2_connect_share_async", VAR_16);
        goto error;
    }
    if (FUNC_10(VAR_7, 0) != 0)
        goto error;
    VAR_10->smb2_connected = 1;

    int VAR_17;
    if (VAR_11)
        VAR_17 = FUNC_7(VAR_10->smb2, VAR_6, VAR_7);
    else
    {
        struct smb2_stat_64 VAR_18;
        if (FUNC_8(VAR_10->smb2, VAR_8->path, &VAR_18,
                            VAR_3, VAR_7) < 0)
            FUNC_0(VAR_7, "smb2_stat_async", 1);

        if (FUNC_10(VAR_7, 0) != 0)
            goto error;

        if (VAR_18.smb2_type == VAR_2)
        {
            VAR_10->smb2_size = VAR_18.smb2_size;
            VAR_17 = FUNC_3(VAR_10->smb2, VAR_8->path, VAR_0,
                                  VAR_4, VAR_7);
        }
        else if (VAR_18.smb2_type == VAR_1)
            VAR_17 = FUNC_4(VAR_10->smb2, VAR_8->path,
                                     VAR_5, VAR_7);
        else
        {
            FUNC_1(VAR_7, "smb2_stat_cb: file type not handled");
            VAR_10->error_status = 1;
            goto error;
        }
    }

    if (VAR_17 < 0)
    {
        FUNC_0(VAR_7, "smb2_open*_async", 1);
        goto error;
    }

    if (FUNC_10(VAR_7, 0) != 0)
        goto error;
    return 0;

error:
    FUNC_9(VAR_7);
    return -1;
}
