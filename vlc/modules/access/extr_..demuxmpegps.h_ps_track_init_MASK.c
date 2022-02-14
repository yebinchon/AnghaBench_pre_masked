
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_configured; int b_seen; int fmt; void* i_last_pts; void* i_first_pts; int * es; scalar_t__ i_next_block_flags; scalar_t__ i_id; scalar_t__ i_skip; } ;
typedef TYPE_1__ ps_track_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static inline void FUNC_1( ps_track_t VAR_3[VAR_0] )
{
    int VAR_4;
    for( VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ )
    {
        VAR_3[VAR_4].b_configured = 0;
        VAR_3[VAR_4].b_seen = 0;
        VAR_3[VAR_4].i_skip = 0;
        VAR_3[VAR_4].i_id = 0;
        VAR_3[VAR_4].i_next_block_flags = 0;
        VAR_3[VAR_4].es = ((void*)0);
        VAR_3[VAR_4].i_first_pts = VAR_2;
        VAR_3[VAR_4].i_last_pts = VAR_2;
        FUNC_0( &VAR_3[VAR_4].fmt, VAR_1, 0 );
    }
}
