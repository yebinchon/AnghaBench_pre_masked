
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int psz_desc; int psz_url; scalar_t__ i_revision; scalar_t__ i_minor; scalar_t__ i_major; } ;
struct TYPE_5__ {TYPE_1__ release; } ;
typedef TYPE_2__ update_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( update_t *VAR_0 )
{
    VAR_0->release.i_major = 0;
    VAR_0->release.i_minor = 0;
    VAR_0->release.i_revision = 0;

    FUNC_0( VAR_0->release.psz_url );
    FUNC_0( VAR_0->release.psz_desc );
}
