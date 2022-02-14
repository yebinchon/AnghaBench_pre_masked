
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_extra; int p_extra; } ;
struct TYPE_7__ {TYPE_1__ fmt_in; } ;
typedef TYPE_2__ decoder_t ;
typedef int bs_t ;
struct TYPE_8__ {int i_flags; int i_buffer; int p_buffer; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int const) ;

__attribute__((used)) static void FUNC_4( decoder_t *VAR_4, block_t *VAR_5 )
{
    bs_t VAR_6;


    FUNC_1( &VAR_6, VAR_4->fmt_in.p_extra, VAR_4->fmt_in.i_extra );
    if( FUNC_2( &VAR_6, 2 ) == 3 )
        return;
    FUNC_3( &VAR_6, 22 );
    const bool VAR_7 = FUNC_2( &VAR_6, 1 );
    const bool VAR_8 = FUNC_2( &VAR_6, 3 ) > 0;
    FUNC_3( &VAR_6, 2 );
    const bool VAR_9 = FUNC_2( &VAR_6, 1 );
    if( FUNC_0( &VAR_6 ) )
        return;


    FUNC_1( &VAR_6, VAR_5->p_buffer, VAR_5->i_buffer );
    FUNC_3( &VAR_6, VAR_9 +
                 2 +
                 VAR_7 );

    VAR_5->i_flags &= ~VAR_2;
    if( FUNC_2( &VAR_6, 1 ) )
        VAR_5->i_flags |= VAR_3;
    else if( !VAR_8 || FUNC_2( &VAR_6, 1 ) )
        VAR_5->i_flags |= VAR_1;
    else
        VAR_5->i_flags |= VAR_0;
}
