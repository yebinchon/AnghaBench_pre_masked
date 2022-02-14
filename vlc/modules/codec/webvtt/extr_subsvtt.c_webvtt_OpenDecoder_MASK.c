
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {scalar_t__ i_codec; scalar_t__ i_extra; } ;
struct TYPE_9__ {TYPE_1__ fmt_in; int pf_flush; int pf_decode; TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_10__ {TYPE_4__* p_root; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_11__ {int psz_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (int *) ;

int FUNC_6( vlc_object_t *VAR_6 )
{
    decoder_t *VAR_7 = (decoder_t*)VAR_6;
    decoder_sys_t *VAR_8;

    if( VAR_7->fmt_in.i_codec != VAR_2 )
        return VAR_3;


    VAR_7->p_sys = VAR_8 = FUNC_1( 1, sizeof( *VAR_8 ) );
    if( FUNC_4( VAR_8 == ((void*)0) ) )
        return VAR_4;

    VAR_8->p_root = FUNC_5( ((void*)0) );
    if( !VAR_8->p_root )
    {
        FUNC_2( VAR_8 );
        return VAR_4;
    }
    VAR_8->p_root->psz_tag = FUNC_3( "video" );

    VAR_7->pf_decode = VAR_0;
    VAR_7->pf_flush = VAR_1;

    if( VAR_7->fmt_in.i_extra )
        FUNC_0( VAR_7 );

    return VAR_5;
}
