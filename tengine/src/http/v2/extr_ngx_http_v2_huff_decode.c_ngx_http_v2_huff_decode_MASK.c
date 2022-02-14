
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int*,int*,int,int**) ;
 int FUNC_1 (int ,int *,int ,char*,int) ;
 int FUNC_2 (int ,int *,int ,char*,int,int) ;

ngx_int_t
FUNC_3(u_char *VAR_3, u_char *VAR_4, size_t VAR_5, u_char **VAR_6,
    ngx_uint_t VAR_7, ngx_log_t *VAR_8)
{
    u_char *VAR_9, VAR_10, VAR_11;

    VAR_10 = 0;
    VAR_11 = 1;

    VAR_9 = VAR_4 + VAR_5;

    while (VAR_4 != VAR_9) {
        VAR_10 = *VAR_4++;

        if (FUNC_0(VAR_3, &VAR_11, VAR_10 >> 4, VAR_6)
            != VAR_2)
        {
            FUNC_2(VAR_1, VAR_8, 0,
                           "http2 huffman decoding error at state %d: "
                           "bad code 0x%Xd", *VAR_3, VAR_10 >> 4);

            return VAR_0;
        }

        if (FUNC_0(VAR_3, &VAR_11, VAR_10 & 0xf, VAR_6)
            != VAR_2)
        {
            FUNC_2(VAR_1, VAR_8, 0,
                           "http2 huffman decoding error at state %d: "
                           "bad code 0x%Xd", *VAR_3, VAR_10 & 0xf);

            return VAR_0;
        }
    }

    if (VAR_7) {
        if (!VAR_11) {
            FUNC_1(VAR_1, VAR_8, 0,
                           "http2 huffman decoding error: "
                           "incomplete code 0x%Xd", VAR_10);

            return VAR_0;
        }

        *VAR_3 = 0;
    }

    return VAR_2;
}
