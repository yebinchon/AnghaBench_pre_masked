
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int length; int * values; } ;
struct TYPE_8__ {TYPE_1__ array; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_3__ json_value ;
struct TYPE_10__ {int psz_artist; } ;
typedef TYPE_4__ acoustid_mb_result_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1( const json_value *VAR_1, acoustid_mb_result_t *VAR_2 )
{

    if ( !VAR_1 || VAR_1->type != VAR_0 || VAR_1->u.array.length < 1 )
        return;
    VAR_2->psz_artist = FUNC_0( VAR_1->u.array.values[ 0 ], "name" );
}
