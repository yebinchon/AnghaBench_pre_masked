
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {scalar_t__ i_codec; } ;
struct TYPE_8__ {scalar_t__ i_codec; } ;
struct TYPE_9__ {TYPE_1__ fmt_out; int pf_decode; TYPE_4__* p_sys; TYPE_2__ fmt_in; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_10__ {int p_handle; } ;
typedef TYPE_4__ decoder_sys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_5 )
{
    decoder_t *VAR_6 = (decoder_t *)VAR_5;

    if ( VAR_6->fmt_in.i_codec != VAR_1 )
        return VAR_2;

    decoder_sys_t *VAR_7 = FUNC_2( sizeof(decoder_sys_t) );
    if( FUNC_3(!VAR_7) )
        return VAR_3;

    VAR_7->p_handle = FUNC_0( ((void*)0) );
    if( !VAR_7->p_handle )
    {
        FUNC_1( VAR_7 );
        return VAR_2;
    }

    VAR_6->p_sys = VAR_7;
    VAR_6->pf_decode = VAR_0;
    VAR_6->fmt_out.i_codec = 0;

    return VAR_4;
}
