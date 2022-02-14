
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ int16_t ;
typedef int demux_t ;
struct TYPE_10__ {int* p_buffer; size_t i_buffer; scalar_t__ i_nb_samples; scalar_t__ i_length; int i_flags; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_1__***,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int*,int*,unsigned int) ;
 int FUNC_5 (int *,char*,...) ;
 scalar_t__ FUNC_6 (int*,unsigned int) ;
 scalar_t__ FUNC_7 (int**,size_t*) ;

__attribute__((used)) static block_t *FUNC_8(demux_t *VAR_1, block_t *VAR_2)
{
    block_t *VAR_3 = ((void*)0);
    block_t **VAR_4 = &VAR_3;

    uint8_t *VAR_5 = VAR_2->p_buffer;
    size_t VAR_6 = VAR_2->i_buffer;

    while (VAR_6 > 3 && ((VAR_5[0] << 3) | (VAR_5[1] >> 5)) == 0x3ff) {
        int16_t VAR_7 = 0, VAR_8 = 0;
        int VAR_9 = (VAR_5[1] >> 4) & 1;
        int VAR_10 = (VAR_5[1] >> 3) & 1;
        int VAR_11 = (VAR_5[1] >> 2) & 1;

        VAR_6 -= 2;
        VAR_5 += 2;

        unsigned VAR_12 = 0;
        while (VAR_6--) {
            int VAR_13 = *VAR_5++;
            VAR_12 += VAR_13;
            if (VAR_13 != 0xff)
                break;
        }

        if (VAR_9) {
            VAR_7 = FUNC_7(&VAR_5, &VAR_6);
            if (VAR_7 < 0) {
                FUNC_5(VAR_1, "Invalid start trimming flag");
            }
        }
        if (VAR_10) {
            VAR_8 = FUNC_7(&VAR_5, &VAR_6);
            if (VAR_8 < 0) {
                FUNC_5(VAR_1, "Invalid end trimming flag");
            }
        }
        if (VAR_11 && VAR_6) {
            unsigned VAR_14 = *VAR_5++; VAR_6--;
            if (VAR_14 > VAR_6) {
                FUNC_5(VAR_1, "Invalid control extension length %d > %zu", VAR_14, VAR_6);
                break;
            }
            VAR_5 += VAR_14;
            VAR_6 -= VAR_14;
        }

        if (!VAR_12 || VAR_12 > VAR_6) {
            FUNC_5(VAR_1, "Invalid Opus AU size %d (PES %zu)", VAR_12, VAR_6);
            break;
        }

        block_t *VAR_15 = FUNC_0(VAR_12);
        if (!VAR_15)
            break;
        FUNC_4(VAR_15->p_buffer, VAR_5, VAR_12);
        FUNC_2(VAR_15, VAR_2);
        FUNC_1( &VAR_4, VAR_15 );

        VAR_15->i_nb_samples = FUNC_6(VAR_5, VAR_12);
        if (VAR_8 && (uint16_t) VAR_8 <= VAR_15->i_nb_samples)
            VAR_15->i_length = VAR_8;
        else
            VAR_15->i_length = 0;

        if (VAR_7 && VAR_7 < (VAR_15->i_nb_samples - VAR_15->i_length)) {
            VAR_15->i_nb_samples -= VAR_7;
            if (VAR_15->i_nb_samples == 0)
                VAR_15->i_flags |= VAR_0;
        }

        VAR_5 += VAR_12;
        VAR_6 -= VAR_12;
    }

    FUNC_3(VAR_2);
    return VAR_3;
}
