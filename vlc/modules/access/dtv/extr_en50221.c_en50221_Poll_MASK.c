
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_12__ {int i_ca_type; scalar_t__ i_next_event; unsigned int i_nb_slots; int* pb_active_slot; int* pb_slot_mmi_expected; int* pb_slot_mmi_undisplayed; scalar_t__ i_timeout; TYPE_1__* p_sessions; int obj; scalar_t__* pb_tc_has_data; int fd; } ;
typedef TYPE_2__ cam_t ;
struct TYPE_13__ {unsigned int num; int flags; } ;
typedef TYPE_3__ ca_slot_info_t ;
struct TYPE_11__ {unsigned int i_slot; int (* pf_manage ) (TYPE_2__*,int) ;scalar_t__ i_resource_id; int (* pf_close ) (TYPE_2__*,unsigned int) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_0 (scalar_t__*,int*) ;
 int FUNC_1 (TYPE_2__*,unsigned int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,unsigned int,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,unsigned int,scalar_t__*,scalar_t__*,int*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,unsigned int,scalar_t__,int *,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (int ,int ,...) ;
 int FUNC_6 (int ,char*,unsigned int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (TYPE_2__*,unsigned int) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 () ;

void FUNC_12( cam_t * VAR_8 )
{
    switch( VAR_8->i_ca_type )
    {
    case 128:
        if( FUNC_11() > VAR_8->i_next_event )
            break;
    case 129:
        return;
    default:
        FUNC_10();
    }

    for ( unsigned VAR_9 = 0; VAR_9 < VAR_8->i_nb_slots; VAR_9++ )
    {
        uint8_t VAR_10;
        ca_slot_info_t VAR_11;

        VAR_11.num = VAR_9;
        if ( FUNC_5( VAR_8->fd, VAR_1, &VAR_11 ) != 0 )
        {
            FUNC_7( VAR_8->obj, "en50221_Poll: couldn't get info on slot %d",
                     VAR_9 );
            continue;
        }

        if ( !(VAR_11.flags & VAR_0) )
        {
            if ( VAR_8->pb_active_slot[VAR_9] )
            {
                FUNC_6( VAR_8->obj, "en50221_Poll: slot %d has been removed",
                         VAR_9 );
                VAR_8->pb_active_slot[VAR_9] = 0;
                VAR_8->pb_slot_mmi_expected[VAR_9] = 0;
                VAR_8->pb_slot_mmi_undisplayed[VAR_9] = 0;


                for ( unsigned VAR_12 = 1; VAR_12 <= VAR_3; VAR_12++ )
                {
                    if ( VAR_8->p_sessions[VAR_12 - 1].i_resource_id
                          && VAR_8->p_sessions[VAR_12 - 1].i_slot == VAR_9 )
                    {
                        if ( VAR_8->p_sessions[VAR_12 - 1].pf_close != ((void*)0) )
                        {
                            VAR_8->p_sessions[VAR_12 - 1].pf_close( VAR_8, VAR_12 );
                        }
                        VAR_8->p_sessions[VAR_12 - 1].i_resource_id = 0;
                    }
                }
            }

            continue;
        }
        else if ( !VAR_8->pb_active_slot[VAR_9] )
        {
            FUNC_1( VAR_8, VAR_9 );

            if ( !VAR_8->pb_active_slot[VAR_9] )
            {
                FUNC_6( VAR_8->obj, "en50221_Poll: resetting slot %d", VAR_9 );

                if ( FUNC_5( VAR_8->fd, VAR_2, 1 << VAR_9) != 0 )
                {
                    FUNC_7( VAR_8->obj, "en50221_Poll: couldn't reset slot %d",
                             VAR_9 );
                }
                continue;
            }

            FUNC_6( VAR_8->obj, "en50221_Poll: slot %d is active",
                     VAR_9 );
        }

        if ( !VAR_8->pb_tc_has_data[VAR_9] )
        {
            if ( FUNC_4( VAR_8, VAR_9, VAR_5, ((void*)0), 0 ) !=
                    VAR_7 )
            {
                FUNC_7( VAR_8->obj,
                         "en50221_Poll: couldn't send TPDU on slot %d",
                         VAR_9 );
                continue;
            }
            if ( FUNC_3( VAR_8, VAR_9, &VAR_10, ((void*)0), ((void*)0) ) !=
                    VAR_7 )
            {
                FUNC_7( VAR_8->obj,
                         "en50221_Poll: couldn't recv TPDU on slot %d",
                         VAR_9 );
                continue;
            }
        }

        while ( VAR_8->pb_tc_has_data[VAR_9] )
        {
            uint8_t VAR_13[VAR_4];
            int VAR_14, VAR_15;
            uint8_t *VAR_16;

            if ( FUNC_4( VAR_8, VAR_9, VAR_6, ((void*)0), 0 ) != VAR_7 )
            {
                FUNC_7( VAR_8->obj,
                         "en50221_Poll: couldn't send TPDU on slot %d",
                         VAR_9 );
                continue;
            }
            if ( FUNC_3( VAR_8, VAR_9, &VAR_10, VAR_13, &VAR_14 ) !=
                    VAR_7 )
            {
                FUNC_7( VAR_8->obj,
                         "en50221_Poll: couldn't recv TPDU on slot %d",
                         VAR_9 );
                continue;
            }

            VAR_16 = FUNC_0( &VAR_13[3], &VAR_15 );
            if ( VAR_15 <= 1 )
                continue;

            VAR_16++;
            VAR_15--;

            if ( VAR_10 != VAR_5 )
            {
                FUNC_7( VAR_8->obj,
                         "en50221_Poll: fragmented TPDU not supported" );
                break;
            }

            FUNC_2( VAR_8, VAR_9, VAR_16, VAR_15 );
        }
    }

    for ( int VAR_17 = 1; VAR_17 <= VAR_3; VAR_17++ )
    {
        if ( VAR_8->p_sessions[VAR_17 - 1].i_resource_id
              && VAR_8->p_sessions[VAR_17 - 1].pf_manage )
        {
            VAR_8->p_sessions[VAR_17 - 1].pf_manage( VAR_8,
                                                           VAR_17 );
        }
    }

    VAR_8->i_next_event = FUNC_11() + VAR_8->i_timeout;
}
