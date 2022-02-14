
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xml_reader_t ;
typedef char const xml_elem_hnd_t ;
typedef char const track_elem_t ;
struct TYPE_7__ {scalar_t__ p_sys; } ;
typedef TYPE_2__ stream_t ;
typedef int input_item_node_t ;
struct TYPE_6__ {int * member_0; int cmplx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_2__*,char*,size_t) ;
 int FUNC_2 (TYPE_2__*,int *,int *,int *,char*,char const*) ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_3( stream_t *VAR_4, input_item_node_t *VAR_5,
                               track_elem_t *VAR_6, xml_reader_t *VAR_7,
                               const char *VAR_8,
                               xml_elem_hnd_t *VAR_9 )
{
    FUNC_0(VAR_6); FUNC_0(VAR_8); FUNC_0(VAR_9);
    xml_elem_hnd_t VAR_10[] =
        { {"dict", VAR_0, {.cmplx = VAR_3} },
          {"key", VAR_1, {((void*)0)} },
          {((void*)0), VAR_2, {((void*)0)} }
        };

    FUNC_2( VAR_4, VAR_5, ((void*)0), VAR_7,
                "dict", VAR_10 );

    FUNC_1( VAR_4, "added %zu tracks successfully",
              *(size_t *)VAR_4->p_sys );

    return 1;
}
