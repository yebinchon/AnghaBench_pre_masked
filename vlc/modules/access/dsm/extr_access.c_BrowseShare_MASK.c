
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vlc_readdir_helper {int dummy; } ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int smb_share_list ;
typedef int input_item_node_t ;
struct TYPE_7__ {int p_session; } ;
typedef TYPE_2__ access_sys_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct vlc_readdir_helper*,char const*,int ) ;
 scalar_t__ FUNC_1 (int ,int *,size_t*) ;
 char* FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (struct vlc_readdir_helper*,int) ;
 int FUNC_6 (struct vlc_readdir_helper*,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_7( stream_t *VAR_4, input_item_node_t *VAR_5 )
{
    access_sys_t *VAR_6 = VAR_4->p_sys;
    smb_share_list VAR_7;
    const char *VAR_8;
    size_t VAR_9;
    int VAR_10 = VAR_3;

    if( FUNC_1( VAR_6->p_session, &VAR_7, &VAR_9 )
        != VAR_0 )
        return VAR_2;

    struct vlc_readdir_helper VAR_11;
    FUNC_6( &VAR_11, VAR_4, VAR_5 );

    for( size_t VAR_12 = 0; VAR_12 < VAR_9 && VAR_10 == VAR_3; VAR_12++ )
    {
        VAR_8 = FUNC_2( VAR_7, VAR_12 );

        if( VAR_8[FUNC_4( VAR_8 ) - 1] == '$')
            continue;

        VAR_10 = FUNC_0( VAR_4, &VAR_11, VAR_8, VAR_1 );
    }

    FUNC_5( &VAR_11, VAR_10 == VAR_3 );

    FUNC_3( VAR_7 );
    return VAR_10;
}
