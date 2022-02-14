
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int packetizer_validate_t ;
struct TYPE_3__ {int i_au_prepend; unsigned int i_au_min_size; int i_startcode; void* p_private; int pf_drain; int pf_validate; int pf_parse; int pf_reset; int pf_startcode_helper; int const* p_startcode; int const* p_au_prepend; scalar_t__ i_offset; int bytestream; int i_state; } ;
typedef TYPE_1__ packetizer_t ;
typedef int packetizer_reset_t ;
typedef int packetizer_parse_t ;
typedef int packetizer_drain_t ;
typedef int block_startcode_helper_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1( packetizer_t *VAR_1,
                                    const uint8_t *VAR_2, int VAR_3,
                                    block_startcode_helper_t VAR_4,
                                    const uint8_t *VAR_5, int VAR_6,
                                    unsigned VAR_7,
                                    packetizer_reset_t VAR_8,
                                    packetizer_parse_t VAR_9,
                                    packetizer_validate_t VAR_10,
                                    packetizer_drain_t VAR_11,
                                    void *VAR_12 )
{
    VAR_1->i_state = VAR_0;
    FUNC_0( &VAR_1->bytestream );
    VAR_1->i_offset = 0;

    VAR_1->i_au_prepend = VAR_6;
    VAR_1->p_au_prepend = VAR_5;
    VAR_1->i_au_min_size = VAR_7;

    VAR_1->i_startcode = VAR_3;
    VAR_1->p_startcode = VAR_2;
    VAR_1->pf_startcode_helper = VAR_4;
    VAR_1->pf_reset = VAR_8;
    VAR_1->pf_parse = VAR_9;
    VAR_1->pf_validate = VAR_10;
    VAR_1->pf_drain = VAR_11;
    VAR_1->p_private = VAR_12;
}
