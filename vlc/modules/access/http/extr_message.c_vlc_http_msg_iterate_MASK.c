
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {int * payload; } ;


 int FUNC_0 (struct vlc_http_msg*) ;
 struct vlc_http_msg* FUNC_1 (int *) ;

struct vlc_http_msg *FUNC_2(struct vlc_http_msg *VAR_0)
{
    struct vlc_http_msg *VAR_1 = FUNC_1(VAR_0->payload);

    VAR_0->payload = ((void*)0);
    FUNC_0(VAR_0);
    return VAR_1;
}
