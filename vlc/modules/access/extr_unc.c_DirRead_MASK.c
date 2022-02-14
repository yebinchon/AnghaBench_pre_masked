
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char wchar_t ;
struct vlc_readdir_helper {int dummy; } ;
struct TYPE_10__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
typedef int input_item_node_t ;
struct TYPE_9__ {int psz_path; int psz_host; } ;
struct TYPE_11__ {TYPE_1__ url; } ;
typedef TYPE_3__ access_sys_t ;
struct TYPE_12__ {int shi1_type; int shi1_netname; } ;
typedef TYPE_4__ SHARE_INFO_1 ;
typedef int LPBYTE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (char*,int,int *,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int VAR_5 ;
 char* FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (char**,char*,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,char**,int *,int *,int ,int ,char*) ;
 int FUNC_7 (struct vlc_readdir_helper*,char*,int *,char*,int ,int ) ;
 int FUNC_8 (struct vlc_readdir_helper*,int) ;
 int FUNC_9 (struct vlc_readdir_helper*,TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_10(stream_t *VAR_8, input_item_node_t *VAR_9)
{
    access_sys_t *VAR_10 = VAR_8->p_sys;
    int VAR_11 = VAR_7;

    struct vlc_readdir_helper VAR_12;
    FUNC_9( &VAR_12, VAR_8, VAR_9 );



    SHARE_INFO_1 *VAR_13;
    DWORD VAR_14;
    DWORD VAR_15;
    DWORD VAR_16 = 0;
    DWORD VAR_17;
    wchar_t *VAR_18 = FUNC_3( VAR_10->url.psz_host );
    if( VAR_18 == ((void*)0) )
        return VAR_6;
    do
    {
        VAR_14 = FUNC_2( VAR_18, 1, (LPBYTE*)&VAR_13,
                              VAR_4, &VAR_15,
                              &VAR_17, &VAR_16 );
        if( VAR_14 == VAR_1 ||
            VAR_14 == VAR_0 )
        {
            for ( DWORD VAR_19 = 0; VAR_19 < VAR_15; ++VAR_19 )
            {
                SHARE_INFO_1 *VAR_20 = VAR_13 + VAR_19;
                if( VAR_20->shi1_type & VAR_5 )
                    continue;
                char* VAR_21 = FUNC_0( VAR_20->shi1_netname );
                if( VAR_21 == ((void*)0) )
                {
                    VAR_11 = VAR_6;
                    break;
                }

                char* VAR_22;
                if( FUNC_6( VAR_8, &VAR_22, ((void*)0), ((void*)0),
                                 VAR_10->url.psz_host, VAR_10->url.psz_path,
                                 VAR_21 ) < 0 )
                {
                    FUNC_5( VAR_21 );
                    VAR_11 = VAR_6;
                    break;
                }




                char* VAR_23;
                if( FUNC_4( &VAR_23, "file:%s", VAR_22 ) < 0 )
                {
                    FUNC_5( VAR_21 );
                    FUNC_5( VAR_22 );
                    VAR_11 = VAR_6;
                    break;
                }
                FUNC_5( VAR_22 );

                VAR_11 = FUNC_7( &VAR_12, VAR_23, ((void*)0),
                                    VAR_21, VAR_3, VAR_2 );
                FUNC_5( VAR_21 );
                FUNC_5( VAR_23 );
            }
        }
        FUNC_1( VAR_13 );
    } while( VAR_14 == VAR_0 && VAR_11 == VAR_7 );

    FUNC_5( VAR_18 );

    FUNC_8( &VAR_12, VAR_11 == VAR_7 );

    return VAR_11;
}
