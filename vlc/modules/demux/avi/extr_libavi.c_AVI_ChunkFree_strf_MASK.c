
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int avi_chunk_t ;
struct TYPE_7__ {int p_bih; } ;
struct TYPE_6__ {scalar_t__ i_cat; } ;
struct TYPE_5__ {int p_wf; } ;
struct TYPE_8__ {TYPE_3__ vids; TYPE_2__ common; TYPE_1__ auds; } ;
typedef TYPE_4__ avi_chunk_strf_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1( avi_chunk_t *VAR_2 )
{
    avi_chunk_strf_t *VAR_3 = (avi_chunk_strf_t*)VAR_2;
    if( VAR_3->common.i_cat == VAR_0 )
    {
        FUNC_0( VAR_3->auds.p_wf );
    }
    else if( VAR_3->common.i_cat == VAR_1 )
    {
        FUNC_0( VAR_3->vids.p_bih );
    }
}
