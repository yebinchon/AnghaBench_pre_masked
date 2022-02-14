
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int count; TYPE_3__* p_recordings; } ;
struct TYPE_6__ {TYPE_1__ recordings; TYPE_3__* psz_id; } ;
typedef TYPE_2__ acoustid_result_t ;
struct TYPE_7__ {struct TYPE_7__* psz_title; struct TYPE_7__* psz_artist; } ;


 int FUNC_0 (TYPE_3__*) ;

void FUNC_1( acoustid_result_t * VAR_0 )
{
    FUNC_0( VAR_0->psz_id );
    for ( unsigned int VAR_1=0; VAR_1<VAR_0->recordings.count; VAR_1++ )
    {
        FUNC_0( VAR_0->recordings.p_recordings[ VAR_1 ].psz_artist );
        FUNC_0( VAR_0->recordings.p_recordings[ VAR_1 ].psz_title );
    }
    FUNC_0( VAR_0->recordings.p_recordings );
}
