
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int psz_rating; int psz_name; } ;
struct TYPE_8__ {int psz_rating; int psz_name; } ;
struct TYPE_7__ {TYPE_1__ future; TYPE_3__ current; int psz_channel_number; int psz_channel_call_letter; int psz_channel_name; } ;
struct TYPE_9__ {TYPE_2__ meta; } ;
typedef TYPE_4__ xds_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( xds_t *VAR_0 )
{

    FUNC_0( VAR_0->meta.psz_channel_name );
    FUNC_0( VAR_0->meta.psz_channel_call_letter );
    FUNC_0( VAR_0->meta.psz_channel_number );


    FUNC_0( VAR_0->meta.current.psz_name );
    FUNC_0( VAR_0->meta.current.psz_rating );

    FUNC_0( VAR_0->meta.future.psz_name );
    FUNC_0( VAR_0->meta.future.psz_rating );
}
