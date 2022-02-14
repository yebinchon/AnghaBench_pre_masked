
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int psz_rating; int psz_description; int psz_copyright; int psz_artist; int psz_title; } ;
struct TYPE_4__ {TYPE_2__ content_description; } ;
typedef TYPE_1__ asf_object_t ;
typedef TYPE_2__ asf_object_content_description_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( asf_object_t *VAR_0)
{
    asf_object_content_description_t *VAR_1 = &VAR_0->content_description;

    FUNC_0( VAR_1->psz_title );
    FUNC_0( VAR_1->psz_artist );
    FUNC_0( VAR_1->psz_copyright );
    FUNC_0( VAR_1->psz_description );
    FUNC_0( VAR_1->psz_rating );
}
