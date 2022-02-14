
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct render_context {int * libvlc_d3d; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( void *VAR_0 )
{

    struct render_context *VAR_1 = VAR_0;
    if (VAR_1->libvlc_d3d)
    {
        FUNC_0(VAR_1->libvlc_d3d);
        VAR_1->libvlc_d3d = ((void*)0);
    }
}
