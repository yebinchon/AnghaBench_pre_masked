
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_4__ {char* path; char* format; char* prefix_fmt; scalar_t__ is_sequential; int sequence; } ;
typedef TYPE_1__ vout_snapshot_save_cfg_t ;
typedef int picture_t ;
typedef int cfg ;
typedef int block_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 char* FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int ,char*,char*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int **,int **,int *,char*,int ) ;
 char* FUNC_14 () ;
 scalar_t__ FUNC_15 (char**,int*,int *,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_16( vout_thread_t *VAR_0 )
{
    char *VAR_1 = FUNC_9( VAR_0, "snapshot-path" );
    char *VAR_2 = FUNC_9( VAR_0, "snapshot-format" );
    char *VAR_3 = FUNC_9( VAR_0, "snapshot-prefix" );


    picture_t *VAR_4;
    block_t *VAR_5;



    if( FUNC_13( VAR_0, &VAR_5, &VAR_4, ((void*)0), VAR_2, FUNC_0(500) ) )
    {
        VAR_4 = ((void*)0);
        VAR_5 = ((void*)0);
        goto exit;
    }

    if( !VAR_1 )
    {
        VAR_1 = FUNC_14();
        if( !VAR_1 )
        {
            FUNC_5( VAR_0, "no path specified for snapshots" );
            goto exit;
        }
    }

    vout_snapshot_save_cfg_t VAR_6;
    FUNC_4( &VAR_6, 0, sizeof(VAR_6) );
    VAR_6.is_sequential = FUNC_8( VAR_0, "snapshot-sequential" );
    VAR_6.sequence = FUNC_7( VAR_0, "snapshot-num" );
    VAR_6.path = VAR_1;
    VAR_6.format = VAR_2;
    VAR_6.prefix_fmt = VAR_3;

    char *VAR_7;
    int VAR_8;
    if (FUNC_15( &VAR_7, &VAR_8,
                                 VAR_5, VAR_0, &VAR_6 ) )
        goto exit;
    if( VAR_6.is_sequential )
        FUNC_10( VAR_0, "snapshot-num", VAR_8 + 1 );

    FUNC_1( VAR_0, VAR_4, VAR_7 );


    FUNC_11( FUNC_12(VAR_0), "snapshot-file", VAR_7 );

    FUNC_3( VAR_7 );

exit:
    if( VAR_5 )
        FUNC_2( VAR_5 );
    if( VAR_4 )
        FUNC_6( VAR_4 );
    FUNC_3( VAR_3 );
    FUNC_3( VAR_2 );
    FUNC_3( VAR_1 );
}
