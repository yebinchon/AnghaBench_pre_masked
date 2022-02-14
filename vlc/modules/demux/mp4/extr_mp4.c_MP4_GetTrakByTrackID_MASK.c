
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {scalar_t__ const i_track_ID; } ;
struct TYPE_8__ {scalar_t__ i_type; struct TYPE_8__* p_next; } ;
typedef TYPE_1__ MP4_Box_t ;


 scalar_t__ VAR_0 ;
 TYPE_6__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static MP4_Box_t * FUNC_2( MP4_Box_t *VAR_1, const uint32_t VAR_2 )
{
    MP4_Box_t *VAR_3 = FUNC_1( VAR_1, "trak" );
    MP4_Box_t *VAR_4;
    while( VAR_3 )
    {
        if( VAR_3->i_type == VAR_0 &&
            (VAR_4 = FUNC_1( VAR_3, "tkhd" )) && FUNC_0(VAR_4) &&
            FUNC_0(VAR_4)->i_track_ID == VAR_2 )
                break;
        else
            VAR_3 = VAR_3->p_next;
    }
    return VAR_3;
}
