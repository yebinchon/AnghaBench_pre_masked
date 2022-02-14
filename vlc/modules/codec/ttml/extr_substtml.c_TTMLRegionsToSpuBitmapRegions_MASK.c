
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_20__ {int y; int x; } ;
struct TYPE_18__ {int y; int x; } ;
struct TYPE_21__ {TYPE_5__ extent; TYPE_3__ origin; int flags; scalar_t__ p_next; } ;
struct TYPE_16__ {int i_bytes; int p_bytes; } ;
struct TYPE_23__ {TYPE_6__ updt; TYPE_1__ bgbitmap; } ;
typedef TYPE_8__ ttml_region_t ;
struct TYPE_19__ {int y; int x; } ;
struct TYPE_17__ {int y; int x; } ;
struct TYPE_24__ {TYPE_4__ extent; TYPE_2__ origin; int i_flags; } ;
typedef TYPE_9__ ttml_image_updater_region_t ;
struct TYPE_22__ {int p_sys; } ;
struct TYPE_15__ {TYPE_7__ updater; } ;
typedef TYPE_10__ subpicture_t ;
typedef int picture_t ;
typedef int decoder_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_9__*) ;
 TYPE_9__* FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void FUNC_5( decoder_t *VAR_4, subpicture_t *VAR_5,
                                           ttml_region_t *VAR_6 )
{

    for( ttml_region_t *VAR_7 = VAR_6;
                        VAR_7; VAR_7 = (ttml_region_t *) VAR_7->updt.p_next )
    {
        picture_t *VAR_8 = FUNC_2( VAR_4, VAR_7->bgbitmap.p_bytes,
                                                         VAR_7->bgbitmap.i_bytes );
        if( VAR_8 )
        {
            ttml_image_updater_region_t *VAR_9 = FUNC_1( VAR_8 );
            if( !VAR_9 )
            {
                FUNC_3( VAR_8 );
                continue;
            }

            FUNC_4((int)VAR_3 == (int)VAR_1,
                          "flag enums values differs");
            FUNC_4((int)VAR_2 == (int)VAR_0,
                          "flag enums values differs");
            VAR_9->i_flags = VAR_7->updt.flags;
            VAR_9->origin.x = VAR_7->updt.origin.x;
            VAR_9->origin.y = VAR_7->updt.origin.y;
            VAR_9->extent.x = VAR_7->updt.extent.x;
            VAR_9->extent.y = VAR_7->updt.extent.y;
            FUNC_0( VAR_5->updater.p_sys, VAR_9 );
        }
    }
}
