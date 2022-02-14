
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* p_decoder_specific_info; } ;
struct TYPE_7__ {TYPE_3__* p_esds; } ;
struct TYPE_10__ {TYPE_1__ data; } ;
struct TYPE_8__ {TYPE_5__* p_decConfigDescr; TYPE_5__* psz_URL; } ;
struct TYPE_9__ {TYPE_2__ es_descriptor; } ;
typedef TYPE_4__ MP4_Box_t ;


 int FUNC_0 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_1( MP4_Box_t *VAR_0 )
{
    FUNC_0( VAR_0->data.p_esds->es_descriptor.psz_URL );
    if( VAR_0->data.p_esds->es_descriptor.p_decConfigDescr )
    {
        FUNC_0( VAR_0->data.p_esds->es_descriptor.p_decConfigDescr->p_decoder_specific_info );
        FUNC_0( VAR_0->data.p_esds->es_descriptor.p_decConfigDescr );
    }
}
