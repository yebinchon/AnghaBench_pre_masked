
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vlc_readdir_helper {int dummy; } ;
struct smbc_dirent {char* name; int smbc_type; } ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
typedef int input_item_node_t ;
struct TYPE_6__ {char* psz_host; char* psz_path; } ;
struct TYPE_8__ {TYPE_1__ url; int i_smb; } ;
typedef TYPE_3__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int *,int *,char const*,char const*,char*) ;
 struct smbc_dirent* FUNC_2 (int ) ;
 int FUNC_3 (struct vlc_readdir_helper*,char*,int *,char*,int,int ) ;
 int FUNC_4 (struct vlc_readdir_helper*,int) ;
 int FUNC_5 (struct vlc_readdir_helper*,TYPE_2__*,int *) ;
 char* FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7 (stream_t *VAR_5, input_item_node_t *VAR_6 )
{
    access_sys_t *VAR_7 = VAR_5->p_sys;
    int VAR_8 = VAR_4;

    struct vlc_readdir_helper VAR_9;
    FUNC_5( &VAR_9, VAR_5, VAR_6 );

    struct smbc_dirent *VAR_10;

    while( VAR_8 == VAR_4 && ( VAR_10 = FUNC_2( VAR_7->i_smb ) ) )
    {
        const char *VAR_11 = VAR_7->url.psz_host;
        const char *VAR_12 = VAR_7->url.psz_path;
        const char *VAR_13 = VAR_10->name;
        int VAR_14;

        switch( VAR_10->smbc_type )
        {
        case 129:
        case 128:
            VAR_11 = VAR_7->url.psz_host;
            VAR_12 = ((void*)0);
            VAR_13 = ((void*)0);

        case 133:
        case 135:
            VAR_14 = VAR_1;
            break;
        case 134:
            VAR_14 = VAR_2;
            break;
        default:
        case 130:
        case 136:
        case 132:
        case 131:
            continue;
        }

        char *VAR_15 = ((void*)0);
        if( VAR_13 != ((void*)0)
         && ( VAR_15 = FUNC_6( VAR_13 ) ) == ((void*)0) )
        {
            VAR_8 = VAR_3;
            break;
        }

        char *VAR_16 = FUNC_1(((void*)0), ((void*)0), ((void*)0),
                                VAR_11, VAR_12, VAR_15);
        if (VAR_16 == ((void*)0)) {
            FUNC_0(VAR_15);
            VAR_8 = VAR_3;
            break;
        }
        FUNC_0(VAR_15);
        VAR_8 = FUNC_3(&VAR_9, VAR_16, ((void*)0), VAR_10->name,
                                           VAR_14, VAR_0);
        FUNC_0(VAR_16);
    }

    FUNC_4( &VAR_9, VAR_8 == VAR_4 );

    return VAR_8;
}
