
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p_sout; TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_8__ {int i_id; int p_out; TYPE_3__** id; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_9__ {int id; int fmt; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;


 scalar_t__ FUNC_0 (char**,char*,char const*,char*,...) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 int FUNC_4 (int ,char*,int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8( sout_stream_t *VAR_0,
                      const char *VAR_1, const char *VAR_2, const char *VAR_3 )
{
    sout_stream_sys_t *VAR_4 = VAR_0->p_sys;
    char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    char *VAR_7 = ((void*)0);
    int VAR_8;

    if( FUNC_0( &VAR_6, "%s%s%s",
                  VAR_2, VAR_3 ? "." : "", VAR_3 ? VAR_3 : "" ) < 0 )
    {
        goto error;
    }

    VAR_5 = FUNC_1( VAR_6 );
    if( !VAR_5 )
    {
        FUNC_2( VAR_6 );
        goto error;
    }
    FUNC_2( VAR_6 );

    if( FUNC_0( &VAR_7,
                  "std{access=file{no-append,no-format,no-overwrite},"
                  "mux=%s,dst='%s'}", VAR_1, VAR_5 ) < 0 )
    {
        VAR_7 = ((void*)0);
        goto error;
    }


    FUNC_3( VAR_0, "Using record output `%s'", VAR_7 );

    VAR_4->p_out = FUNC_4( VAR_0->p_sout, VAR_7, ((void*)0), ((void*)0) );

    if( !VAR_4->p_out )
        goto error;


    VAR_8 = 0;
    for( int VAR_9 = 0; VAR_9 < VAR_4->i_id; VAR_9++ )
    {
        sout_stream_id_sys_t *VAR_10 = VAR_4->id[VAR_9];

        VAR_10->id = FUNC_5( VAR_4->p_out, &VAR_10->fmt );
        if( VAR_10->id )
            VAR_8++;
    }

    if( VAR_5 && VAR_3 )
        FUNC_6( FUNC_7(VAR_0), "record-file", VAR_5 );

    FUNC_2( VAR_5 );
    FUNC_2( VAR_7 );

    return VAR_8;

error:

    FUNC_2( VAR_5 );
    FUNC_2( VAR_7 );
    return -1;

}
