
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {int i_cat; } ;
struct TYPE_5__ {TYPE_1__ fmt_out; } ;
struct decoder_owner {int lock; int * p_aout; int * p_vout; TYPE_2__ dec; } ;
typedef TYPE_2__ decoder_t ;





 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_2__*,char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;

__attribute__((used)) static void FUNC_6( struct decoder_owner *VAR_0, bool VAR_1, vlc_tick_t VAR_2 )
{
    decoder_t *VAR_3 = &VAR_0->dec;

    FUNC_1( VAR_3, "toggling %s", VAR_1 ? "resume" : "pause" );
    switch( VAR_3->fmt_out.i_cat )
    {
        case 128:
            FUNC_3( &VAR_0->lock );
            if( VAR_0->p_vout != ((void*)0) )
                FUNC_5( VAR_0->p_vout, VAR_1, VAR_2 );
            FUNC_4( &VAR_0->lock );
            break;
        case 130:
            FUNC_3( &VAR_0->lock );
            if( VAR_0->p_aout != ((void*)0) )
                FUNC_0( VAR_0->p_aout, VAR_1, VAR_2 );
            FUNC_4( &VAR_0->lock );
            break;
        case 129:
            break;
        default:
            FUNC_2();
    }
}
