
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;


struct TYPE_21__ {int p_child; } ;
typedef TYPE_2__ webvtt_region_t ;
typedef int webvtt_dom_node_t ;
struct TYPE_19__ {int psz_region; } ;
struct TYPE_22__ {char* psz_id; int * p_parent; TYPE_13__ settings; } ;
typedef TYPE_3__ webvtt_dom_cue_t ;
typedef int vlc_tick_t ;
typedef int uint8_t ;
struct TYPE_23__ {scalar_t__ i_type; size_t i_payload; int const* p_payload; } ;
typedef TYPE_4__ mp4_box_iterator_t ;
struct TYPE_24__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_25__ {TYPE_1__* p_root; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_20__ {int p_child; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,char*,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*,int const*,size_t) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 void* FUNC_5 (char*,size_t) ;
 int FUNC_6 (TYPE_13__*,char*) ;
 TYPE_3__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*) ;
 TYPE_2__* FUNC_10 (TYPE_6__*,int ) ;

__attribute__((used)) static int FUNC_11( decoder_t *VAR_2,
                           const uint8_t *VAR_3, size_t VAR_4,
                           vlc_tick_t VAR_5, vlc_tick_t VAR_6 )
{
    decoder_sys_t *VAR_7 = VAR_2->p_sys;
    mp4_box_iterator_t VAR_8;
    FUNC_3( &VAR_8, VAR_3, VAR_4 );
    while( FUNC_4( &VAR_8 ) )
    {
        if( VAR_8.i_type == VAR_0 || VAR_8.i_type == VAR_1 )
        {
            webvtt_dom_cue_t *VAR_9 = FUNC_7( VAR_5, VAR_6 );
            if( !VAR_9 )
                continue;

            mp4_box_iterator_t VAR_10;
            FUNC_3( &VAR_10, VAR_8.p_payload, VAR_8.i_payload );
            while( FUNC_4( &VAR_10 ) )
            {
                char *VAR_11 = ((void*)0);
                switch( VAR_10.i_type )
                {
                    case 130:
                        FUNC_2( VAR_9->psz_id );
                        VAR_9->psz_id = FUNC_5( (char *) VAR_10.p_payload, VAR_10.i_payload );
                        break;
                    case 128:
                    {
                        VAR_11 = FUNC_5( (char *) VAR_10.p_payload, VAR_10.i_payload );
                        if( VAR_11 )
                            FUNC_6( &VAR_9->settings, VAR_11 );
                    } break;
                    case 129:
                    {
                        VAR_11 = FUNC_5( (char *) VAR_10.p_payload, VAR_10.i_payload );
                        if( VAR_11 )
                            FUNC_0( VAR_2, VAR_11, VAR_9 );
                    } break;
                }
                FUNC_2( VAR_11 );
            }

            webvtt_region_t *VAR_12 = FUNC_10( VAR_7,
                                                               VAR_9->settings.psz_region );
            if( VAR_12 )
            {
                FUNC_9( VAR_12, VAR_9 );
                FUNC_1( VAR_12->p_child );
            }
            else
            {
                FUNC_8( &VAR_7->p_root->p_child, VAR_9 );
                VAR_9->p_parent = (webvtt_dom_node_t *) VAR_7->p_root;
            }
        }
    }
    return 0;
}
