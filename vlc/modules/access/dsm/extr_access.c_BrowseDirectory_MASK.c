
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vlc_readdir_helper {int dummy; } ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int * smb_stat_list ;
typedef int * smb_stat ;
typedef int input_item_node_t ;
struct TYPE_7__ {int i_tid; int p_session; int * psz_path; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,struct vlc_readdir_helper*,char const*,int) ;
 int FUNC_1 (char**,char*,int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int ,char*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,size_t) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (struct vlc_readdir_helper*,int) ;
 int FUNC_10 (struct vlc_readdir_helper*,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_11( stream_t *VAR_6, input_item_node_t *VAR_7 )
{
    access_sys_t *VAR_8 = VAR_6->p_sys;
    smb_stat_list VAR_9;
    smb_stat VAR_10;
    char *VAR_11;
    const char *VAR_12;
    size_t VAR_13;
    int VAR_14 = VAR_5;

    if( VAR_8->psz_path != ((void*)0) )
    {
        if( FUNC_1( &VAR_11, "%s\\*", VAR_8->psz_path ) == -1 )
            return VAR_4;
        VAR_9 = FUNC_3( VAR_8->p_session, VAR_8->i_tid, VAR_11 );
        FUNC_2( VAR_11 );
    }
    else
        VAR_9 = FUNC_3( VAR_8->p_session, VAR_8->i_tid, "\\*" );

    if( VAR_9 == ((void*)0) )
        return VAR_3;

    struct vlc_readdir_helper VAR_15;
    FUNC_10( &VAR_15, VAR_6, VAR_7 );

    VAR_13 = FUNC_6( VAR_9 );
    for( size_t VAR_16 = 0; VAR_16 < VAR_13 && VAR_14 == VAR_5; VAR_16++ )
    {
        int VAR_17;

        VAR_10 = FUNC_5( VAR_9, VAR_16 );

        if( VAR_10 == ((void*)0) )
        {
            continue;
        }

        VAR_12 = FUNC_8( VAR_10 );

        VAR_17 = FUNC_4( VAR_10, VAR_2 ) ?
                 VAR_0 : VAR_1;
        VAR_14 = FUNC_0( VAR_6, &VAR_15, VAR_12, VAR_17 );
    }

    FUNC_9( &VAR_15, VAR_14 == VAR_5 );

    FUNC_7( VAR_9 );
    return VAR_14;
}
