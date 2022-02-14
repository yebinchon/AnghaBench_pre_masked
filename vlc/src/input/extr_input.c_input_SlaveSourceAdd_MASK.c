
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int input_thread_t ;
struct TYPE_9__ {int i_last_es_cat; int i_last_es_id; int p_es_out_display; int slave; int i_slave; TYPE_1__* master; } ;
typedef TYPE_2__ input_thread_private_t ;
struct TYPE_10__ {int b_slave_sub; int p_demux; } ;
typedef TYPE_3__ input_source_t ;
typedef enum slave_type { ____Placeholder_slave_type } slave_type ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;
struct TYPE_8__ {int p_demux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int *,char const*,char const*,int const) ;
 int FUNC_2 (int *,int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;


 int VAR_8 ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ,int ,...) ;
 int FUNC_6 (int ,int ,int,...) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,char*,char const*,int const) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,char const*) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12( input_thread_t *VAR_12,
                                 enum slave_type VAR_13, const char *VAR_14,
                                 unsigned VAR_15 )
{
    input_thread_private_t *VAR_16 = FUNC_7(VAR_12);
    const char *VAR_17;
    const bool VAR_18 = VAR_15 & VAR_5;
    const bool VAR_19 = VAR_15 & VAR_6;
    const bool VAR_20 = VAR_15 & VAR_7;
    enum es_format_category_e VAR_21;

    switch( VAR_13 )
    {
    case 128:
        VAR_17 = "subtitle";
        VAR_21 = VAR_8;
        break;
    case 129:
        VAR_17 = ((void*)0);
        VAR_21 = VAR_0;
        break;
    default:
        FUNC_11();
    }

    FUNC_8( VAR_12, "loading %s slave: %s (forced: %d)",
             VAR_21 == VAR_8 ? "spu" : "audio", VAR_14, VAR_19 );

    VAR_16->i_last_es_cat = VAR_9;

    input_source_t *VAR_22 = FUNC_1( VAR_12, VAR_14,
                                               VAR_17,
                                               VAR_18 || VAR_17 );

    if( VAR_17 && VAR_22 == ((void*)0) )
        VAR_22 = FUNC_1( VAR_12, VAR_14, ((void*)0), VAR_18 );

    if( VAR_22 == ((void*)0) )
    {
        FUNC_10( VAR_12, "failed to add %s as slave", VAR_14 );
        return VAR_10;
    }

    if( VAR_13 == 129 )
    {
        if( VAR_20 )
        {
            vlc_tick_t VAR_23;


            if( FUNC_5( VAR_16->master->p_demux, VAR_1, VAR_23 ) )
            {
                FUNC_9( VAR_12, "demux doesn't like DEMUX_GET_TIME" );
                FUNC_0( VAR_22 );
                return VAR_10;
            }

            if( FUNC_5( VAR_22->p_demux,
                               VAR_2, VAR_23, 1 ) )
            {
                FUNC_9( VAR_12, "seek failed for new slave" );
                FUNC_0( VAR_22 );
                return VAR_10;
            }
        }


        FUNC_2( VAR_12, VAR_22->p_demux );
    }
    else
        VAR_22->b_slave_sub = 1;

    FUNC_3( VAR_16->i_slave, VAR_16->slave, VAR_22 );

    if( !VAR_19 || VAR_16->i_last_es_cat != VAR_21 )
        return VAR_11;

    FUNC_4( VAR_16->i_last_es_id != -1 );

    FUNC_6( VAR_16->p_es_out_display, VAR_4,
                    VAR_16->i_last_es_id );
    FUNC_6( VAR_16->p_es_out_display, VAR_3,
                    VAR_16->i_last_es_id, 0 );

    return VAR_11;
}
