
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* source; } ;
typedef TYPE_2__ stream_directory_t ;
struct TYPE_4__ {int psz_url; } ;


 char* FUNC_0 (int ,char const*) ;

char*
FUNC_1( stream_directory_t* VAR_0,
                                char const* VAR_1 )
{
    return FUNC_0( VAR_0->source->psz_url, VAR_1 );
}
