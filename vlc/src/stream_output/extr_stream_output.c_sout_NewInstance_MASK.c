
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {int b_wants_substreams; int lock; void* psz_sout; int * p_stream; scalar_t__ i_out_pace_nocontrol; } ;
typedef TYPE_1__ sout_instance_t ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,char*) ;
 int * FUNC_5 (TYPE_1__*,char*,int *,int *) ;
 int FUNC_6 (int *,int ,int*) ;
 char* FUNC_7 (int ,char const*) ;
 void* FUNC_8 (char const*) ;
 int FUNC_9 (TYPE_1__*,char*,int) ;
 int FUNC_10 (int *,char*) ;
 TYPE_1__* FUNC_11 (int *,int,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*) ;

sout_instance_t *FUNC_15( vlc_object_t *VAR_3, const char *VAR_4 )
{
    sout_instance_t *VAR_5;
    char *VAR_6;

    FUNC_1( VAR_4 != ((void*)0) );

    if( VAR_4[0] == '#' )
    {
        VAR_6 = FUNC_8( &VAR_4[1] );
    }
    else
    {
        VAR_6 = FUNC_7(
            FUNC_10(VAR_3, "sout-display"), VAR_4 );
    }
    if(!VAR_6)
        return ((void*)0);


    VAR_5 = FUNC_11( VAR_3, sizeof( *VAR_5 ), "stream output" );
    if( VAR_5 == ((void*)0) )
    {
        FUNC_2( VAR_6 );
        return ((void*)0);
    }

    FUNC_3( VAR_5, "using sout chain=`%s'", VAR_6 );


    VAR_5->psz_sout = FUNC_8( VAR_4 );
    VAR_5->i_out_pace_nocontrol = 0;
    VAR_5->b_wants_substreams = 0;

    FUNC_13( &VAR_5->lock );
    VAR_5->p_stream = ((void*)0);

    FUNC_9( VAR_5, "sout-mux-caching", VAR_2 | VAR_1 );

    VAR_5->p_stream = FUNC_5( VAR_5, VAR_6, ((void*)0), ((void*)0) );
    if( VAR_5->p_stream )
    {
        FUNC_2( VAR_6 );
        FUNC_6( VAR_5->p_stream,
                            VAR_0,
                            &VAR_5->b_wants_substreams );
        return VAR_5;
    }

    FUNC_4( VAR_5, "stream chain failed for `%s'", VAR_6 );
    FUNC_2( VAR_6 );

    FUNC_0( VAR_5->psz_sout );

    FUNC_12( &VAR_5->lock );
    FUNC_14(VAR_5);
    return ((void*)0);
}
