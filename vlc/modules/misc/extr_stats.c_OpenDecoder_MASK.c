
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int i_width; int i_height; int i_sar_num; int i_sar_den; } ;
struct TYPE_4__ {TYPE_2__ video; int i_codec; } ;
struct TYPE_6__ {TYPE_1__ fmt_out; int pf_decode; } ;
typedef TYPE_3__ decoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1 ( vlc_object_t *VAR_3 )
{
    decoder_t *VAR_4 = (decoder_t*)VAR_3;

    FUNC_0( VAR_3, "opening stats decoder" );


    VAR_4->pf_decode = VAR_0;


    VAR_4->fmt_out.i_codec = VAR_1;
    VAR_4->fmt_out.video.i_width = 100;
    VAR_4->fmt_out.video.i_height = 100;
    VAR_4->fmt_out.video.i_sar_num = 1;
    VAR_4->fmt_out.video.i_sar_den = 1;

    return VAR_2;
}
