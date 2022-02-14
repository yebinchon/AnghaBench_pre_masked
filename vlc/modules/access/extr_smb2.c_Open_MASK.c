
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {char* psz_path; char* psz_host; int i_port; } ;
typedef TYPE_1__ vlc_url_t ;
typedef int vlc_object_t ;
struct TYPE_23__ {char* psz_realm; scalar_t__ i_get_order; } ;
typedef TYPE_2__ vlc_credential ;
struct smb2_url {int server; int share; } ;
struct access_sys {int error_status; TYPE_1__ encoded_url; int * smb2; int * share_enum; int * smb2dir; int * smb2fh; } ;
struct TYPE_24__ {void* pf_control; int * pf_seek; int pf_readdir; int pf_read; int psz_url; struct access_sys* p_sys; } ;
typedef TYPE_3__ stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (char*) ;
 void* VAR_15 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct smb2_url*) ;
 char* FUNC_6 (int *) ;
 int * FUNC_7 () ;
 struct smb2_url* FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*,char*,int ) ;
 char* FUNC_12 (TYPE_3__*,char*) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (TYPE_2__*,TYPE_3__*,char*,char*,int ,int ,...) ;
 int FUNC_18 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_19 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*,int ,char*,char const*) ;
 scalar_t__ FUNC_21 () ;
 struct access_sys* FUNC_22 (int *,int,int) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (TYPE_3__*,struct smb2_url*,TYPE_2__*) ;
 char* FUNC_25 (TYPE_3__*,char*,int ) ;
 char* FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (char*) ;

__attribute__((used)) static int
FUNC_28(vlc_object_t *VAR_16)
{
    stream_t *VAR_17 = (stream_t *)VAR_16;
    struct access_sys *VAR_18 = FUNC_22(VAR_16, 1, sizeof (*VAR_18));
    struct smb2_url *VAR_19 = ((void*)0);
    char *VAR_20 = ((void*)0);

    if (FUNC_10(VAR_18 == ((void*)0)))
        return VAR_11;
    VAR_17->p_sys = VAR_18;


    if (FUNC_14(&VAR_18->encoded_url, VAR_17->psz_url) != 0)
        return VAR_11;

    VAR_18->smb2 = FUNC_7();
    if (VAR_18->smb2 == ((void*)0))
    {
        FUNC_3(VAR_17, "smb2_init_context failed");
        goto error;
    }

    FUNC_9(VAR_18->smb2, VAR_6);

    if (VAR_18->encoded_url.psz_path == ((void*)0))
        VAR_18->encoded_url.psz_path = (char *) "/";

    char *VAR_21 = FUNC_25(VAR_17, VAR_18->encoded_url.psz_host,
                                           VAR_18->encoded_url.i_port);



    char *VAR_22;
    if (VAR_21 != ((void*)0))
    {
        vlc_url_t VAR_23 = VAR_18->encoded_url;
        VAR_23.psz_host = VAR_21;
        VAR_22 = FUNC_26(&VAR_23);
        FUNC_2(VAR_21);
    }
    else
        VAR_22 = FUNC_26(&VAR_18->encoded_url);
    if (!FUNC_27(VAR_22))
    {
        FUNC_2(VAR_22);
        goto error;
    }
    VAR_19 = FUNC_8(VAR_18->smb2, VAR_22);
    FUNC_2(VAR_22);

    if (!VAR_19 || !VAR_19->share || !VAR_19->server)
    {
        FUNC_3(VAR_17, "smb2_parse_url failed");
        goto error;
    }

    int VAR_24 = -1;
    vlc_credential VAR_25;
    FUNC_18(&VAR_25, &VAR_18->encoded_url);
    VAR_20 = FUNC_12(VAR_17, "smb-domain");
    VAR_25.psz_realm = VAR_20;



    FUNC_17(&VAR_25, VAR_17, "smb-user", "smb-pwd", ((void*)0),
                       ((void*)0));
    VAR_24 = FUNC_24(VAR_17, VAR_19, &VAR_25);

    while (VAR_24 == -1
        && (!VAR_18->error_status || FUNC_0(VAR_18->error_status))
        && FUNC_17(&VAR_25, VAR_17, "smb-user", "smb-pwd",
                              VAR_8, VAR_7,
                              VAR_19->server))
    {
        VAR_18->error_status = 0;
        VAR_24 = FUNC_24(VAR_17, VAR_19, &VAR_25);
    }
    if (VAR_24 == 0)
        FUNC_19(&VAR_25, VAR_17);
    FUNC_16(&VAR_25);

    if (VAR_24 != 0)
    {
        const char *VAR_26 = FUNC_6(VAR_18->smb2);
        if (VAR_26 && *VAR_26)
            FUNC_20(VAR_17,
                                     FUNC_1("SMB2 operation failed"), "%s", VAR_26);
        if (VAR_25.i_get_order == VAR_5)
        {



            FUNC_11(VAR_17, "smb-dialog-failed", VAR_14);
        }
        goto error;
    }

    if (VAR_18->smb2fh != ((void*)0))
    {
        VAR_17->pf_read = VAR_3;
        VAR_17->pf_seek = VAR_4;
        VAR_17->pf_control = VAR_2;
    }
    else if (VAR_18->smb2dir != ((void*)0))
    {
        VAR_17->pf_readdir = VAR_0;
        VAR_17->pf_seek = ((void*)0);
        VAR_17->pf_control = VAR_15;
    }
    else if (VAR_18->share_enum != ((void*)0))
    {
        VAR_17->pf_readdir = VAR_9;
        VAR_17->pf_seek = ((void*)0);
        VAR_17->pf_control = VAR_15;
    }
    else
        FUNC_15();

    FUNC_5(VAR_19);
    FUNC_2(VAR_20);
    return VAR_13;

error:
    if (VAR_19 != ((void*)0))
        FUNC_5(VAR_19);
    if (VAR_18->smb2 != ((void*)0))
    {
        FUNC_23(VAR_17);
        FUNC_4(VAR_18->smb2);
    }
    FUNC_13(&VAR_18->encoded_url);
    FUNC_2(VAR_20);






    return FUNC_21() || VAR_18->error_status == -VAR_1 ? VAR_12
         : VAR_10;
}
