
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int* p_buffer; } ;
typedef TYPE_1__ block_t ;


 TYPE_1__* FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int const*,int*,int) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int) ;

block_t *FUNC_4(vlc_object_t *VAR_0, uint16_t *VAR_1, size_t VAR_2)
{
    if (VAR_2 < 3) {
        FUNC_2(VAR_0, "VANC line too small (%zu words)", VAR_2);
        return ((void*)0);
    }

    static const uint8_t VAR_3[6] = { 0x00, 0x00, 0xff, 0x03, 0xff, 0x03 };
    if (FUNC_1(VAR_3, VAR_1, 3*2)) {

        return ((void*)0);
    }

    size_t VAR_4 = (VAR_1[5] & 0xff) + 6 + 1;
    if (VAR_4 > VAR_2) {
        FUNC_2(VAR_0, "Data Count (%zu) > line length (%zu)", VAR_4, VAR_2);
        return ((void*)0);
    }

    uint16_t VAR_5 = 0;
    for (size_t VAR_6 = 3; VAR_6 < VAR_4 - 1; VAR_6++) {
        uint16_t VAR_7 = VAR_1[VAR_6];
        int VAR_8 = VAR_7 >> 8;
        int VAR_9 = FUNC_3(VAR_7 & 0xff);
        if ((!!VAR_9 ^ !!(VAR_7 & 0x100)) || (VAR_8 != 1 && VAR_8 != 2)) {
            FUNC_2(VAR_0, "Parity incorrect for word %zu", VAR_6);
            return ((void*)0);
        }
        VAR_5 += VAR_7;
        VAR_5 &= 0x1ff;
        VAR_1[VAR_6] &= 0xff;
    }

    VAR_5 |= ((~VAR_5 & 0x100) << 1);
    if (VAR_1[VAR_4 - 1] != VAR_5) {
        FUNC_2(VAR_0, "VANC checksum incorrect: 0x%.4x != 0x%.4x", VAR_5, VAR_1[VAR_4-1]);
        return ((void*)0);
    }

    if (VAR_1[3] != 0x61 || VAR_1[4] != 0x01 ) {


        return ((void*)0);
    }


    uint16_t *VAR_10 = &VAR_1[6];
    if (VAR_10[0] != 0x96 || VAR_10[1] != 0x69) {
        FUNC_2(VAR_0, "Invalid CDP header 0x%.2x 0x%.2x", VAR_10[0], VAR_10[1]);
        return ((void*)0);
    }

    VAR_4 -= 7;

    if (VAR_10[2] != VAR_4) {
        FUNC_2(VAR_0, "CDP len %d != %zu", VAR_10[2], VAR_4);
        return ((void*)0);
    }

    uint8_t VAR_11 = 0;
    for (size_t VAR_12 = 0; VAR_12 < VAR_4 - 1; VAR_12++)
        VAR_11 += VAR_10[VAR_12];
    VAR_11 = VAR_11 ? 256 - VAR_11 : 0;
    if (VAR_10[VAR_4 - 1] != VAR_11) {
        FUNC_2(VAR_0, "CDP checksum invalid 0x%.4x != 0x%.4x", VAR_11, VAR_10[VAR_4-1]);
        return ((void*)0);
    }

    uint8_t VAR_13 = VAR_10[3];
    if (!(VAR_13 & 0x0f)) {
        FUNC_2(VAR_0, "CDP frame rate invalid (0x%.2x)", VAR_13);
        return ((void*)0);
    }
    VAR_13 >>= 4;
    if (VAR_13 > 8) {
        FUNC_2(VAR_0, "CDP frame rate invalid (0x%.2x)", VAR_13);
        return ((void*)0);
    }

    if (!(VAR_10[4] & 0x43)) {
        FUNC_2(VAR_0, "CDP flags invalid (0x%.2x)", VAR_10[4]);
        return ((void*)0);
    }

    uint16_t VAR_14 = (VAR_10[5] << 8) | VAR_10[6];
    if (VAR_10[7] != 0x72) {
        FUNC_2(VAR_0, "Invalid ccdata_id 0x%.2x", VAR_10[7]);
        return ((void*)0);
    }

    unsigned VAR_15 = VAR_10[8];
    if (!(VAR_15 & 0xe0)) {
        FUNC_2(VAR_0, "Invalid cc_count 0x%.2x", VAR_15);
        return ((void*)0);
    }

    VAR_15 &= 0x1f;
    if ((VAR_4 - 13) < VAR_15 * 3) {
        FUNC_2(VAR_0, "Invalid cc_count %d (> %zu)", VAR_15 * 3, VAR_4 - 13);
        return ((void*)0);
    }

    if (VAR_10[VAR_4 - 4] != 0x74) {
        FUNC_2(VAR_0, "Invalid footer id 0x%.2x", VAR_10[VAR_4-4]);
        return ((void*)0);
    }

    uint16_t VAR_16 = (VAR_10[VAR_4 - 3] << 8) | VAR_10[VAR_4 - 2];
    if (VAR_16 != VAR_14) {
        FUNC_2(VAR_0, "Header 0x%.4x != Footer 0x%.4x", VAR_14, VAR_16);
        return ((void*)0);
    }

    block_t *VAR_17 = FUNC_0(VAR_15 * 3);

    for (size_t VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
        VAR_17->p_buffer[3*VAR_18+0] = VAR_10[9 + 3*VAR_18+0] ;
        VAR_17->p_buffer[3*VAR_18+1] = VAR_10[9 + 3*VAR_18+1];
        VAR_17->p_buffer[3*VAR_18+2] = VAR_10[9 + 3*VAR_18+2];
    }

    return VAR_17;
}
