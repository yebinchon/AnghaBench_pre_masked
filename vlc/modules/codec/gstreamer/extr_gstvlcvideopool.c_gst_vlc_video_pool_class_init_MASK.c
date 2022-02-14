
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int finalize; } ;
struct TYPE_3__ {int release_buffer; int acquire_buffer; int free_buffer; int alloc_buffer; int set_config; int get_options; int start; } ;
typedef int GstVlcVideoPoolClass ;
typedef TYPE_1__ GstBufferPoolClass ;
typedef TYPE_2__ GObjectClass ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0( GstVlcVideoPoolClass *VAR_8 )
{
    GObjectClass *VAR_9 = ( GObjectClass* )VAR_8;
    GstBufferPoolClass *VAR_10 = ( GstBufferPoolClass* )VAR_8;

    VAR_9->finalize = VAR_2;

    VAR_10->start = VAR_7;
    VAR_10->get_options = VAR_4;
    VAR_10->set_config = VAR_6;
    VAR_10->alloc_buffer = VAR_1;
    VAR_10->free_buffer = VAR_3;
    VAR_10->acquire_buffer = VAR_0;
    VAR_10->release_buffer = VAR_5;
}
