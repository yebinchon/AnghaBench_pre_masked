
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* codecs; } ;
struct TYPE_6__ {TYPE_2__ codec_list; } ;
typedef TYPE_1__ asf_object_t ;
typedef TYPE_2__ asf_object_codec_list_t ;
struct TYPE_8__ {struct TYPE_8__* p_information; struct TYPE_8__* psz_description; struct TYPE_8__* psz_name; struct TYPE_8__* p_next; } ;
typedef TYPE_3__ asf_codec_entry_t ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1( asf_object_t *VAR_0 )
{
    asf_object_codec_list_t *VAR_1 = &VAR_0->codec_list;

    for( asf_codec_entry_t *VAR_2 = VAR_1->codecs, *VAR_3;
         VAR_2 != ((void*)0);
         VAR_2 = VAR_3 )
    {
        VAR_3 = VAR_2->p_next;
        FUNC_0( VAR_2->psz_name );
        FUNC_0( VAR_2->psz_description );
        FUNC_0( VAR_2->p_information );
        FUNC_0( VAR_2 );
    }
}
