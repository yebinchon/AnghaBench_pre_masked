
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int i_codec; } ;
struct TYPE_7__ {scalar_t__ i_codec; } ;
struct TYPE_8__ {int pf_flush; int pf_decode; TYPE_1__ fmt_out; TYPE_4__* p_sys; TYPE_2__ fmt_in; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_9__ {int b_has_headers; int * p_st; int end_date; } ;
typedef TYPE_4__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 TYPE_4__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2( vlc_object_t *VAR_8 )
{
    decoder_t *VAR_9 = (decoder_t*)VAR_8;
    decoder_sys_t *VAR_10;

    if( VAR_9->fmt_in.i_codec != VAR_3 )
        return VAR_4;


    if( ( VAR_9->p_sys = VAR_10 = FUNC_1(sizeof(decoder_sys_t)) ) == ((void*)0) )
        return VAR_5;
    VAR_10->b_has_headers = 0;

    FUNC_0( &VAR_10->end_date, VAR_7 );


    VAR_9->fmt_out.i_codec = VAR_2;

    VAR_9->pf_decode = VAR_0;
    VAR_9->pf_flush = VAR_1;

    VAR_10->p_st = ((void*)0);

    return VAR_6;
}
