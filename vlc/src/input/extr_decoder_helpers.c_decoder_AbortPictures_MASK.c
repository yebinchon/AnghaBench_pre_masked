
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ i_cat; } ;
struct TYPE_10__ {TYPE_3__* cbs; TYPE_1__ fmt_in; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_8__ {int (* abort_pictures ) (TYPE_4__*,int) ;} ;
struct TYPE_9__ {TYPE_2__ video; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(decoder_t *VAR_1, bool VAR_2)
{
    FUNC_1(VAR_1->fmt_in.i_cat == VAR_0 && VAR_1->cbs);
    if (VAR_1->cbs->video.abort_pictures)
        VAR_1->cbs->video.abort_pictures(VAR_1, VAR_2);
}
