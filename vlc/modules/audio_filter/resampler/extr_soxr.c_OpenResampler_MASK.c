
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {scalar_t__ i_format; } ;
struct TYPE_9__ {TYPE_3__ audio; } ;
struct TYPE_6__ {scalar_t__ i_format; } ;
struct TYPE_7__ {TYPE_1__ audio; } ;
struct TYPE_10__ {TYPE_4__ fmt_out; TYPE_2__ fmt_in; } ;
typedef TYPE_5__ filter_t ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1( vlc_object_t *VAR_1 )
{
    filter_t *VAR_2 = (filter_t *)VAR_1;


    if( VAR_2->fmt_in.audio.i_format != VAR_2->fmt_out.audio.i_format )
        return VAR_0;
    return FUNC_0( VAR_1, 1 );
}
