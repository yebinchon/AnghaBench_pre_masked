
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int vlc_tick_t ;
typedef struct mva_packet_s {scalar_t__ diff; } const mva_packet_s ;
struct moving_average_s {unsigned int i_packet; struct mva_packet_s const* packets; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static vlc_tick_t FUNC_1(const struct moving_average_s *VAR_1)
{
    unsigned VAR_2;
    const struct mva_packet_s *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);

    if(FUNC_0(VAR_1->i_packet >= VAR_0))
    {
        VAR_2 = VAR_1->i_packet - VAR_0;
        for(unsigned VAR_5 = VAR_2; VAR_5 < VAR_1->i_packet; VAR_5++)
        {
            if(!VAR_3 || VAR_1->packets[VAR_5 % VAR_0].diff < VAR_3->diff)
                VAR_3 = &VAR_1->packets[VAR_5 % VAR_0];

            if(!VAR_4 || VAR_1->packets[VAR_5 % VAR_0].diff > VAR_4->diff)
                VAR_4 = &VAR_1->packets[VAR_5 % VAR_0];
        }
    }
    else VAR_2 = 0;

    unsigned VAR_6 = 0;
    vlc_tick_t VAR_7 = 0;
    for(unsigned VAR_8 = VAR_2; VAR_8 < VAR_1->i_packet; VAR_8++)
    {
        if(&VAR_1->packets[VAR_8 % VAR_0] == VAR_3 ||
            &VAR_1->packets[VAR_8 % VAR_0] == VAR_4)
            continue;
        VAR_7 += VAR_1->packets[VAR_8 % VAR_0].diff;
        VAR_6++;
    }

    return VAR_6 ? VAR_7 / VAR_6 : 0;
}
