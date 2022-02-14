
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_dialog_id ;
struct TYPE_18__ {char* psz_mime; char* psz_name; int i_data; int p_data; } ;
typedef TYPE_3__ input_attachment_t ;
struct TYPE_17__ {int i_codec; } ;
struct TYPE_16__ {scalar_t__ i_codec; int i_extra; int p_extra; } ;
struct TYPE_19__ {TYPE_2__ fmt_out; TYPE_1__ fmt_in; TYPE_5__* p_sys; int pf_flush; int pf_decode; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_20__ {int i_refcount; int * p_library; int * p_track; int * p_renderer; int i_max_stop; int fmt; int lock; } ;
typedef TYPE_5__ decoder_sys_t ;
typedef int ASS_Track ;
typedef int ASS_Renderer ;
typedef int ASS_Library ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,double) ;
 int FUNC_10 (int *,char const*,char const*,int ,int *,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,double) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int) ;
 scalar_t__ FUNC_15 (TYPE_4__*,TYPE_3__***,int*) ;
 int FUNC_16 (TYPE_3__**) ;
 TYPE_5__* FUNC_17 (int) ;
 int FUNC_18 (int *,int ,int) ;
 int FUNC_19 (TYPE_4__*,char*,char*) ;
 int FUNC_20 (TYPE_4__*,char*) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (char*) ;
 int * FUNC_23 (TYPE_4__*,int,double,int *,int ,int ) ;
 int FUNC_24 (TYPE_4__*,int *) ;
 int FUNC_25 (TYPE_3__*) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static int FUNC_27( vlc_object_t *VAR_11 )
{
    decoder_t *VAR_12 = (decoder_t *)VAR_11;
    decoder_sys_t *VAR_13;

    if( VAR_12->fmt_in.i_codec != VAR_6 )
        return VAR_7;

    VAR_12->pf_decode = VAR_2;
    VAR_12->pf_flush = VAR_3;

    VAR_12->p_sys = VAR_13 = FUNC_17( sizeof( decoder_sys_t ) );
    if( !VAR_13 )
        return VAR_8;


    FUNC_26( &VAR_13->lock );
    VAR_13->i_refcount = 1;
    FUNC_18( &VAR_13->fmt, 0, sizeof(VAR_13->fmt) );
    VAR_13->i_max_stop = VAR_10;
    VAR_13->p_library = ((void*)0);
    VAR_13->p_renderer = ((void*)0);
    VAR_13->p_track = ((void*)0);


    ASS_Library *VAR_14 = VAR_13->p_library = FUNC_4();
    if( !VAR_14 )
    {
        FUNC_20( VAR_12, "Libass library creation failed" );
        FUNC_0( VAR_13 );
        return VAR_7;
    }


    input_attachment_t **VAR_15;
    int VAR_16;
    if( FUNC_15( VAR_12, &VAR_15, &VAR_16 ))
    {
        VAR_16 = 0;
        VAR_15 = ((void*)0);
    }
    for( int VAR_17 = 0; VAR_17 < VAR_16; VAR_17++ )
    {
        input_attachment_t *VAR_18 = VAR_15[VAR_17];

        bool VAR_19 = 0;


        if( !FUNC_21( VAR_18->psz_mime, "application/x-truetype-font" ) )
            VAR_19 = 1;

        else if( !VAR_19 && FUNC_22( VAR_18->psz_name ) > 4 )
        {
            char *VAR_20 = VAR_18->psz_name + FUNC_22( VAR_18->psz_name ) - 4;

            if( !FUNC_21( VAR_20, ".ttf" ) || !FUNC_21( VAR_20, ".otf" ) || !FUNC_21( VAR_20, ".ttc" ) )
                VAR_19 = 1;
        }

        if( VAR_19 )
        {
            FUNC_19( VAR_12, "adding embedded font %s", VAR_18->psz_name );

            FUNC_3( VAR_13->p_library, VAR_18->psz_name, VAR_18->p_data, VAR_18->i_data );
        }
        FUNC_25( VAR_18 );
    }
    FUNC_16( VAR_15 );

    FUNC_8( VAR_14, 1 );
    FUNC_13( VAR_14, ((void*)0) );


    ASS_Renderer *VAR_21 = VAR_13->p_renderer = FUNC_7( VAR_14 );
    if( !VAR_21 )
    {
        FUNC_20( VAR_12, "Libass renderer creation failed" );
        FUNC_0( VAR_13 );
        return VAR_7;
    }

    FUNC_14( VAR_21, 0);


    FUNC_9( VAR_21, 1.0 );
    FUNC_12( VAR_21, 0.0 );
    const char *VAR_22 = ((void*)0);
    const char *VAR_23 = "Arial";
    FUNC_10( VAR_21, VAR_22, VAR_23, VAR_0, ((void*)0), 0 );




    FUNC_11( VAR_21, VAR_1 );


    ASS_Track *VAR_24 = VAR_13->p_track = FUNC_5( VAR_13->p_library );
    if( !VAR_24 )
    {
        FUNC_0( VAR_13 );
        return VAR_7;
    }
    FUNC_6( VAR_24, VAR_12->fmt_in.p_extra, VAR_12->fmt_in.i_extra );

    VAR_12->fmt_out.i_codec = VAR_5;

    return VAR_9;
}
