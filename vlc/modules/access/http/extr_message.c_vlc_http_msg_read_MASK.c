
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {int * payload; } ;
typedef int block_t ;


 int * FUNC_0 (int *) ;

block_t *FUNC_1(struct vlc_http_msg *VAR_0)
{
    if (VAR_0->payload == ((void*)0))
        return ((void*)0);

    return FUNC_0(VAR_0->payload);
}
