
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int ngx_str_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;

ngx_int_t
FUNC_2(u_char *VAR_2, ngx_str_t *VAR_3)
{
    if (FUNC_0(VAR_2, "GIF", 3) == 0) {
        FUNC_1(VAR_3, "image/gif");
        return VAR_1;
    }

    if (FUNC_0(VAR_2, "\xff\xd8\xff", 3) == 0) {
        FUNC_1(VAR_3, "image/jpeg");
        return VAR_1;
    }

    if (FUNC_0(VAR_2, "\x89\x50\x4e\x47\x0d\x0a\x1a\x0a", 8) == 0) {
        FUNC_1(VAR_3, "image/png");
        return VAR_1;
    }

    if ((FUNC_0(VAR_2, "CWS", 3) == 0)
              ||(FUNC_0(VAR_2, "FWS", 3) == 0))
    {
        FUNC_1(VAR_3, "application/x-shockwave-flash");
        return VAR_1;
    }

    if ((FUNC_0(VAR_2, "BM", 2) == 0)
              ||(FUNC_0(VAR_2, "BA", 2) == 0)
              ||(FUNC_0(VAR_2, "CI", 2) == 0)
              ||(FUNC_0(VAR_2, "CP", 2) == 0)
              ||(FUNC_0(VAR_2, "IC", 2) == 0)
              ||(FUNC_0(VAR_2, "PI", 2) == 0))
    {
        FUNC_1(VAR_3, "image/bmp");
        return VAR_1;
    }

    if ((FUNC_0(VAR_2, "\115\115\000\052", 4) == 0)
            ||(FUNC_0(VAR_2, "\111\111\052\000", 4) == 0)
            ||(FUNC_0(VAR_2, "\115\115\000\053\000\010\000\000", 8) == 0)
            ||(FUNC_0(VAR_2, "\111\111\053\000\010\000\000\000", 8) == 0))
    {
        FUNC_1(VAR_3, "image/tiff");
        return VAR_1;
    }

    return VAR_0;
}
