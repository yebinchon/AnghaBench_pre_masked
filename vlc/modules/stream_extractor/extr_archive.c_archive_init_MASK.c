
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_3__ {int b_seekable_archive; int b_seekable_source; size_t i_callback_data; int p_archive; int p_obj; int * pp_callback_data; } ;
typedef TYPE_1__ private_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int *,int ,int*) ;

__attribute__((used)) static int FUNC_13( private_sys_t* VAR_8, stream_t* VAR_9 )
{


    VAR_8->p_archive = FUNC_2();

    if( FUNC_11( !VAR_8->p_archive ) )
    {
        FUNC_8( VAR_8->p_obj, "unable to create libarchive handle" );
        return VAR_1;
    }



    VAR_8->b_seekable_archive = 0;

    if( FUNC_12( VAR_9, VAR_0,
        &VAR_8->b_seekable_source ) )
    {
        FUNC_10( VAR_8->p_obj, "unable to query whether source stream can seek" );
        VAR_8->b_seekable_source = 0;
    }

    if( VAR_8->b_seekable_source )
    {
        if( FUNC_4( VAR_8->p_archive,
            VAR_6 ) )
        {
            FUNC_9( VAR_8->p_obj, "archive_read_set_callback failed, aborting." );
            return VAR_1;
        }
    }



    FUNC_6( VAR_8->p_archive );
    FUNC_7( VAR_8->p_archive );



    if( FUNC_5( VAR_8->p_archive,
        VAR_4 ) )
    {
        FUNC_9( VAR_8->p_obj, "archive_read_set_switch_callback failed, aborting." );
        return VAR_1;
    }

    for( size_t VAR_10 = 0; VAR_10 < VAR_8->i_callback_data; ++VAR_10 )
    {
        if( FUNC_1( VAR_8->p_archive,
            VAR_8->pp_callback_data[VAR_10] ) )
        {
            return VAR_1;
        }
    }



    if( FUNC_3( VAR_8->p_archive, VAR_8->pp_callback_data[0], ((void*)0),
        VAR_5, VAR_7, VAR_3 ) )
    {
        FUNC_8( VAR_8->p_obj, "libarchive: %s",
          FUNC_0( VAR_8->p_archive ) );

        return VAR_1;
    }

    return VAR_2;
}
