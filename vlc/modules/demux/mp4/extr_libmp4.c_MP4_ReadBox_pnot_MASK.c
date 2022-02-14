
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int stream_t ;
struct TYPE_6__ {TYPE_1__* p_pnot; } ;
struct TYPE_7__ {int i_size; TYPE_2__ data; } ;
struct TYPE_5__ {scalar_t__ i_index; int i_type; int i_date; } ;
typedef TYPE_3__ MP4_Box_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_1, MP4_Box_t *VAR_2 )
{
    if ( VAR_2->i_size != 20 )
        return 0;
    FUNC_3( VAR_0, ((void*)0) );
    FUNC_1( VAR_2->data.p_pnot->i_date );
    uint16_t VAR_3;
    FUNC_0( VAR_3 );
    if ( VAR_3 != 0 )
        FUNC_4( 0 );
    FUNC_2( VAR_2->data.p_pnot->i_type );
    FUNC_0( VAR_2->data.p_pnot->i_index );
    FUNC_4( 1 );
}
