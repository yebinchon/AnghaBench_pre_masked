
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int i_program_number; } ;
typedef TYPE_1__ en50221_capmt_info_t ;
struct TYPE_9__ {int obj; int i_selected_programs; } ;
typedef TYPE_2__ cam_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int ,int *,size_t) ;
 int * FUNC_1 (TYPE_2__*,int,TYPE_1__ const*,int,int,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,int) ;

__attribute__((used)) static void FUNC_4( cam_t * VAR_1, int VAR_2,
                         const en50221_capmt_info_t *VAR_3 )
{
    uint8_t *VAR_4;
    size_t VAR_5;

    VAR_1->i_selected_programs--;
    FUNC_3( VAR_1->obj, "deleting CAPMT for SID %d on session %d",
             VAR_3->i_program_number, VAR_2 );

    VAR_4 = FUNC_1( VAR_1, VAR_2, VAR_3,
                          0x5 , 0x4 ,
                          &VAR_5 );
    if( VAR_4 != ((void*)0) )
    {
        FUNC_0( VAR_1, VAR_2, VAR_0, VAR_4, VAR_5 );
        FUNC_2( VAR_4 );
    }
}
