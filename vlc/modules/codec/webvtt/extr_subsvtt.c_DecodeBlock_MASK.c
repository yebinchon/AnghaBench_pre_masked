
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_12__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_13__ {TYPE_1__* p_root; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_14__ {int i_flags; int i_buffer; int p_buffer; scalar_t__ i_length; scalar_t__ i_pts; } ;
typedef TYPE_4__ block_t ;
struct TYPE_11__ {int p_child; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_5( decoder_t *VAR_3, block_t *VAR_4 )
{
    if( VAR_4 == ((void*)0) )
        return VAR_1;

    decoder_sys_t *VAR_5 = VAR_3->p_sys;

    vlc_tick_t VAR_6 = VAR_4->i_pts - VAR_2;
    vlc_tick_t VAR_7 = VAR_6 + VAR_4->i_length;

    if( VAR_4->i_flags & VAR_0 )
        FUNC_1( VAR_3 );
    else
        FUNC_0( &VAR_5->p_root->p_child, VAR_6 );

    FUNC_2( VAR_3, VAR_4->p_buffer, VAR_4->i_buffer,
                    VAR_6, VAR_7 );

    FUNC_3( VAR_3, VAR_6, VAR_7 );

    FUNC_4( VAR_4 );
    return VAR_1;
}
