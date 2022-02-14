
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {scalar_t__ i_chroma; scalar_t__ i_width; scalar_t__ i_height; scalar_t__ orientation; } ;
struct TYPE_10__ {TYPE_3__ video; } ;
struct TYPE_7__ {scalar_t__ i_chroma; scalar_t__ i_width; scalar_t__ i_height; scalar_t__ orientation; } ;
struct TYPE_8__ {TYPE_1__ video; } ;
struct TYPE_11__ {TYPE_4__ fmt_out; TYPE_2__ fmt_in; } ;
typedef TYPE_5__ filter_t ;


 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1( vlc_object_t *VAR_4 )
{
    filter_t *VAR_5 = (filter_t *)VAR_4;

    const bool VAR_6 = VAR_5->fmt_in.video.i_chroma != VAR_5->fmt_out.video.i_chroma;
    const bool VAR_7 = VAR_5->fmt_in.video.i_width != VAR_5->fmt_out.video.i_width ||
                          VAR_5->fmt_in.video.i_height != VAR_5->fmt_out.video.i_height;

    const bool VAR_8 = VAR_6 && VAR_7;
    const bool VAR_9 = VAR_5->fmt_in.video.orientation != VAR_5->fmt_out.video.orientation;

    if( !VAR_6 && !VAR_8 && !VAR_9)
        return VAR_3;

    return FUNC_0( VAR_5, VAR_9 ? VAR_2 :
                               VAR_8 ? VAR_1 :
                               VAR_0 );
}
