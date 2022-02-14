
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int i_codec; } ;
struct TYPE_6__ {scalar_t__ i_codec; } ;
struct TYPE_4__ {TYPE_2__ fmt_out; TYPE_3__ fmt_in; int pf_decode; } ;
typedef TYPE_1__ decoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(vlc_object_t *VAR_5)
{
    decoder_t *VAR_6 = (decoder_t *)VAR_5;

    if (VAR_6->fmt_in.i_codec != VAR_2)
        return VAR_3;

    VAR_6->pf_decode = VAR_0;
    FUNC_0(&VAR_6->fmt_out, &VAR_6->fmt_in);
    VAR_6->fmt_out.i_codec = VAR_1;
    return VAR_4;
}
