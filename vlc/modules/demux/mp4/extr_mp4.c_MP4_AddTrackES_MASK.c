
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i_cat; } ;
struct TYPE_4__ {scalar_t__ b_forced_spu; TYPE_2__ fmt; } ;
typedef TYPE_1__ mp4_track_t ;
typedef int es_out_t ;
typedef int es_out_id_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static es_out_id_t * FUNC_2( es_out_t *VAR_2, mp4_track_t *VAR_3 )
{
    es_out_id_t *VAR_4 = FUNC_0( VAR_2, &VAR_3->fmt );

    if( VAR_3->fmt.i_cat == VAR_1 && VAR_4 && VAR_3->b_forced_spu )
        FUNC_1( VAR_2, VAR_0, VAR_4 );

    return VAR_4;
}
