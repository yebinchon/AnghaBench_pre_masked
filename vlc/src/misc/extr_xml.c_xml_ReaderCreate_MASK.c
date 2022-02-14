
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * p_module; int * p_stream; } ;
typedef TYPE_1__ xml_reader_t ;
typedef int vlc_object_t ;
typedef int stream_t ;


 int * FUNC_0 (TYPE_1__*,char*,int *,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,int,char*) ;
 int FUNC_4 (TYPE_1__*) ;

xml_reader_t *FUNC_5(vlc_object_t *VAR_0, stream_t *VAR_1)
{
    xml_reader_t *VAR_2;

    VAR_2 = FUNC_3(VAR_0, sizeof(*VAR_2), "xml reader");

    VAR_2->p_stream = VAR_1;
    VAR_2->p_module = FUNC_0(VAR_2, "xml reader", ((void*)0), 0);
    if (FUNC_2(VAR_2->p_module == ((void*)0)))
    {
        FUNC_1(VAR_2, "XML reader not found");
        FUNC_4(VAR_2);
        return ((void*)0);
    }
    return VAR_2;
}
