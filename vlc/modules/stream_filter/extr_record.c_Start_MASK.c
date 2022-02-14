
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p_input_item; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_8__ {int b_error; int * f; } ;
typedef TYPE_2__ stream_sys_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,char*,int ,char const*) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 char* FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int ,char*,char*) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8( stream_t *VAR_5, const char *VAR_6 )
{
    stream_sys_t *VAR_7 = VAR_5->p_sys;

    char *VAR_8;
    FILE *VAR_9;


    if( !VAR_6 )
        VAR_6 = "dat";


    char *VAR_10 = FUNC_4( VAR_5, "input-record-path" );
    if( !VAR_10 )
        VAR_10 = FUNC_0( VAR_1 );

    if( !VAR_10 )
        return VAR_3;



    VAR_8 = FUNC_2( VAR_5->p_input_item, VAR_10,
                                          VAR_0, VAR_6 );

    FUNC_1( VAR_10 );

    if( !VAR_8 )
        return VAR_3;

    VAR_9 = FUNC_6( VAR_8, "wb" );
    if( !VAR_9 )
    {
        FUNC_1( VAR_8 );
        return VAR_2;
    }


    FUNC_5( FUNC_7(VAR_5), "record-file", VAR_8 );

    FUNC_3( VAR_5, "Recording into %s", VAR_8 );
    FUNC_1( VAR_8 );


    VAR_7->f = VAR_9;
    VAR_7->b_error = 0;
    return VAR_4;
}
