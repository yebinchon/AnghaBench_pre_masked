
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_9__ {int video; } ;
struct TYPE_8__ {scalar_t__ i_cat; } ;
struct TYPE_12__ {TYPE_4__* cbs; TYPE_2__ fmt_out; TYPE_1__ fmt_in; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_10__ {int * (* buffer_new ) (TYPE_5__*) ;} ;
struct TYPE_11__ {TYPE_3__ video; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int) ;

picture_t *FUNC_3( decoder_t *VAR_1 )
{
    FUNC_2( VAR_1->fmt_in.i_cat == VAR_0 && VAR_1->cbs != ((void*)0) );
    if (VAR_1->cbs->video.buffer_new == ((void*)0))
        return FUNC_0( &VAR_1->fmt_out.video );
    return VAR_1->cbs->video.buffer_new( VAR_1 );
}
