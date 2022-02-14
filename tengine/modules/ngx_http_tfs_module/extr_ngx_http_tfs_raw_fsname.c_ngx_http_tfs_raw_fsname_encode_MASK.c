
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_uint_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int*,int,int*) ;

void
FUNC_1(u_char *VAR_2, u_char *VAR_3)
{
    u_char VAR_4[VAR_0];
    uint32_t VAR_5;
    ngx_uint_t VAR_6, VAR_7;

    VAR_7 = 0;

    if (VAR_2 != ((void*)0) && VAR_3 != ((void*)0)) {
        FUNC_0(VAR_2, VAR_0, VAR_4);
        for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 += 3) {
            VAR_5 = ((VAR_4[VAR_6] << 16) & 0xff0000)
                     + ((VAR_4[VAR_6 + 1] << 8) & 0xff00) + (VAR_4[VAR_6 + 2] & 0xff);
            VAR_3[VAR_7++] = VAR_1[VAR_5 >> 18];
            VAR_3[VAR_7++] = VAR_1[(VAR_5 >> 12) & 0x3f];
            VAR_3[VAR_7++] = VAR_1[(VAR_5 >> 6) & 0x3f];
            VAR_3[VAR_7++] = VAR_1[VAR_5 & 0x3f];
        }
    }
}
