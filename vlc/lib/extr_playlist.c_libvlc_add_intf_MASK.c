
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p_libvlc_int; } ;
typedef TYPE_1__ libvlc_instance_t ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (char*,...) ;

int FUNC_2( libvlc_instance_t *VAR_0, const char *VAR_1 )
{
    if( FUNC_0( VAR_0->p_libvlc_int, VAR_1 ))
    {
        if( VAR_1 != ((void*)0) )
            FUNC_1("interface \"%s\" initialization failed", VAR_1 );
        else
            FUNC_1("default interface initialization failed");
        return -1;
    }
    return 0;
}
