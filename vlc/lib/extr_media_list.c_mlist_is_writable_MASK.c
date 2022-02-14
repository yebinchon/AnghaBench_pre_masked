
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ b_read_only; } ;
typedef TYPE_1__ libvlc_media_list_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline
bool FUNC_1( libvlc_media_list_t *VAR_0 )
{
    if( !VAR_0||VAR_0->b_read_only )
    {

        FUNC_0( "Attempt to write a read-only media list" );
        return 0;
    }
    return 1;
}
