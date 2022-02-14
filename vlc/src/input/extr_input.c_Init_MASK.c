
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {double f_float; } ;
typedef TYPE_1__ vlc_value_t ;
typedef scalar_t__ vlc_tick_t ;
typedef int vlc_meta_t ;
typedef int input_thread_t ;
struct TYPE_12__ {int b_out_pace_control; int i_slave; TYPE_4__* p_sout; int * p_es_out; int * p_resource; int p_es_out_display; TYPE_6__* p_item; TYPE_3__** slave; int b_preparsing; int normal_time; TYPE_3__* master; int rate; } ;
typedef TYPE_2__ input_thread_private_t ;
struct TYPE_13__ {int p_demux; } ;
typedef TYPE_3__ input_source_t ;
struct TYPE_15__ {char* psz_uri; } ;
struct TYPE_14__ {scalar_t__ i_out_pace_nocontrol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_5 (int *,char*,int *,int) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int ,scalar_t__) ;
 int FUNC_14 (int *,int ,TYPE_1__*) ;
 int * FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (int *,double) ;
 int FUNC_17 (int *,double,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_18 (TYPE_6__*) ;
 int FUNC_19 (TYPE_6__*) ;
 TYPE_2__* FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,TYPE_4__*,int *) ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (int *,char*,...) ;
 double FUNC_25 (int *,char*) ;
 int FUNC_26 (int *,char*,int) ;
 int FUNC_27 (int *,char*,int ) ;
 int FUNC_28 (int *,char*,char*) ;
 scalar_t__ FUNC_29 (int ,char*) ;
 int FUNC_30 (int *) ;
 int * FUNC_31 () ;
 int FUNC_32 (int *) ;
 scalar_t__ FUNC_33 () ;

__attribute__((used)) static int FUNC_34( input_thread_t * VAR_9 )
{
    input_thread_private_t *VAR_10 = FUNC_20(VAR_9);
    input_source_t *VAR_11;


    FUNC_13( VAR_9, VAR_4, VAR_8 );
    FUNC_16( VAR_9, 0.0 );

    if( FUNC_29( FUNC_32(VAR_9), "meta-file" ) )
    {
        FUNC_24( VAR_9, "Input is a meta file: disabling unneeded options" );
        FUNC_28( VAR_9, "sout", "" );
        FUNC_26( VAR_9, "sout-all", 0 );
        FUNC_28( VAR_9, "input-slave", "" );
        FUNC_27( VAR_9, "input-repeat", 0 );
        FUNC_28( VAR_9, "sub-file", "" );
        FUNC_26( VAR_9, "sub-autodetect-file", 0 );
    }







    VAR_10->p_es_out = FUNC_15( VAR_9, VAR_10->p_es_out_display, VAR_10->rate );
    if( VAR_10->p_es_out == ((void*)0) )
        goto error;


    VAR_11 = FUNC_5( VAR_9, VAR_10->p_item->psz_uri, ((void*)0), 0 );
    if( VAR_11 == ((void*)0) )
        goto error;
    VAR_10->master = VAR_11;

    FUNC_2( VAR_9, 0 );



    vlc_tick_t VAR_12;
    if( FUNC_9( VAR_11->p_demux, VAR_0, &VAR_12 ) )
        VAR_12 = VAR_8;
    if( VAR_12 == VAR_8 )
        VAR_12 = FUNC_18( VAR_10->p_item );

    FUNC_17( VAR_9, 0.0, VAR_8, VAR_10->normal_time,
                          VAR_12 );

    if( !VAR_10->b_preparsing )
    {
        FUNC_8( VAR_9 );
        FUNC_7( VAR_9 );
        FUNC_6( VAR_9 );
        FUNC_0( VAR_9 );

        double VAR_13 = FUNC_25( VAR_9, "rate" );
        if( VAR_13 != 0.0 && VAR_13 != 1.0 )
        {
            vlc_value_t VAR_14 = { .f_float = VAR_13 };
            FUNC_14( VAR_9, VAR_3, &VAR_14 );
        }
    }

    if( !VAR_10->b_preparsing && VAR_10->p_sout )
    {
        VAR_10->b_out_pace_control = VAR_10->p_sout->i_out_pace_nocontrol > 0;

        FUNC_24( VAR_9, "starting in %ssync mode",
                 VAR_10->b_out_pace_control ? "a" : "" );
    }

    if (!FUNC_19(FUNC_20(VAR_9)->p_item))
    {
        vlc_meta_t *VAR_15 = FUNC_31();
        if( VAR_15 != ((void*)0) )
        {

            FUNC_3( VAR_9, VAR_15 );


            FUNC_4( VAR_9, VAR_11, VAR_15 );


            for( int VAR_16 = 0; VAR_16 < VAR_10->i_slave; VAR_16++ )
                FUNC_4( VAR_9, VAR_10->slave[VAR_16], VAR_15 );

            FUNC_10( VAR_10->p_es_out, VAR_15 );
            FUNC_30( VAR_15 );
        }
    }

    FUNC_24( VAR_9, "`%s' successfully opened",
             FUNC_20(VAR_9)->p_item->psz_uri );


    FUNC_13( VAR_9, VAR_5, FUNC_33() );

    return VAR_7;

error:
    FUNC_13( VAR_9, VAR_1, VAR_8 );

    if( FUNC_20(VAR_9)->p_es_out )
        FUNC_11( FUNC_20(VAR_9)->p_es_out );
    FUNC_12( FUNC_20(VAR_9)->p_es_out_display, VAR_2 );
    if( FUNC_20(VAR_9)->p_resource )
    {
        if( FUNC_20(VAR_9)->p_sout )
            FUNC_22( FUNC_20(VAR_9)->p_resource,
                                         FUNC_20(VAR_9)->p_sout, ((void*)0) );
        FUNC_23( FUNC_20(VAR_9)->p_resource, ((void*)0) );
        if( FUNC_20(VAR_9)->p_resource )
        {
            FUNC_21( FUNC_20(VAR_9)->p_resource );
            FUNC_20(VAR_9)->p_resource = ((void*)0);
        }
    }


    FUNC_20(VAR_9)->p_es_out = ((void*)0);
    FUNC_20(VAR_9)->p_sout = ((void*)0);

    return VAR_6;
}
