
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_uint_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int*,int,int*) ;

void
FUNC_1(u_char *VAR_3, u_char *VAR_4)
{
    u_char VAR_5[VAR_0];
    uint32_t VAR_6;
    ngx_uint_t VAR_7, VAR_8;

    VAR_8 = 0;

    if (VAR_3 != ((void*)0) && VAR_4 != ((void*)0)) {
        for (VAR_7 = 0; VAR_7 < VAR_1 - 2; VAR_7 += 4) {
            VAR_6 = (VAR_2[VAR_3[VAR_7] & 0xff] << 18)
                     + (VAR_2[VAR_3[VAR_7 + 1] & 0xff] << 12)
                        + (VAR_2[VAR_3[VAR_7 + 2] & 0xff] << 6)
                           + VAR_2[VAR_3[VAR_7 + 3] & 0xff];
            VAR_5[VAR_8++] = (u_char) ((VAR_6 >> 16) & 0xff);
            VAR_5[VAR_8++] = (u_char) ((VAR_6 >> 8) & 0xff);
            VAR_5[VAR_8++] = (u_char) (VAR_6 & 0xff);
        }
        FUNC_0(VAR_5, VAR_0, VAR_4);
    }
}
