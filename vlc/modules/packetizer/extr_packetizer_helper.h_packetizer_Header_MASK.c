
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ i_offset; int bytestream; int i_state; } ;
typedef TYPE_1__ packetizer_t ;
struct TYPE_10__ {int p_buffer; } ;
typedef TYPE_2__ block_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int const*,int) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,TYPE_2__**) ;

__attribute__((used)) static inline void FUNC_5( packetizer_t *VAR_1,
                                      const uint8_t *VAR_2, int VAR_3 )
{
    block_t *VAR_4 = FUNC_0( VAR_3 );
    if( !VAR_4 )
        return;

    FUNC_3( VAR_4->p_buffer, VAR_2, VAR_3 );

    block_t *VAR_5;
    while( ( VAR_5 = FUNC_4( VAR_1, &VAR_4 ) ) )
        FUNC_2( VAR_5 );
    while( ( VAR_5 = FUNC_4( VAR_1, ((void*)0) ) ) )
        FUNC_2( VAR_5 );

    VAR_1->i_state = VAR_0;
    FUNC_1( &VAR_1->bytestream );
    VAR_1->i_offset = 0;
}
