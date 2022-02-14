
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_6__ ;
typedef struct TYPE_47__ TYPE_4__ ;
typedef struct TYPE_46__ TYPE_3__ ;
typedef struct TYPE_45__ TYPE_38__ ;
typedef struct TYPE_44__ TYPE_2__ ;
typedef struct TYPE_43__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_43__ {int * p_srccaps; int * p_sinkcaps; int * member_1; int * member_0; } ;
typedef TYPE_1__ sink_src_caps_t ;
typedef int guint64 ;
typedef int gpointer ;
typedef TYPE_2__* gboolean ;
struct TYPE_46__ {int pf_flush; int pf_decode; TYPE_4__* p_sys; int fmt_in; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_47__ {int b_prerolled; int b_running; TYPE_2__* p_decoder; TYPE_2__* p_decode_out; TYPE_2__* p_decode_in; TYPE_2__* p_decode_src; TYPE_2__* p_bus; int p_allocator; TYPE_2__* p_que; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_48__ {int seek_data; int * need_data; int * enough_data; } ;
struct TYPE_45__ {int new_caps; } ;
struct TYPE_44__ {scalar_t__ data; } ;
typedef int GstStructure ;
typedef TYPE_2__* GstStateChangeReturn ;
typedef int GstElementFactory ;
typedef TYPE_6__ GstAppSrcCallbacks ;
typedef TYPE_2__ GList ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 TYPE_38__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (TYPE_2__*,int *,char*,int) ;
 int VAR_13 ;
 TYPE_4__* FUNC_8 (int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__* FUNC_9 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_2__* FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (int ,char*,int *,char*,int ,char*,int ,char*,int,char*,...) ;
 int FUNC_12 (int ,char*,int ,TYPE_3__*) ;
 int FUNC_13 (int ,TYPE_6__*,TYPE_3__*,int *) ;
 TYPE_2__* FUNC_14 (int ) ;
 int FUNC_15 (int ,TYPE_2__*,TYPE_2__*,TYPE_2__*,int *) ;
 int FUNC_16 (char*) ;
 TYPE_2__* FUNC_17 () ;
 int FUNC_18 (int *,int *) ;
 int * FUNC_19 () ;
 int * FUNC_20 (char*) ;
 int FUNC_21 (int *) ;
 TYPE_2__* FUNC_22 (int *,int *) ;
 TYPE_2__* FUNC_23 (int ,int ) ;
 void* FUNC_24 (char*,int *) ;
 TYPE_2__* FUNC_25 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_26 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_27 (TYPE_2__*,int ) ;
 int FUNC_28 (TYPE_2__*) ;
 int FUNC_29 (TYPE_2__*) ;
 int VAR_17 ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (TYPE_3__*,char*,char*) ;
 int FUNC_33 (TYPE_3__*,char*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_34 (TYPE_3__*,char*) ;
 int FUNC_35 () ;
 int * FUNC_36 (int *) ;

__attribute__((used)) static int FUNC_37( vlc_object_t *VAR_20 )
{
    decoder_t *VAR_21 = ( decoder_t* )VAR_20;
    decoder_sys_t *VAR_22;
    GstStateChangeReturn VAR_23;
    gboolean VAR_24;
    sink_src_caps_t VAR_25 = { ((void*)0), ((void*)0) };
    GstStructure *VAR_26;
    GstAppSrcCallbacks VAR_27;
    int VAR_28 = VAR_13;
    GList *VAR_29;
    bool VAR_30, VAR_31;




    if( !FUNC_35( ))
    {
        FUNC_33( VAR_21, "failed to register vlcvideosink" );
        return VAR_10;
    }

    VAR_26 = FUNC_36( &VAR_21->fmt_in );
    if( !VAR_26 )
        return VAR_10;


    VAR_22 = VAR_21->p_sys = FUNC_8( 1, sizeof( *VAR_22 ) );
    if( VAR_22 == ((void*)0) )
    {
        FUNC_30( VAR_26 );
        return VAR_11;
    }

    VAR_30 = FUNC_34( VAR_21, "use-decodebin" );
    FUNC_32( VAR_21, "Using decodebin? %s", VAR_30 ? "yes ":"no" );

    VAR_25.p_sinkcaps = FUNC_19( );
    FUNC_18( VAR_25.p_sinkcaps, VAR_26 );

    VAR_25.p_srccaps = FUNC_20( "video/x-raw" );


    VAR_29 = FUNC_23(
            VAR_4, VAR_6 );
    { if( VAR_29 == ((void*)0) ){ FUNC_33( VAR_21, "no decoder list found" ); VAR_28 = VAR_12; goto fail; } };
    if( !VAR_30 )
    {
        GList *VAR_32;

        VAR_29 = FUNC_10( VAR_29, VAR_17 );
        { if( VAR_29 == ((void*)0) ){ FUNC_33( VAR_21, "failed to sort decoders list" ); VAR_28 = VAR_12; goto fail; } };

        VAR_32 = FUNC_9( VAR_29, &VAR_25, VAR_15 );
        { if( VAR_32 == ((void*)0) ){ FUNC_33( VAR_21, "no suitable decoder found" ); VAR_28 = VAR_12; goto fail; } };


        VAR_22->p_decode_in = FUNC_22(
                ( GstElementFactory* )VAR_32->data, ((void*)0) );
        { if( VAR_22->p_decode_in == ((void*)0) ){ FUNC_33( VAR_21, "failed to create decoder" ); VAR_28 = VAR_12; goto fail; } };

    }
    else
    {
        GList *VAR_33;


        VAR_33 = FUNC_9( VAR_29, &VAR_25, VAR_15 );
        { if( VAR_33 == ((void*)0) ){ FUNC_33( VAR_21, "no suitable decoder found" ); VAR_28 = VAR_12; goto fail; } };

    }
    FUNC_29( VAR_29 );
    VAR_29 = ((void*)0);
    FUNC_21( VAR_25.p_srccaps );
    VAR_25.p_srccaps = ((void*)0);

    VAR_22->b_prerolled = 0;
    VAR_22->b_running = 0;



    VAR_22->p_que = FUNC_14( 0 );
    { if( VAR_22->p_que == ((void*)0) ){ FUNC_33( VAR_21, "failed to create queue" ); VAR_28 = VAR_11; goto fail; } };


    VAR_22->p_decode_src = FUNC_24( "appsrc", ((void*)0) );
    { if( VAR_22->p_decode_src == ((void*)0) ){ FUNC_33( VAR_21, "appsrc not found" ); VAR_28 = VAR_12; goto fail; } };

    FUNC_11( FUNC_6( VAR_22->p_decode_src ), "caps", VAR_25.p_sinkcaps,
            "emit-signals", VAR_9, "format", VAR_5,
            "stream-type", VAR_3,





            "block", VAR_9, "max-bytes", ( guint64 )1, ((void*)0) );
    FUNC_21( VAR_25.p_sinkcaps );
    VAR_25.p_sinkcaps = ((void*)0);
    VAR_27.enough_data = ((void*)0);
    VAR_27.need_data = ((void*)0);
    VAR_27.seek_data = VAR_19;
    FUNC_13( FUNC_1( VAR_22->p_decode_src ),
            &VAR_27, VAR_21, ((void*)0) );

    if( VAR_30 )
    {
        VAR_22->p_decode_in = FUNC_24( "decodebin", ((void*)0) );
        { if( VAR_22->p_decode_in == ((void*)0) ){ FUNC_33( VAR_21, "decodebin not found" ); VAR_28 = VAR_12; goto fail; } };





        FUNC_12( FUNC_6( VAR_22->p_decode_in ), "pad-added",
                FUNC_5( VAR_18 ), VAR_21 );

    }


    VAR_22->p_decode_out = FUNC_24( "vlcvideosink", ((void*)0) );
    { if( VAR_22->p_decode_out == ((void*)0) ){ FUNC_33( VAR_21, "vlcvideosink not found" ); VAR_28 = VAR_12; goto fail; } };


    VAR_31 = FUNC_34( VAR_21, "use-vlcpool" );
    FUNC_32( VAR_21, "Using vlc pool? %s", VAR_31 ? "yes ":"no" );

    VAR_22->p_allocator = FUNC_31(
            (gpointer) VAR_21 );
    FUNC_11( FUNC_6( VAR_22->p_decode_out ), "sync", VAR_1, "allocator",
            VAR_22->p_allocator, "id", (gpointer) VAR_21, "use-pool", VAR_31, ((void*)0) );
    FUNC_12( FUNC_6( VAR_22->p_decode_out ), "new-buffer",
            FUNC_5( VAR_16 ), VAR_21 );






    FUNC_4( VAR_22->p_decode_out )->new_caps = VAR_14;


    VAR_22->p_decoder = FUNC_3( FUNC_16( "decoder" ) );
    { if( VAR_22->p_decoder == ((void*)0) ){ FUNC_33( VAR_21, "bin not found" ); VAR_28 = VAR_12; goto fail; } };
    VAR_22->p_bus = FUNC_17( );
    { if( VAR_22->p_bus == ((void*)0) ){ FUNC_33( VAR_21, "failed to create bus" ); VAR_28 = VAR_12; goto fail; } };

    FUNC_26( VAR_22->p_decoder, VAR_22->p_bus );

    FUNC_15( FUNC_2( VAR_22->p_decoder ),
            VAR_22->p_decode_src, VAR_22->p_decode_in,
            VAR_22->p_decode_out, ((void*)0) );
    FUNC_28( VAR_22->p_decode_src );
    FUNC_28( VAR_22->p_decode_in );
    FUNC_28( VAR_22->p_decode_out );

    VAR_24 = FUNC_25( VAR_22->p_decode_src, VAR_22->p_decode_in );
    { if( VAR_24 == VAR_1 ){ FUNC_33( VAR_21, "failed to link src <-> in" ); VAR_28 = VAR_10; goto fail; } };


    if( !VAR_30 )
    {
        VAR_24 = FUNC_25( VAR_22->p_decode_in, VAR_22->p_decode_out );
        { if( VAR_24 == VAR_1 ){ FUNC_33( VAR_21, "failed to link in <-> out" ); VAR_28 = VAR_10; goto fail; } };

    }


    VAR_23 = FUNC_27( VAR_22->p_decoder, VAR_8 );
    { if( VAR_23 == VAR_7 ){ FUNC_33( VAR_21, "set state failure" ); VAR_28 = VAR_10; goto fail; } };

    VAR_22->b_running = 1;


    VAR_21->pf_decode = VAR_0;
    VAR_21->pf_flush = VAR_2;

    return VAR_13;

fail:
    if( VAR_25.p_sinkcaps )
        FUNC_21( VAR_25.p_sinkcaps );
    if( VAR_25.p_srccaps )
        FUNC_21( VAR_25.p_srccaps );
    if( VAR_29 )
        FUNC_29( VAR_29 );
    FUNC_0( ( vlc_object_t* )VAR_21 );
    return VAR_28;
}
