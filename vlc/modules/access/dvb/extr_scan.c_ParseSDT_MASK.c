
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int scan_t ;
struct TYPE_19__ {int type; void* psz_provider; void* psz_name; int b_crypted; } ;
typedef TYPE_1__ scan_service_t ;
struct TYPE_20__ {scalar_t__ i_sdt_version; } ;
typedef TYPE_2__ scan_multiplex_t ;
struct TYPE_21__ {int i_service_type; int i_service_provider_name_length; int i_service_provider_name; int i_service_name_length; int i_service_name; } ;
typedef TYPE_3__ dvbpsi_service_dr_t ;
struct TYPE_22__ {scalar_t__ i_version; TYPE_5__* p_first_service; int i_extension; } ;
typedef TYPE_4__ dvbpsi_sdt_t ;
struct TYPE_23__ {TYPE_6__* p_first_descriptor; int b_free_ca; int i_service_id; struct TYPE_23__* p_next; } ;
typedef TYPE_5__ dvbpsi_sdt_service_t ;
struct TYPE_24__ {int i_tag; struct TYPE_24__* p_next; } ;
typedef TYPE_6__ dvbpsi_descriptor_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (void*) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 int FUNC_5 (int *,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 void* FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12( vlc_object_t *VAR_1, scan_t *VAR_2, const dvbpsi_sdt_t *VAR_3 )
{
    FUNC_0(VAR_1);



    scan_multiplex_t *VAR_4 = FUNC_3( VAR_2, VAR_3->i_extension );
    if( FUNC_10(VAR_4 == ((void*)0)) )
        return ;

    FUNC_5( VAR_2, VAR_4, 1 );

    if( VAR_4->i_sdt_version == VAR_0 )
        VAR_4->i_sdt_version = VAR_3->i_version;

    for( const dvbpsi_sdt_service_t *VAR_5 = VAR_3->p_first_service;
                                     VAR_5; VAR_5 = VAR_5->p_next )
    {
        bool VAR_6 = 0;
        scan_service_t *VAR_7 = FUNC_7( VAR_4, VAR_5->i_service_id );
        if( VAR_7 == ((void*)0) )
        {
            VAR_6 = 1;
            VAR_7 = FUNC_9( VAR_5->i_service_id );
            if( FUNC_10(VAR_7 == ((void*)0)) )
                continue;
            if( !FUNC_6( VAR_4, VAR_7 ) )
            {
                FUNC_8( VAR_7 );
                continue;
            }
        }

        VAR_7->b_crypted = VAR_5->b_free_ca;

        for( dvbpsi_descriptor_t *VAR_8 = VAR_5->p_first_descriptor;
                                  VAR_8; VAR_8 = VAR_8->p_next )
        {
            if( VAR_8->i_tag != 0x48 )
                continue;

            dvbpsi_service_dr_t *VAR_9 = FUNC_1( VAR_8 );
            if( VAR_9 )
            {
                if( !VAR_7->psz_name )
                    VAR_7->psz_name = FUNC_11( VAR_9->i_service_name,
                                                VAR_9->i_service_name_length );
                FUNC_2( VAR_7->psz_provider );
                VAR_7->psz_provider = FUNC_11( VAR_9->i_service_provider_name,
                                                VAR_9->i_service_provider_name_length );

                VAR_7->type = VAR_9->i_service_type;
            }
        }

        FUNC_4( VAR_2, VAR_7, !VAR_6 );
    }
}
