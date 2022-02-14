
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int mediac; int i_attributes; struct TYPE_5__* pp_attributes; struct TYPE_5__* mediav; struct TYPE_5__* fmt; struct TYPE_5__* psz_uri; struct TYPE_5__* psz_sessioninfo; struct TYPE_5__* psz_sessionname; } ;
typedef TYPE_1__ sdp_t ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2( sdp_t *VAR_0 )
{
    FUNC_1( VAR_0->psz_sessionname );
    FUNC_1( VAR_0->psz_sessioninfo );
    FUNC_1( VAR_0->psz_uri );

    for (unsigned VAR_1 = 0; VAR_1 < VAR_0->mediac; VAR_1++)
    {
        FUNC_1 (VAR_0->mediav[VAR_1].fmt);
        for (int VAR_2 = 0; VAR_2 < VAR_0->mediav[VAR_1].i_attributes; VAR_2++)
            FUNC_0 (VAR_0->mediav[VAR_1].pp_attributes[VAR_2]);
        FUNC_1 (VAR_0->mediav[VAR_1].pp_attributes);
    }
    FUNC_1 (VAR_0->mediav);

    for (int VAR_3 = 0; VAR_3 < VAR_0->i_attributes; VAR_3++)
        FUNC_0 (VAR_0->pp_attributes[VAR_3]);

    FUNC_1 (VAR_0->pp_attributes);
    FUNC_1 (VAR_0);
}
