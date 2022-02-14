
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int i_program_number; } ;
typedef TYPE_1__ en50221_capmt_info_t ;
struct TYPE_11__ {int i_selected_programs; int obj; } ;
typedef TYPE_2__ cam_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int ,int *,size_t) ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_2__*,int,TYPE_1__ const*,int,int,size_t*) ;
 int FUNC_2 (TYPE_2__*,int,TYPE_1__ const*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8( cam_t * VAR_3, int VAR_4,
                      const en50221_capmt_info_t *VAR_5 )
{
    uint8_t *VAR_6;
    size_t VAR_7;

    if( VAR_3->i_selected_programs >= VAR_1 )
    {
        FUNC_6( VAR_3->obj, "Not adding CAPMT for SID %d, too many programs",
                  VAR_5->i_program_number );
        return;
    }
    VAR_3->i_selected_programs++;
    if( VAR_3->i_selected_programs == 1 )
    {
        FUNC_2( VAR_3, VAR_4, VAR_5 );
        return;
    }





    FUNC_5( VAR_3->obj, "adding CAPMT for SID %d on session %d",
             VAR_5->i_program_number, VAR_4 );

    VAR_6 = FUNC_1( VAR_3, VAR_4, VAR_5,
                          0x4 , 0x1 ,
                          &VAR_7 );
    if( VAR_6 != ((void*)0) )
    {
        FUNC_0( VAR_3, VAR_4, VAR_0, VAR_6, VAR_7 );
        FUNC_4( VAR_6 );
    }
}
