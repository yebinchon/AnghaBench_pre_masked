
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_4__ {scalar_t__ i_packet; } ;
struct timestamps_filter_s {scalar_t__ sequence_offset; scalar_t__ contiguous_last; TYPE_1__ mva; } ;
struct mva_packet_s {scalar_t__ dts; int diff; } ;
typedef int int64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 int const FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 struct mva_packet_s* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,char const*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_6(const char *VAR_2, struct timestamps_filter_s *VAR_3,
                                   vlc_tick_t VAR_4, vlc_tick_t VAR_5,
                                   bool VAR_6, bool VAR_7)
{
    if(VAR_4 == 0 && VAR_5 == 0)
        return;

    struct mva_packet_s *VAR_8 = FUNC_4(&VAR_3->mva);
    if (VAR_8)
    {
        if(VAR_8->dts == VAR_4)
            return;

        if(VAR_7)
        {
            const int64_t VAR_9 = VAR_3->mva.i_packet > VAR_1 ? FUNC_3(&VAR_3->mva) * 2 : VAR_0;
            if(FUNC_1(VAR_4 - VAR_8->dts) > VAR_9 || VAR_6)
            {
                VAR_8->diff = FUNC_3(&VAR_3->mva);
                VAR_3->sequence_offset = VAR_3->contiguous_last - VAR_4 + VAR_8->diff;



            }
            else VAR_8->diff = VAR_4 - VAR_8->dts;
        }
        FUNC_0(VAR_2);

    }

    VAR_3->contiguous_last = VAR_4 + VAR_3->sequence_offset;

    FUNC_2(&VAR_3->mva, VAR_4, VAR_5);
}
