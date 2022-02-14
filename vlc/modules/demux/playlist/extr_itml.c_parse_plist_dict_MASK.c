
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xml_reader_t ;
typedef char const xml_elem_hnd_t ;
typedef char const track_elem_t ;
typedef int stream_t ;
typedef int input_item_node_t ;
struct TYPE_2__ {int * member_0; int cmplx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,int *,int *,int *,char*,char const*) ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_2( stream_t *VAR_4, input_item_node_t *VAR_5,
                              track_elem_t *VAR_6, xml_reader_t *VAR_7,
                              const char *VAR_8,
                              xml_elem_hnd_t *VAR_9 )
{
    FUNC_0(VAR_6); FUNC_0(VAR_8); FUNC_0(VAR_9);
    xml_elem_hnd_t VAR_10[] =
        { {"dict", VAR_0, {.cmplx = VAR_3} },
          {"array", VAR_1, {((void*)0)} },
          {"key", VAR_1, {((void*)0)} },
          {"integer", VAR_1, {((void*)0)} },
          {"string", VAR_1, {((void*)0)} },
          {"date", VAR_1, {((void*)0)} },
          {"true", VAR_1, {((void*)0)} },
          {"false", VAR_1, {((void*)0)} },
          {((void*)0), VAR_2, {((void*)0)} }
        };

    return FUNC_1( VAR_4, VAR_5, ((void*)0), VAR_7,
                       "dict", VAR_10 );
}
