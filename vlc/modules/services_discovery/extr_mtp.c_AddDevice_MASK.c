
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ services_discovery_t ;
struct TYPE_19__ {char* psz_name; scalar_t__ i_count; int i_tracks_num; int * pp_items; int i_product_id; int i_dev; int i_bus; } ;
typedef TYPE_3__ services_discovery_sys_t ;
typedef int input_item_t ;
struct TYPE_17__ {int product_id; } ;
struct TYPE_21__ {TYPE_1__ device_entry; int devnum; int bus_location; } ;
struct TYPE_20__ {struct TYPE_20__* next; int title; int artist; } ;
typedef TYPE_4__ LIBMTP_track_t ;
typedef TYPE_5__ LIBMTP_raw_device_t ;
typedef int LIBMTP_mtpdevice_t ;


 int FUNC_0 (TYPE_2__*,TYPE_4__*) ;
 int VAR_0 ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int *,int ,TYPE_2__*) ;
 int * FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_8 (int ,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_11 (TYPE_2__*,char*,...) ;
 int FUNC_12 (TYPE_2__*,char*) ;
 char* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14( services_discovery_t *VAR_4,
                      LIBMTP_raw_device_t *VAR_5 )
{
    services_discovery_sys_t *VAR_6 = VAR_4->p_sys;
    char *VAR_7 = ((void*)0);
    LIBMTP_mtpdevice_t *VAR_8;
    LIBMTP_track_t *VAR_9, *VAR_10;

    if( ( VAR_8 = FUNC_4( VAR_5 ) ) != ((void*)0) )
    {
        if( !( VAR_7 = FUNC_1( VAR_8 ) ) )
            if( !( VAR_7 = FUNC_2( VAR_8 ) ) )
                if( !( VAR_7 = FUNC_13( FUNC_7( "MTP Device" ) ) ) )
                    return VAR_2;
        FUNC_11( VAR_4, "Found device: %s", VAR_7 );
        VAR_6->i_bus = VAR_5->bus_location;
        VAR_6->i_dev = VAR_5->devnum;
        VAR_6->i_product_id = VAR_5->device_entry.product_id;
        if( ( VAR_9 = FUNC_3( VAR_8,
                            VAR_0, VAR_4 ) ) == ((void*)0) )
        {
            FUNC_12( VAR_4, "No tracks on the device" );
            VAR_6->pp_items = ((void*)0);
        }
        else
        {
            if( !( VAR_6->pp_items = FUNC_8( VAR_6->i_tracks_num,
                                                   sizeof( input_item_t * ) ) ) )
            {
                FUNC_9( VAR_7 );
                return VAR_2;
            }
            VAR_6->i_count = 0;
            while( VAR_9 != ((void*)0) )
            {
                FUNC_10( VAR_4, "Track found: %s - %s", VAR_9->artist,
                         VAR_9->title );
                FUNC_0( VAR_4, VAR_9 );
                VAR_10 = VAR_9;
                VAR_9 = VAR_9->next;
                FUNC_6( VAR_10 );
            }
        }
        VAR_6->psz_name = VAR_7;
        FUNC_5( VAR_8 );
        return VAR_3;
    }
    else
    {
        FUNC_11( VAR_4, "The device seems to be mounted, unmount it first" );
        return VAR_1;
    }
}
