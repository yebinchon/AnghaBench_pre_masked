
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct vlc_http_resource {int response; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vlc_http_resource*) ;

uintmax_t FUNC_3(struct vlc_http_resource *VAR_0)
{
    int VAR_1 = FUNC_2(VAR_0);
    if (VAR_1 < 0)
        return -1;

    uintmax_t VAR_2 = FUNC_0(VAR_0->response);
    if (VAR_2 != (uintmax_t)-1)
        return VAR_2;

    if (VAR_1 >= 300 || VAR_1 == 201)
        return -1;



    return FUNC_1(VAR_0->response);
}
