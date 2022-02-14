
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(uint16_t *VAR_0, const uint32_t *VAR_1, const int VAR_2, const int VAR_3)
{
    const int VAR_4 = ((VAR_2 + 47) / 48) * 48 * 8 / 3 / 4;
    uint16_t *VAR_5 = &VAR_0[0];
    uint16_t *VAR_6 = &VAR_0[VAR_2 * VAR_3 * 2 / 2];
    uint16_t *VAR_7 = &VAR_0[VAR_2 * VAR_3 * 3 / 2];
    for (int VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
        const uint32_t *VAR_9 = VAR_1;
        uint32_t VAR_10 = 0;
        int VAR_11;
        for (VAR_11 = 0; VAR_11 < VAR_2 - 5; VAR_11 += 6) {
            do { VAR_10 = FUNC_1(*VAR_9++); *VAR_6++ = VAR_10 & 0x3FF; *VAR_5++ = (VAR_10 >> 10) & 0x3FF; *VAR_7++ = (VAR_10 >> 20) & 0x3FF; } while (0);
            do { VAR_10 = FUNC_1(*VAR_9++); *VAR_5++ = VAR_10 & 0x3FF; *VAR_6++ = (VAR_10 >> 10) & 0x3FF; *VAR_5++ = (VAR_10 >> 20) & 0x3FF; } while (0);
            do { VAR_10 = FUNC_1(*VAR_9++); *VAR_7++ = VAR_10 & 0x3FF; *VAR_5++ = (VAR_10 >> 10) & 0x3FF; *VAR_6++ = (VAR_10 >> 20) & 0x3FF; } while (0);
            do { VAR_10 = FUNC_1(*VAR_9++); *VAR_5++ = VAR_10 & 0x3FF; *VAR_7++ = (VAR_10 >> 10) & 0x3FF; *VAR_5++ = (VAR_10 >> 20) & 0x3FF; } while (0);
        }
        if (VAR_11 < VAR_2 - 1) {
            do { VAR_10 = FUNC_1(*VAR_9++); *VAR_6++ = VAR_10 & 0x3FF; *VAR_5++ = (VAR_10 >> 10) & 0x3FF; *VAR_7++ = (VAR_10 >> 20) & 0x3FF; } while (0);

            VAR_10 = FUNC_1(*VAR_9++);
            *VAR_5++ = VAR_10 & 0x3FF;
        }
        if (VAR_11 < VAR_2 - 3) {
            *VAR_6++ = (VAR_10 >> 10) & 0x3FF;
            *VAR_5++ = (VAR_10 >> 20) & 0x3FF;

            VAR_10 = FUNC_1(*VAR_9++);
            *VAR_7++ = VAR_10 & 0x3FF;
            *VAR_5++ = (VAR_10 >> 10) & 0x3FF;
        }

        VAR_1 += VAR_4;
    }
}
