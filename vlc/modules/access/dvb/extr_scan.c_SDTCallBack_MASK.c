
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_18__ {TYPE_5__* p_sdt; } ;
struct TYPE_17__ {int i_sdt; TYPE_5__** pp_sdt; } ;
struct TYPE_19__ {TYPE_2__ local; TYPE_1__ others; int * p_obj; } ;
typedef TYPE_3__ scan_session_t ;
struct TYPE_20__ {size_t i_service_name_length; int i_service_type; int i_service_name; } ;
typedef TYPE_4__ dvbpsi_service_dr_t ;
struct TYPE_21__ {scalar_t__ i_table_id; scalar_t__ i_version; scalar_t__ b_current_next; TYPE_6__* p_first_service; int i_network_id; int i_extension; } ;
typedef TYPE_5__ dvbpsi_sdt_t ;
struct TYPE_22__ {TYPE_7__* p_first_descriptor; int b_free_ca; int i_running_status; int b_eit_present; int b_eit_schedule; int i_service_id; struct TYPE_22__* p_next; } ;
typedef TYPE_6__ dvbpsi_sdt_service_t ;
struct TYPE_23__ {int i_tag; struct TYPE_23__* p_next; } ;
typedef TYPE_7__ dvbpsi_descriptor_t ;


 int FUNC_0 (TYPE_3__*,int ,TYPE_5__***) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (char*,int ,size_t) ;
 int FUNC_4 (int *,char*,...) ;
 TYPE_5__** FUNC_5 (TYPE_5__**,int) ;

__attribute__((used)) static void FUNC_6( scan_session_t *VAR_2, dvbpsi_sdt_t *VAR_3 )
{
    vlc_object_t *VAR_4 = VAR_2->p_obj;
    dvbpsi_sdt_t **VAR_5 = ((void*)0);
    if( VAR_3->i_table_id == VAR_1 )
    {
        if( !FUNC_0( VAR_2, VAR_3->i_extension, &VAR_5 ) )
        {
            dvbpsi_sdt_t **VAR_6 = FUNC_5( VAR_2->others.pp_sdt,
                                                (VAR_2->others.i_sdt + 1) * sizeof( *VAR_6 ) );
            if( !VAR_6 )
            {
                FUNC_2( VAR_3 );
                return;
            }
            VAR_5 = &VAR_6[VAR_2->others.i_sdt];
            VAR_2->others.pp_sdt = VAR_6;
            VAR_2->others.i_sdt++;
        }
    }
    else
    {
        VAR_5 = &VAR_2->local.p_sdt;
    }


    if( *VAR_5 )
    {
        if( (*VAR_5)->i_version == VAR_3->i_version ||
            (*VAR_5)->b_current_next > VAR_3->b_current_next )
        {

            FUNC_2( VAR_3 );
            return;
        }
        FUNC_2( *VAR_5 );
    }
    *VAR_5 = VAR_3;


    FUNC_4( VAR_4, "new SDT %s ts_id=%d version=%d current_next=%d network_id=%d",
             ( VAR_3->i_table_id == VAR_0 ) ? "local" : "other",
             VAR_3->i_extension, VAR_3->i_version, VAR_3->b_current_next,
             VAR_3->i_network_id );

    dvbpsi_sdt_service_t *VAR_7;
    for( VAR_7 = VAR_3->p_first_service; VAR_7; VAR_7 = VAR_7->p_next )
    {
        dvbpsi_descriptor_t *VAR_8;

        FUNC_4( VAR_4, "  * service id=%d eit schedule=%d present=%d running=%d free_ca=%d",
                 VAR_7->i_service_id, VAR_7->b_eit_schedule,
                 VAR_7->b_eit_present, VAR_7->i_running_status,
                 VAR_7->b_free_ca );
        for( VAR_8 = VAR_7->p_first_descriptor; VAR_8; VAR_8 = VAR_8->p_next )
        {
            if( VAR_8->i_tag == 0x48 )
            {
                dvbpsi_service_dr_t *VAR_9 = FUNC_1( VAR_8 );
                if( VAR_9 )
                {
                    char VAR_10[257];

                    FUNC_3( VAR_10, VAR_9->i_service_name, VAR_9->i_service_name_length );
                    VAR_10[VAR_9->i_service_name_length] = '\0';

                    FUNC_4( VAR_4, "    - type=%d name=%s",
                             VAR_9->i_service_type, VAR_10 );
                }
            }
            else
            {
                FUNC_4( VAR_4, "    * dsc 0x%x", VAR_8->i_tag );
            }
        }
    }
}
