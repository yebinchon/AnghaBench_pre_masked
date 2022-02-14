
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_packetized; } ;
typedef TYPE_1__ es_format_t ;
typedef int demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void *FUNC_2 (demux_t *VAR_2)
{
    es_format_t VAR_3;

    FUNC_1 (&VAR_3, VAR_0, VAR_1);
    VAR_3.b_packetized = 0;
    return FUNC_0 (VAR_2, &VAR_3);
}
