
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_7__ {int i_chroma; } ;
struct TYPE_5__ {TYPE_4__ video; int i_codec; } ;
struct TYPE_6__ {TYPE_1__ fmt_out; } ;
typedef TYPE_2__ filter_t ;


 int * FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static picture_t *FUNC_1( filter_t *VAR_0 )
{
    VAR_0->fmt_out.video.i_chroma = VAR_0->fmt_out.i_codec;
    return FUNC_0( &VAR_0->fmt_out.video );
}
