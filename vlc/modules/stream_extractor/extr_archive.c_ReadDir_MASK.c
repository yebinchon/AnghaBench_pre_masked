
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vlc_readdir_helper {int dummy; } ;
struct archive_entry {int dummy; } ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_directory_t ;
struct TYPE_7__ {int * p_archive; } ;
typedef TYPE_2__ private_sys_t ;
typedef int libarchive_t ;
typedef int input_item_node_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 char* FUNC_1 (struct archive_entry*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct archive_entry**) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct vlc_readdir_helper*,char*,char const*,int *,int ,int ) ;
 int FUNC_7 (struct vlc_readdir_helper*,int) ;
 int FUNC_8 (struct vlc_readdir_helper*,TYPE_1__*,int *) ;
 char* FUNC_9 (TYPE_1__*,char const*) ;

__attribute__((used)) static int FUNC_10( stream_directory_t* VAR_6, input_item_node_t* VAR_7 )
{
    private_sys_t* VAR_8 = VAR_6->p_sys;
    libarchive_t* VAR_9 = VAR_8->p_archive;

    struct vlc_readdir_helper VAR_10;
    FUNC_8( &VAR_10, VAR_6, VAR_7);
    struct archive_entry* VAR_11;
    int VAR_12;

    while( !( VAR_12 = FUNC_3( VAR_9, &VAR_11 ) ) )
    {
        if( FUNC_0( VAR_11 ) == VAR_0 )
            continue;

        char const* VAR_13 = FUNC_1( VAR_11 );

        if( FUNC_5( !VAR_13 ) )
            break;

        char* VAR_14 = FUNC_9( VAR_6, VAR_13 );

        if( FUNC_5( !VAR_14 ) )
            break;

        if( FUNC_6( &VAR_10, VAR_14, VAR_13, ((void*)0), VAR_3,
                                        VAR_2 ) )
        {
            FUNC_4( VAR_14 );
            break;
        }
        FUNC_4( VAR_14 );

        if( FUNC_2( VAR_9 ) )
            break;
    }

    FUNC_7( &VAR_10, VAR_12 == VAR_1 );
    return VAR_12 == VAR_1 ? VAR_5 : VAR_4;
}
