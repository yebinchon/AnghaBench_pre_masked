
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {scalar_t__ psz_path; } ;
struct TYPE_9__ {scalar_t__ b_unicode; } ;
struct TYPE_11__ {TYPE_2__ url; TYPE_1__ features; int sz_epsv_ip; int cmd; } ;
typedef TYPE_3__ access_sys_t ;


 int * FUNC_0 (scalar_t__) ;
 int * FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*,char const*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*,char*) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int,int ,int *) ;
 int * FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11( vlc_object_t *VAR_0, access_sys_t *VAR_1, const char *VAR_2 )
{
    if( FUNC_2( VAR_0, VAR_1, VAR_2 ) < 0 )
        return -1;


    if( FUNC_5( VAR_0, VAR_1, "EPSV ALL" ) < 0 )
    {
        FUNC_6( VAR_0, "cannot request extended passive mode" );
        goto error;
    }

    if( FUNC_4( VAR_0, VAR_1, ((void*)0), ((void*)0) ) == 2 )
    {
        int VAR_3 = FUNC_10(VAR_1->cmd);
        if( FUNC_8( VAR_3, VAR_1->sz_epsv_ip, ((void*)0) ) )
            goto error;
    }
    else
    {





        FUNC_7( VAR_0, "FTP Extended passive mode disabled" );
        FUNC_3( VAR_1 );

        if( FUNC_2( VAR_0, VAR_1, VAR_2 ) )
            goto error;
    }

    if( VAR_1->url.psz_path &&
        (VAR_1->features.b_unicode ? FUNC_1 : FUNC_0)(VAR_1->url.psz_path) == ((void*)0) )
    {
        FUNC_6( VAR_0, "unsupported path: \"%s\"", VAR_1->url.psz_path );
        goto error;
    }


    if( FUNC_5( VAR_0, VAR_1, "TYPE I" ) < 0 ||
        FUNC_4( VAR_0, VAR_1, ((void*)0), ((void*)0) ) != 2 )
    {
        FUNC_6( VAR_0, "cannot set binary transfer mode" );
        goto error;
    }

    return 0;

error:
    FUNC_3( VAR_1 );
    return -1;
}
