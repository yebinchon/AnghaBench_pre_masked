
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int xml_reader_t ;
typedef char const xml_elem_hnd_t ;
struct TYPE_15__ {int location; int trackNum; int genre; int album; int artist; int name; } ;
typedef TYPE_2__ track_elem_t ;
struct TYPE_16__ {scalar_t__ p_sys; } ;
typedef TYPE_3__ stream_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;
struct TYPE_14__ {int * member_0; int smpl; int cmplx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_3__*,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_3__*,char*,int ) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 TYPE_2__* FUNC_9 () ;
 int FUNC_10 (TYPE_3__*,int *,TYPE_2__*,int *,char*,char const*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_11( stream_t *VAR_5, input_item_node_t *VAR_6,
                              track_elem_t *VAR_7, xml_reader_t *VAR_8,
                              const char *VAR_9,
                              xml_elem_hnd_t *VAR_10 )
{
    FUNC_0(VAR_9); FUNC_0(VAR_10);
    input_item_t *VAR_11 = ((void*)0);
    int VAR_12;
    VAR_7 = FUNC_9();

    xml_elem_hnd_t VAR_13[] =
        { {"array", VAR_0, {.cmplx = VAR_4} },
          {"key", VAR_1, {.smpl = VAR_3} },
          {"integer", VAR_1, {.smpl = VAR_3} },
          {"string", VAR_1, {.smpl = VAR_3} },
          {"date", VAR_1, {.smpl = VAR_3} },
          {"true", VAR_1, {((void*)0)} },
          {"false", VAR_1, {((void*)0)} },
          {((void*)0), VAR_2, {((void*)0)} }
        };

    VAR_12 = FUNC_10( VAR_5, VAR_6, VAR_7,
                        VAR_8, "dict", VAR_13 );

    FUNC_6( VAR_5, "name: %s, artist: %s, album: %s, genre: %s, trackNum: %s, location: %s",
             VAR_7->name, VAR_7->artist, VAR_7->album, VAR_7->genre, VAR_7->trackNum, VAR_7->location );

    if( !VAR_7->location )
    {
        FUNC_8( VAR_5, "ignoring track without Location entry" );
        FUNC_2( VAR_7 );
        return 1;
    }

    FUNC_7( VAR_5, "Adding '%s'", VAR_7->location );
    VAR_11 = FUNC_3( VAR_7->location, ((void*)0) );
    FUNC_5( VAR_6, VAR_11 );


    FUNC_1( VAR_11, VAR_7 );
    FUNC_4( VAR_11 );

    (*(size_t *)VAR_5->p_sys)++;

    FUNC_2( VAR_7 );
    return VAR_12;
}
